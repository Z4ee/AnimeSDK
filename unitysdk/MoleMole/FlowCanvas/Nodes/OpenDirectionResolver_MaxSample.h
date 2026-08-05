#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/OpenDirectionResolver.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::FlowCanvas::Nodes { class OpenDirectionSelector; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1A0600C0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A060260)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1A060770)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_METHOD_4_006A039FD955061C_OFFSET UNITYSDK_OFFSET(0x1A060A30)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_METHOD_4_427F9234AFC9D15D_OFFSET UNITYSDK_OFFSET(0x1A060800)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_METHOD_4_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0x1A0608B0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_METHOD_4_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0x1A060940)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_SETPATH_OFFSET UNITYSDK_OFFSET(0x1A060020)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0607A0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A060780)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int OpenDirectionResolver_MaxSample_TypeDefinitionIndex = 88206;

	class OpenDirectionResolver_MaxSample : public ::MoleMole::FlowCanvas::Nodes::OpenDirectionResolver
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_SampleResult()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(OpenDirectionResolver_MaxSample_TypeDefinitionIndex)->GetStaticField(0xFFA0);
		}
		::MoleMole::FlowCanvas::Nodes::OpenDirectionSelector* selector; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* SampleResult; // 0x48
		::System::Boolean randomSampleOffset; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_GETDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_4_427F9234AFC9D15D(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_METHOD_4_427F9234AFC9D15D_OFFSET))(this, a1);
		}

		::System::Void Method_4_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_METHOD_4_439B588EB4881570_OFFSET))(this, a1);
		}

		::System::Void Method_4_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_METHOD_4_5A60CCF7370A1875_OFFSET))(this, a1);
		}

		::System::Single Method_4_006A039FD955061C(::UnityEngine::Vector3 a1, ::System::Single a2, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONRESOLVER_MAXSAMPLE_METHOD_4_006A039FD955061C_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
