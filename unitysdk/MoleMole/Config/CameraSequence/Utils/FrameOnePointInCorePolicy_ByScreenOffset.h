#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Config/CameraSequence/Utils/FrameOnePointInCorePolicy_ByScreenOffset_Struct_2_2C26717FA1BD2C55.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/CameraSequence/FrameOnePointInCorePolicy.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class AspectRatioPolicy_Default; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x134F3900)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_GETDATA_OFFSET UNITYSDK_OFFSET(0x134F3AB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x134F3AA0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_METHOD_4_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0x134F3EB0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_METHOD_4_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0x134F3DC0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_METHOD_4_C20423C7ECF84B15_OFFSET UNITYSDK_OFFSET(0x134F3D30)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_SETPATH_OFFSET UNITYSDK_OFFSET(0x134F3860)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x134F3C80)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x134F3C20)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameOnePointInCorePolicy_ByScreenOffset_TypeDefinitionIndex = 84604;

	class FrameOnePointInCorePolicy_ByScreenOffset : public ::PipelineCamera::CameraSequence::FrameOnePointInCorePolicy
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_screenOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByScreenOffset_TypeDefinitionIndex)->GetStaticField(0xDB30);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByScreenOffset_TypeDefinitionIndex)->GetStaticField(0xDB38);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_radius()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOnePointInCorePolicy_ByScreenOffset_TypeDefinitionIndex)->GetStaticField(0xDB40);
		}
		::PipelineCamera::CameraSequence::AspectRatioPolicy_Default* aspectRatio; // 0x40
		::System::Single fieldOfView; // 0x48
		::UnityEngine::Vector2 screenOffset; // 0x4C
		::System::Single radius; // 0x54
		::System::Boolean makeContextDependent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::PipelineCamera::WorldBasicCameraData GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::UnityEngine::Vector3 a3)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_GETDATA_OFFSET))(this, a1, a2, a3);
		}

		::MoleMole::Config::CameraSequence::Utils::FrameOnePointInCorePolicy_ByScreenOffset_Struct_2_2C26717FA1BD2C55 Method_4_C20423C7ECF84B15(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::MoleMole::Config::CameraSequence::Utils::FrameOnePointInCorePolicy_ByScreenOffset_Struct_2_2C26717FA1BD2C55(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_METHOD_4_C20423C7ECF84B15_OFFSET))(this, a1);
		}

		::System::Void Method_4_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_METHOD_4_5A60CCF7370A1875_OFFSET))(this, a1);
		}

		::System::Void Method_4_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_METHOD_4_439B588EB4881570_OFFSET))(this, a1);
		}
	};
}
