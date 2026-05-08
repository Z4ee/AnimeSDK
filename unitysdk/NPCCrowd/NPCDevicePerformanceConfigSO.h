#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/NPCCrowd/PerformanceSetting.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"
#include "unitysdk/cfg/SceneSizeType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_NPCDEVICEPERFORMANCECONFIGSO__CTOR_OFFSET UNITYSDK_OFFSET(0x1150B690)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCDevicePerformanceConfigSO_TypeDefinitionIndex = 41191;

	class NPCDevicePerformanceConfigSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::cfg::SceneSizeType, ::System::Collections::Generic::Dictionary_2<::MoleMole::PerformanceSettingProfile_ENPCOmitLevel, ::NPCCrowd::PerformanceSetting>*>* sceneSize2OmitLevel2NPCCount; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCDEVICEPERFORMANCECONFIGSO__CTOR_OFFSET))(this);
		}
	};
}
