#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/MoveByBlending_MoveTargetDataProvider.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x14105E90)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING_FETCH_LOCATIONINCAMERASEQUENCE_OFFSET UNITYSDK_OFFSET(0x14106030)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING_GETDATA_OFFSET UNITYSDK_OFFSET(0x14105C80)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x14105DE0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING_SETPATH_OFFSET UNITYSDK_OFFSET(0x14105DF0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x14106150)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x14106130)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING___BASE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x141061B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING___BASE_SETPATH_OFFSET UNITYSDK_OFFSET(0x141062A0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int MoveTargetBySetting_TypeDefinitionIndex = 79061;

	class MoveTargetBySetting : public ::PipelineCamera::CameraSequence::MoveByBlending_MoveTargetDataProvider
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_locationInCameraSequence()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(MoveTargetBySetting_TypeDefinitionIndex)->GetStaticField(0x114C0);
		}
		::System::Boolean makeContextDependent; // 0x40
		::UnityEngine::Vector3 locationInCameraSequence; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING__CCTOR_OFFSET))();
		}

		::UnityEngine::Vector3 GetData(::System::Single time, ::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING_GETDATA_OFFSET))(this, time, context);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& path)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING_SETPATH_OFFSET))(this, path);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING_COLLECTVARIABLE_OFFSET))(this, collector);
		}

		::UnityEngine::Vector3 fetch_locationInCameraSequence(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING_FETCH_LOCATIONINCAMERASEQUENCE_OFFSET))(this, context);
		}

		::System::Void __base_CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING___BASE_COLLECTVARIABLE_OFFSET))(this, P0);
		}

		::System::Void __base_SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_MOVETARGETBYSETTING___BASE_SETPATH_OFFSET))(this, P0);
		}
	};
}
