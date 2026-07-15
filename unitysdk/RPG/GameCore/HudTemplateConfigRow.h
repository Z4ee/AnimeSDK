#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GotoType.h"
#include "unitysdk/RPG/GameCore/HudType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HUDTEMPLATECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B68E500)
#define RPG_GAMECORE_HUDTEMPLATECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B68EB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HudTemplateConfigRow_TypeDefinitionIndex = 13274;

	class HudTemplateConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::HudType>* HideHudUINodeList; // 0x10
		::Il2CppArray<::System::String*>* LockInputActionName; // 0x18
		::Il2CppArray<::RPG::GameCore::GotoType>* LockGotoTypeList; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 ActionOperationSetID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HudTemplateConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HudTemplateConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HUDTEMPLATECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
