#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_3.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_COLLECTVARIABLE_OFFSET UNITYSDK_OFFSET(0x16E41670)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_GETDATA_OFFSET UNITYSDK_OFFSET(0x16E41810)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x16E41A80)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_14818C3563DF6DE0_OFFSET UNITYSDK_OFFSET(0x16E421F0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_2E4C82BD3DAC9E52_OFFSET UNITYSDK_OFFSET(0x16E418C0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_439B588EB4881570_OFFSET UNITYSDK_OFFSET(0x16E420A0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_5A60CCF7370A1875_OFFSET UNITYSDK_OFFSET(0x16E423C0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_8067ABEE1E847951_OFFSET UNITYSDK_OFFSET(0x16E41B90)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_C1397965C8E8E75A_1_OFFSET UNITYSDK_OFFSET(0x16E42130)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_C1397965C8E8E75A_2_OFFSET UNITYSDK_OFFSET(0x16E42300)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_C1397965C8E8E75A_OFFSET UNITYSDK_OFFSET(0x16E41FE0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_SETPATH_OFFSET UNITYSDK_OFFSET(0x16E415D0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E41AB0)
#define MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x16E41A90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int FrameOneEntityRotationProvider_TypeDefinitionIndex = 77451;

	class FrameOneEntityRotationProvider : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_3<::UnityEngine::Quaternion, ::System::UInt32, ::Nap::NapECS::EcsWorld*>
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_yaw()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityRotationProvider_TypeDefinitionIndex)->GetStaticField(0xC180);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityRotationProvider_TypeDefinitionIndex)->GetStaticField(0xC188);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_roll()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityRotationProvider_TypeDefinitionIndex)->GetStaticField(0xC190);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_LastCameraData()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(FrameOneEntityRotationProvider_TypeDefinitionIndex)->GetStaticField(0xC198);
		}
		::System::Boolean overridePitch; // 0x40
		::System::Single pitch; // 0x44
		::System::Boolean overrideYaw; // 0x48
		::System::Single yaw; // 0x4C
		::System::Boolean overrideRoll; // 0x50
		::System::Single roll; // 0x54
		::PipelineCamera::WorldBasicCameraData LastCameraData; // 0x58
		::System::Boolean makeContextDependent; // 0x84
		::System::Boolean useRelativeYaw; // 0x85

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void SetPath(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_SETPATH_OFFSET))(this, a1);
		}

		::System::Void CollectVariable(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_COLLECTVARIABLE_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetData(::System::Single a1, ::PipelineCamera::CameraSequence::CameraSequenceContext*& a2, ::System::UInt32 a3, ::Nap::NapECS::EcsWorld* a4)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_GETDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::UnityEngine::Quaternion Method_3_2E4C82BD3DAC9E52(::PipelineCamera::CameraSequence::CameraSequenceContext* a1, ::System::UInt32 a2, ::Nap::NapECS::EcsWorld* a3)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_2E4C82BD3DAC9E52_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_3_C1397965C8E8E75A(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_C1397965C8E8E75A_OFFSET))(this, a1);
		}

		::System::Void Method_3_439B588EB4881570(::PipelineCamera::CameraSequence::CameraSequenceMemberPath& a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceMemberPath&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_439B588EB4881570_OFFSET))(this, a1);
		}

		::System::Single Method_3_C1397965C8E8E75A_1(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_C1397965C8E8E75A_1_OFFSET))(this, a1);
		}

		::PipelineCamera::WorldBasicCameraData Method_3_14818C3563DF6DE0(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_14818C3563DF6DE0_OFFSET))(this, a1);
		}

		::System::Single Method_3_C1397965C8E8E75A_2(::PipelineCamera::CameraSequence::CameraSequenceContext* a1)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_C1397965C8E8E75A_2_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_3_8067ABEE1E847951(::PipelineCamera::CameraSequence::CameraSequenceContext*& a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_8067ABEE1E847951_OFFSET))(this, a1);
		}

		::System::Void Method_3_5A60CCF7370A1875(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector a1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_FRAMEONEENTITYROTATIONPROVIDER_METHOD_3_5A60CCF7370A1875_OFFSET))(this, a1);
		}
	};
}
