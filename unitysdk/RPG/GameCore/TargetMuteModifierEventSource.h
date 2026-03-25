#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_METHOD_3_1F12EFD71BB1C8AF_OFFSET UNITYSDK_OFFSET(0x177C4620)
#define RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_METHOD_3_2EAEB1F33C928E20_OFFSET UNITYSDK_OFFSET(0x177C46A0)
#define RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x177C4670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMuteModifierEventSource_TypeDefinitionIndex = 21703;

	class TargetMuteModifierEventSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* ModifierEvents; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F12EFD71BB1C8AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMuteModifierEventSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMuteModifierEventSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_METHOD_3_1F12EFD71BB1C8AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2EAEB1F33C928E20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMuteModifierEventSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMuteModifierEventSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_METHOD_3_2EAEB1F33C928E20_OFFSET))(a1, a2);
		}
	};
}
