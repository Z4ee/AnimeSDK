#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_METHOD_3_3EA0C46619A63200_OFFSET UNITYSDK_OFFSET(0x1E14ED10)
#define RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_METHOD_3_887F475FC80EB305_OFFSET UNITYSDK_OFFSET(0x1E14ED60)
#define RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E14ED50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandItemSetBreathingLight_TypeDefinitionIndex = 20733;

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

		static ::System::Void Method_3_3EA0C46619A63200(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandItemSetBreathingLight*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandItemSetBreathingLight*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_METHOD_3_3EA0C46619A63200_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_887F475FC80EB305(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchHandItemSetBreathingLight* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchHandItemSetBreathingLight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDITEMSETBREATHINGLIGHT_METHOD_3_887F475FC80EB305_OFFSET))(a1, a2);
		}
	};
}
