#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPropSpawnerItem; }
namespace RPG::GameCore { class FiveDimPropSpawnerParam; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPROPSPAWNERCONFIG_METHOD_3_0AFE00211F9D5B11_OFFSET UNITYSDK_OFFSET(0x19750140)
#define RPG_GAMECORE_FIVEDIMPROPSPAWNERCONFIG_METHOD_3_20CFBFD9D1FCFFCE_OFFSET UNITYSDK_OFFSET(0x197501D0)
#define RPG_GAMECORE_FIVEDIMPROPSPAWNERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197501A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPropSpawnerConfig_TypeDefinitionIndex = 17682;

	class FiveDimPropSpawnerConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsPropSpawner; // 0x10
		::System::Boolean SpawnOnInit; // 0x11
		::System::Boolean EnableIntervalSpawn; // 0x12
		::System::Single SpawnInterval; // 0x14
		::System::String* PresetName; // 0x18
		::System::Boolean Unique; // 0x20
		::System::Boolean SpawnAfterDestroy; // 0x21
		::System::Single DelayDuration; // 0x24
		::RPG::MVector3 CreationOffset; // 0x28
		::RPG::GameCore::FiveDimPropSpawnerParam* SpawnParam; // 0x38
		::System::Boolean UseExtraRandomPreset; // 0x40
		::Il2CppArray<::RPG::GameCore::FiveDimPropSpawnerItem*>* ExtraPresetList; // 0x48
		::System::Boolean SendEventOnInit; // 0x50
		::RPG::GameCore::LittleGameEvent* SpawnEvent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPSPAWNERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0AFE00211F9D5B11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPropSpawnerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPropSpawnerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPSPAWNERCONFIG_METHOD_3_0AFE00211F9D5B11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_20CFBFD9D1FCFFCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPropSpawnerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPropSpawnerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPSPAWNERCONFIG_METHOD_3_20CFBFD9D1FCFFCE_OFFSET))(a1, a2);
		}
	};
}
