#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageHarmonyPlayerPosSignalMonoSerialization; }
namespace RPG::GameCore { class StageHarmonySignalDemodulatorMonoSerialization; }
namespace RPG::GameCore { class StageHarmonySignalDynamicDialogMonoSerialization; }
namespace RPG::GameCore { class StageHarmonySignalDynamicPatternMonoSerialization; }
namespace RPG::GameCore { class StageHarmonyTrafficLightMonoSerialization; }

#define RPG_GAMECORE_STAGESCENEITEMSERIALIZATIONDATA_METHOD_2_7A0ECD1196EB6BF7_OFFSET UNITYSDK_OFFSET(0x18E93250)
#define RPG_GAMECORE_STAGESCENEITEMSERIALIZATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E934B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageSceneItemSerializationData_TypeDefinitionIndex = 18235;

	class StageSceneItemSerializationData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageHarmonyTrafficLightMonoSerialization*>* StageHarmonyTrafficLightMonoSerialization; // 0x10
		::Il2CppArray<::RPG::GameCore::StageHarmonySignalDynamicPatternMonoSerialization*>* StageHarmonySignalDynamicPatternMonoSerialization; // 0x18
		::Il2CppArray<::RPG::GameCore::StageHarmonySignalDynamicDialogMonoSerialization*>* StageHarmonySignalDynamicDialogMonoSerialization; // 0x20
		::Il2CppArray<::RPG::GameCore::StageHarmonySignalDemodulatorMonoSerialization*>* StageHarmonySignalDemodulatorMonoSerialization; // 0x28
		::Il2CppArray<::RPG::GameCore::StageHarmonyPlayerPosSignalMonoSerialization*>* StageHarmonyPlayerPosSignalMonoSerialization; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGESCENEITEMSERIALIZATIONDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7A0ECD1196EB6BF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageSceneItemSerializationData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageSceneItemSerializationData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGESCENEITEMSERIALIZATIONDATA_METHOD_2_7A0ECD1196EB6BF7_OFFSET))(a1, a2);
		}
	};
}
