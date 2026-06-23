#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_1.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x10D35070)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_GETDATA_OFFSET UNITYSDK_OFFSET(0x10D35210)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x10D35370)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_METHOD_3_3621B53786EE26C8_OFFSET UNITYSDK_OFFSET(0x10D35280)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_METHOD_3_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0x10D35590)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_METHOD_3_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0x10D353F0)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_METHOD_3_83ED25F6A8C66D20_OFFSET UNITYSDK_OFFSET(0x10D354E0)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_SETPATH_OFFSET UNITYSDK_OFFSET(0x10D34FD0)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D35390)
#define MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D35380)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int AspectRatioProvider_TypeDefinitionIndex = 39856;

	class AspectRatioProvider : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_1<::System::Single>
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_AspectRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(AspectRatioProvider_TypeDefinitionIndex)->GetStaticField(0xCB50);
		}
		::System::Boolean useFixedAspectRatio; // 0x40
		::System::Single fixedAspectRatio; // 0x44
		::System::Single AspectRatio; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::System::Single GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_GETDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void Method_3_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_METHOD_3_5A60CCF7370A1875_OFFSET))(this, a1);
		}

		::System::Single Method_3_83ED25F6A8C66D20(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_METHOD_3_83ED25F6A8C66D20_OFFSET))(this, a1);
		}

		::System::Single Method_3_3621B53786EE26C8(::PipelineCamera::CameraSequence::CameraSequenceContext*& a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_METHOD_3_3621B53786EE26C8_OFFSET))(this, a1);
		}

		::System::Void Method_3_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_ASPECTRATIOPROVIDER_METHOD_3_439B588EB4881570_OFFSET))(this, a1);
		}
	};
}
