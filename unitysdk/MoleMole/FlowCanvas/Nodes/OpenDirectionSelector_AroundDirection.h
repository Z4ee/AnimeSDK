#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/OpenDirectionSelector.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x10E18D40)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_GETDATA_OFFSET UNITYSDK_OFFSET(0x10E18EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x10E19440)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_METHOD_4_24B1E1DE85E3C92F_OFFSET UNITYSDK_OFFSET(0x10E19860)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_METHOD_4_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0x10E19520)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_METHOD_4_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0x10E19770)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_METHOD_4_8A5D6889494E1D04_OFFSET UNITYSDK_OFFSET(0x10E19660)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_METHOD_4_C1397965C8E8E75A_OFFSET UNITYSDK_OFFSET(0x10E195B0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_SETPATH_OFFSET UNITYSDK_OFFSET(0x10E18CA0)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E19470)
#define MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x10E19450)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int OpenDirectionSelector_AroundDirection_TypeDefinitionIndex = 64171;

	class OpenDirectionSelector_AroundDirection : public ::MoleMole::FlowCanvas::Nodes::OpenDirectionSelector
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_direction()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(OpenDirectionSelector_AroundDirection_TypeDefinitionIndex)->GetStaticField(0xDD40);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_projectOnXZPlane()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(OpenDirectionSelector_AroundDirection_TypeDefinitionIndex)->GetStaticField(0xDD48);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_directionOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(OpenDirectionSelector_AroundDirection_TypeDefinitionIndex)->GetStaticField(0xDD50);
		}
		::UnityEngine::Vector3 direction; // 0x40
		::System::Boolean projectOnXZPlane; // 0x4C
		::System::Single directionOffset; // 0x50
		::System::Boolean makeContextDependent; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::System::Single GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_GETDATA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void Method_4_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_METHOD_4_439B588EB4881570_OFFSET))(this, a1);
		}

		::System::Single Method_4_C1397965C8E8E75A(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_METHOD_4_C1397965C8E8E75A_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_4_8A5D6889494E1D04(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_METHOD_4_8A5D6889494E1D04_OFFSET))(this, a1);
		}

		::System::Void Method_4_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_METHOD_4_5A60CCF7370A1875_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_24B1E1DE85E3C92F(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_OPENDIRECTIONSELECTOR_AROUNDDIRECTION_METHOD_4_24B1E1DE85E3C92F_OFFSET))(this, a1);
		}
	};
}
