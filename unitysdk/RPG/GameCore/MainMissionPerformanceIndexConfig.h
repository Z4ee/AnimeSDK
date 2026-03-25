#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAINMISSIONPERFORMANCEINDEXCONFIG_METHOD_2_034F158A11D9D52C_OFFSET UNITYSDK_OFFSET(0x17375040)
#define RPG_GAMECORE_MAINMISSIONPERFORMANCEINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17375120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionPerformanceIndexConfig_TypeDefinitionIndex = 17445;

	class MainMissionPerformanceIndexConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* MainMissionIndexList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPERFORMANCEINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_034F158A11D9D52C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MainMissionPerformanceIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MainMissionPerformanceIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPERFORMANCEINDEXCONFIG_METHOD_2_034F158A11D9D52C_OFFSET))(a1, a2);
		}
	};
}
