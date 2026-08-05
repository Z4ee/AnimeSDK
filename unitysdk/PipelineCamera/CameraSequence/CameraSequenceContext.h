#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceContext_ScopedWorkspaceHandle.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceEnvironmentPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableType.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }
namespace PipelineCamera::CameraSequence { class CameraSequenceEnvironment; }
namespace PipelineCamera::CameraSequence { class ICameraSequenceBindingResolver; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Func_9; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class Func_8; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Func_7; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_CLEARENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1F61FBE0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_ENSUREWORKSPACEID_OFFSET UNITYSDK_OFFSET(0x1F61F660)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETBLENDINSETTING_OFFSET UNITYSDK_OFFSET(0x1F61FDA0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETBLENDOUTSETTING_OFFSET UNITYSDK_OFFSET(0x1F61FDF0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETINTERNALENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1F61F870)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETINTERNALIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1F61F7E0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_ISSHAREDCONTEXT_OFFSET UNITYSDK_OFFSET(0x1F61F7A0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACE_1_OFFSET UNITYSDK_OFFSET(0x1F61FA90)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACE_OFFSET UNITYSDK_OFFSET(0x1F61F8E0)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SETBINDINGRESOLVER_OFFSET UNITYSDK_OFFSET(0x1F61FD50)
#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F61F270)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceContext_TypeDefinitionIndex = 38599;

	class CameraSequenceContext : public ::System::Object
	{
	public:
		::Il2CppArray<::PipelineCamera::CameraSequence::CameraSequenceEnvironment*>* _environment; // 0x10
		::PipelineCamera::CameraSequence::ICameraSequenceBindingResolver* _bindingResolver; // 0x18
		::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath, ::System::Int32>* _cachedWorkspaceId; // 0x20
		::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath _workspace; // 0x28
		::System::UInt32 _workspaceId; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void EnsureWorkspaceId(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath newWorkspace)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_ENSUREWORKSPACEID_OFFSET))(this, newWorkspace);
		}

		static ::System::Boolean IsSharedContext(::PipelineCamera::CameraSequence::CameraSequenceVariableType variableType)
		{
			return ((::System::Boolean(*)(::PipelineCamera::CameraSequence::CameraSequenceVariableType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_ISSHAREDCONTEXT_OFFSET))(variableType);
		}

		::Foundation::Unreal::FName GetInternalIdentifier(::Foundation::Unreal::FName identifier, ::PipelineCamera::CameraSequence::CameraSequenceVariableType contextType)
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID, ::Foundation::Unreal::FName, ::PipelineCamera::CameraSequence::CameraSequenceVariableType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETINTERNALIDENTIFIER_OFFSET))(this, identifier, contextType);
		}

		::PipelineCamera::CameraSequence::CameraSequenceEnvironment* GetInternalEnvironment(::PipelineCamera::CameraSequence::CameraSequenceVariableType variableType)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceEnvironment*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETINTERNALENVIRONMENT_OFFSET))(this, variableType);
		}

		::PipelineCamera::CameraSequence::CameraSequenceContext_ScopedWorkspaceHandle ScopedWorkspace(::System::Guid newWorkspace)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceContext_ScopedWorkspaceHandle(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACE_OFFSET))(this, newWorkspace);
		}

		::PipelineCamera::CameraSequence::CameraSequenceContext_ScopedWorkspaceHandle ScopedWorkspace_1(::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath& newWorkspace)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceContext_ScopedWorkspaceHandle(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceEnvironmentPath&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SCOPEDWORKSPACE_1_OFFSET))(this, newWorkspace);
		}

		::System::Void ClearEnvironment(::PipelineCamera::CameraSequence::CameraSequenceVariableType variableType)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_CLEARENVIRONMENT_OFFSET))(this, variableType);
		}

		::System::Void SetBindingResolver(::PipelineCamera::CameraSequence::ICameraSequenceBindingResolver* bindingResolver)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::ICameraSequenceBindingResolver*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_SETBINDINGRESOLVER_OFFSET))(this, bindingResolver);
		}

		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* GetBlendInSetting(::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* fallback)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETBLENDINSETTING_OFFSET))(this, fallback);
		}

		::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* GetBlendOutSetting(::PipelineCamera::CameraSequence::CameraSequenceBlendSetting* fallback)
		{
			return ((::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceBlendSetting*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCECONTEXT_GETBLENDOUTSETTING_OFFSET))(this, fallback);
		}
	};
}
