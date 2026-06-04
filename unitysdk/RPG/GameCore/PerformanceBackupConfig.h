#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PERFORMANCEBACKUPCONFIG_METHOD_2_35B6B26CB69DB3D4_OFFSET UNITYSDK_OFFSET(0x199EE780)
#define RPG_GAMECORE_PERFORMANCEBACKUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x199EE9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceBackupConfig_TypeDefinitionIndex = 18082;

	class PerformanceBackupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BackupPerformanceID; // 0x10
		::RPG::GameCore::ELevelPerformanceType BackupPerformanceType; // 0x14
		::Il2CppArray<::System::UInt32>* ExtraActiveGroupList; // 0x18
		::System::Boolean IsOverridePosition; // 0x20
		::RPG::MVector3 OverridePosition; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_35B6B26CB69DB3D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceBackupConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceBackupConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBACKUPCONFIG_METHOD_2_35B6B26CB69DB3D4_OFFSET))(a1, a2);
		}
	};
}
