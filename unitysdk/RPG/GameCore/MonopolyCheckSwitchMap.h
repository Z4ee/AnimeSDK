#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_METHOD_3_0CDC3B4570B024E7_OFFSET UNITYSDK_OFFSET(0x18B44060)
#define RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_METHOD_3_32372608BF64DE48_OFFSET UNITYSDK_OFFSET(0x18B43FE0)
#define RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x18B44030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCheckSwitchMap_TypeDefinitionIndex = 19921;

	class MonopolyCheckSwitchMap : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerNotSwitch; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerSwitchToSpeWorld; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerSwitchFromSpeWorld; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerSwitch; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_32372608BF64DE48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckSwitchMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckSwitchMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_METHOD_3_32372608BF64DE48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0CDC3B4570B024E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckSwitchMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckSwitchMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSWITCHMAP_METHOD_3_0CDC3B4570B024E7_OFFSET))(a1, a2);
		}
	};
}
