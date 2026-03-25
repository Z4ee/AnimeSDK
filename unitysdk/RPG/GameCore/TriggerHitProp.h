#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TriggerHitPropClientMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRIGGERHITPROP_METHOD_3_1693E8BA028812E7_OFFSET UNITYSDK_OFFSET(0x178C8470)
#define RPG_GAMECORE_TRIGGERHITPROP_METHOD_3_412AB712E6B69138_OFFSET UNITYSDK_OFFSET(0x178C84F0)
#define RPG_GAMECORE_TRIGGERHITPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x178C84C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerHitProp_TypeDefinitionIndex = 18496;

	class TriggerHitProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TriggerHitPropClientMode ClientMode; // 0x20
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1693E8BA028812E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerHitProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerHitProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITPROP_METHOD_3_1693E8BA028812E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_412AB712E6B69138(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerHitProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerHitProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITPROP_METHOD_3_412AB712E6B69138_OFFSET))(a1, a2);
		}
	};
}
