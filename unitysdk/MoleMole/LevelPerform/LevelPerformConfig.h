#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/InLevelMultiChatConfig.h"
#include "unitysdk/MoleMole/LevelPerform/LevelPerformConfig_InLevelCameraSequenceConfig.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::LevelPerform { class LevelSettlementConfig; }
namespace MoleMole::Utils { class NapCameraSequence; }
namespace PipelineCamera::CameraSequence { class CoreDataBindingResolver; }
namespace PipelineCamera::CameraSequence { class CoreDataCollection; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1925B330)
#define MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG_RELOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1925B590)
#define MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG_RELOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1925B350)
#define MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1925B340)
#define MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1925B680)

namespace MoleMole::LevelPerform
{
	inline static constexpr unsigned int LevelPerformConfig_TypeDefinitionIndex = 58452;

	class LevelPerformConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::MoleMole::LevelPerform::LevelPerformConfig** StaticGet__Instance_k__BackingField()
		{
			return (::MoleMole::LevelPerform::LevelPerformConfig**)Il2CppClass::FromTypeDefinitionIndex(LevelPerformConfig_TypeDefinitionIndex)->GetStaticField(0x382B0);
		}
		// static const ::System::String* Path; // 0x0
		// static const ::System::String* NapCameraSequenceCategory; // 0x0
		::MoleMole::LevelPerform::LevelSettlementConfig* levelSettlementConfig; // 0x58
		::MoleMole::Utils::NapCameraSequence* closeUpSequence; // 0x60
		::MoleMole::Utils::NapCameraSequence* stretchSequence; // 0x68
		::PipelineCamera::CameraSequence::CoreDataCollection* chatSequence; // 0x70
		::PipelineCamera::CameraSequence::CoreDataCollection* multiChatSequence; // 0x78
		::MoleMole::InLevelMultiChatConfig multiChatSequenceConfig; // 0x80
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x90
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x98
		::PipelineCamera::CameraSequence::CoreDataCollection* levelFailedSequence; // 0xA0
		::PipelineCamera::CameraSequence::CoreDataBindingResolver* levelFailedSequenceBinding; // 0xA8
		::PipelineCamera::CameraSequence::CoreDataCollection* inLevelChatSequence; // 0xB0
		::PipelineCamera::CameraSequence::CoreDataBindingResolver* inLevelChatSequenceBinding; // 0xB8
		::PipelineCamera::CameraSequence::CoreDataCollection* inLevelMultiChatSequence; // 0xC0
		::PipelineCamera::CameraSequence::CoreDataBindingResolver* inLevelMultiChatSequenceBinding; // 0xC8
		::MoleMole::Utils::NapCameraSequence* inLevelUIGame; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LevelPerform::LevelPerformConfig_InLevelCameraSequenceConfig>* InLevelCameraSequence; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG__CTOR_OFFSET))(this);
		}

		static ::MoleMole::LevelPerform::LevelPerformConfig* get_Instance()
		{
			return ((::MoleMole::LevelPerform::LevelPerformConfig*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MoleMole::LevelPerform::LevelPerformConfig* value)
		{
			return ((::System::Void(*)(::MoleMole::LevelPerform::LevelPerformConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG_SET_INSTANCE_OFFSET))(value);
		}

		static ::System::Void ReloadFromFile(::System::Boolean isAync, ::System::Action* complete)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG_RELOADFROMFILE_OFFSET))(isAync, complete);
		}

		static ::System::Void ReloadFromFileAsync(::System::Single progressSpan, ::System::Action_1<::System::Single>* moveOneStepCallback, ::System::Action_1<::System::String*>* finishCallback, ::System::String* dataName)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_LEVELPERFORMCONFIG_RELOADFROMFILEASYNC_OFFSET))(progressSpan, moveOneStepCallback, finishCallback, dataName);
		}
	};
}
