#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARCUTINCHANGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A071240)
#define RPG_GAMECORE_AVATARCUTINCHANGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0713D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarCutinChangeConfigRow_TypeDefinitionIndex = 12249;

	class AvatarCutinChangeConfigRow : public ::System::Object
	{
	public:
		::System::String* AvatarImgPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* ChangeConditions; // 0x18
		::System::UInt32 AvatarID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCUTINCHANGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarCutinChangeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarCutinChangeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARCUTINCHANGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
