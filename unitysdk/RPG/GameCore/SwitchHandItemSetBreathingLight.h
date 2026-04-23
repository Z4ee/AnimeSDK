#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_METHOD_3_887F475FC80EB305_OFFSET UNITYSDK_OFFSET(0x18EBB240)
#define RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_METHOD_3_973169CDB544F910_OFFSET UNITYSDK_OFFSET(0x18EBB1C0)
#define RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBB210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandItemSetBreathingLight_TypeDefinitionIndex = 19960;

	class SwitchHandItemSetBreathingLight : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Boolean EnableItem; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_973169CDB544F910(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandItemSetBreathingLight*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandItemSetBreathingLight*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_METHOD_3_973169CDB544F910_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_887F475FC80EB305(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandItemSetBreathingLight* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandItemSetBreathingLight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_METHOD_3_887F475FC80EB305_OFFSET))(a1, a2);
		}
	};
}
