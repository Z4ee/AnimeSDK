#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/OpenDirectionResolver.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { template <typename T> class ReferenceValue_1; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1B198F80)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B199120)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1B1992A0)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_METHOD_4_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0x1B199330)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_METHOD_4_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0x1B199470)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_METHOD_4_BB75FB1EF4C67D87_OFFSET UNITYSDK_OFFSET(0x1B1993C0)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_SETPATH_OFFSET UNITYSDK_OFFSET(0x1B198EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1992D0)
#define MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1992B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExternalOpenDirectionResolver_TypeDefinitionIndex = 84265;

	class ExternalOpenDirectionResolver : public ::MoleMole::FlowCanvas::Nodes::OpenDirectionResolver
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_ExternalDirection()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(ExternalOpenDirectionResolver_TypeDefinitionIndex)->GetStaticField(0xF5F0);
		}
		::Foundation::ReferenceValue_1<::UnityEngine::Vector3>* ExternalDirection; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_GETDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void Method_4_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_METHOD_4_439B588EB4881570_OFFSET))(this, a1);
		}

		::Foundation::ReferenceValue_1<::UnityEngine::Vector3>* Method_4_BB75FB1EF4C67D87(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::Foundation::ReferenceValue_1<::UnityEngine::Vector3>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_METHOD_4_BB75FB1EF4C67D87_OFFSET))(this, a1);
		}

		::System::Void Method_4_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_EXTERNALOPENDIRECTIONRESOLVER_METHOD_4_5A60CCF7370A1875_OFFSET))(this, a1);
		}
	};
}
