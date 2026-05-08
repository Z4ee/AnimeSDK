#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class EntityCameraViewConfigByAnisotropicStretch; }
namespace MoleMole::Cameras { class EntityCameraViewConfigByAttachPoints; }
namespace MoleMole::LevelPerform { class DirectKillAdditionSetting; }
namespace PipelineCamera::CameraSequence { class CoreDataBindingResolver; }
namespace PipelineCamera::CameraSequence { class CoreDataCollection; }

#define MOLEMOLE_LEVELPERFORM_LEVELSETTLEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1175A220)

namespace MoleMole::LevelPerform
{
	inline static constexpr unsigned int LevelSettlementConfig_TypeDefinitionIndex = 42143;

	class LevelSettlementConfig : public ::System::Object
	{
	public:
		::PipelineCamera::CameraSequence::CoreDataCollection* sequence; // 0x10
		::PipelineCamera::CameraSequence::CoreDataBindingResolver* bindingResolver; // 0x18
		::PipelineCamera::CameraSequence::CoreDataCollection* fastDirectKillSequence; // 0x20
		::PipelineCamera::CameraSequence::CoreDataBindingResolver* fastDirectKillSequenceBindingResolver; // 0x28
		::MoleMole::Cameras::EntityCameraViewConfigByAnisotropicStretch* player; // 0x30
		::MoleMole::Cameras::EntityCameraViewConfigByAttachPoints* newPlayer; // 0x38
		::System::Boolean useNewPlayerConfig; // 0x40
		::MoleMole::Cameras::EntityCameraViewConfigByAnisotropicStretch* target; // 0x48
		::MoleMole::LevelPerform::DirectKillAdditionSetting* directKill; // 0x50
		::System::Single moveForwardStartPosition; // 0x58
		::System::Single moveRotateStartPosition; // 0x5C
		::System::Single fastMoveForwardStartPosition; // 0x60
		::System::Single fastMoveRotateStartPosition; // 0x64
		::System::Single indirectStartPosition; // 0x68
		::System::Single dialogueStartPosition; // 0x6C
		::System::Single instantStartPosition; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORM_LEVELSETTLEMENTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
