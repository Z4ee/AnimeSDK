#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/EntityLocationPolicy.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0xE961F60)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_GETDATA_OFFSET UNITYSDK_OFFSET(0xE962100)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xE962270)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_METHOD_4_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0xE9624E0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_METHOD_4_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0xE962300)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_METHOD_4_B56EBF9AD2EEE9E9_OFFSET UNITYSDK_OFFSET(0xE9623F0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_SETPATH_OFFSET UNITYSDK_OFFSET(0xE961EC0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL__CCTOR_OFFSET UNITYSDK_OFFSET(0xE9622A0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0xE962280)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int EntityLocationPolicy_External_TypeDefinitionIndex = 67163;

	class EntityLocationPolicy_External : public ::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_Location()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(EntityLocationPolicy_External_TypeDefinitionIndex)->GetStaticField(0x11A80);
		}
		::UnityEngine::Vector3 Location; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::System::UInt32 a3, ::Nap::NapECS::EcsWorld* a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_GETDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void Method_4_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_METHOD_4_5A60CCF7370A1875_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_4_B56EBF9AD2EEE9E9(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_METHOD_4_B56EBF9AD2EEE9E9_OFFSET))(this, a1);
		}

		::System::Void Method_4_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY_EXTERNAL_METHOD_4_439B588EB4881570_OFFSET))(this, a1);
		}
	};
}
