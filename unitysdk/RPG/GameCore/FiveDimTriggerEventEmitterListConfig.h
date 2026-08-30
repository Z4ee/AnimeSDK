#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimSingleTriggerEventEmitterConfig; }

#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERLISTCONFIG_METHOD_3_284F55F2B4C7C3D0_OFFSET UNITYSDK_OFFSET(0x1DCA9420)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERLISTCONFIG_METHOD_3_456440F9EC6AD993_OFFSET UNITYSDK_OFFSET(0x1DCA93E0)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA9410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerEventEmitterListConfig_TypeDefinitionIndex = 18430;

	class FiveDimTriggerEventEmitterListConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsTriggerEventEmitterList; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimSingleTriggerEventEmitterConfig*>* TriggerList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_456440F9EC6AD993(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERLISTCONFIG_METHOD_3_456440F9EC6AD993_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_284F55F2B4C7C3D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERLISTCONFIG_METHOD_3_284F55F2B4C7C3D0_OFFSET))(a1, a2);
		}
	};
}
