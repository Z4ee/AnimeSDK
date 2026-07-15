#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ANIMGROUPEVENTENTRY_METHOD_2_543EABFB4E771448_OFFSET UNITYSDK_OFFSET(0x1A055F10)
#define RPG_GAMECORE_ANIMGROUPEVENTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0562C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimGroupEventEntry_TypeDefinitionIndex = 15651;

	class AnimGroupEventEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Single NormalizedTime; // 0x18
		::System::Single ExitNormalizedTime; // 0x1C
		::System::Boolean EnterInTransition; // 0x20
		::System::Boolean ExitInTransition; // 0x21
		::System::Boolean ReEnterOnStateLoop; // 0x22
		::System::Boolean ResetOnSameStateEnter; // 0x23
		::System::Boolean ResetOnSameStateChange; // 0x24
		::System::Boolean DisallowExitTriggeredOnStateUpdate; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMGROUPEVENTENTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_543EABFB4E771448(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimGroupEventEntry*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimGroupEventEntry*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMGROUPEVENTENTRY_METHOD_2_543EABFB4E771448_OFFSET))(a1, a2);
		}
	};
}
