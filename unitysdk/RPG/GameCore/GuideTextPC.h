#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GUIDETEXTPC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B66C270)
#define RPG_GAMECORE_GUIDETEXTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B66C700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideTextPC_TypeDefinitionIndex = 23472;

	class GuideTextPC : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean UsePCGuide; // 0x10
		::System::Boolean Skip; // 0x11
		::System::Int32 GuideResID; // 0x14
		::System::String* Path; // 0x18
		::System::String* TextPath; // 0x20
		::System::String* Text; // 0x28
		::System::String* ControllerText; // 0x30
		::System::String* ActionName; // 0x38
		::System::String* ControllerActionName; // 0x40
		::System::Boolean CopyAnchorAndSale; // 0x48
		::System::Single OffsetX; // 0x4C
		::System::Single OffsetY; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDETEXTPC__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GuideTextPC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GuideTextPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDETEXTPC_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
