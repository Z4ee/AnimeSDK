#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { template <typename T> class ReferenceValue_1; }
namespace MoleMole::Config::CameraSequence::Utils { class EntityLocationPolicy; }
namespace MoleMole::FlowCanvas::Nodes { class AspectRatioProvider; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x19DAA330)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x19DAA3A0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_ENTITYID_OFFSET UNITYSDK_OFFSET(0x19DAA740)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_ENTITYWORLD_OFFSET UNITYSDK_OFFSET(0x19DAA8A0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x19DAA5C0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_HEIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x19DAA500)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_OUTPUTDIRECTION_OFFSET UNITYSDK_OFFSET(0x19DAA7F0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_PITCH_OFFSET UNITYSDK_OFFSET(0x19DAA680)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_GETDESIREDRADIUS_OFFSET UNITYSDK_OFFSET(0x19DABBF0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x19DAA950)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x19DAA990)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x19DAA9A0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x19DABBA0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x19DAB190)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DABE60)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19DABDB0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT__RECEIVENOTIFYTICK_G__DOPROBE_34_0_OFFSET UNITYSDK_OFFSET(0x19DAB770)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CameraSequenceStateEvent_ResolveOpenDirectionInLevelSettlement_TypeDefinitionIndex = 75109;

	class CameraSequenceStateEvent_ResolveOpenDirectionInLevelSettlement : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet_ProbeDirection()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_ResolveOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x4C1E0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_OutputDirection()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_ResolveOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x119D0);
		}
		static ::Foundation::Unreal::FName* StaticGet_ProbeFrameCountId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_ResolveOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x119D8);
		}
		static ::Foundation::Unreal::FName* StaticGet_ProbeLengthId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_ResolveOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x119E0);
		}
		static ::Foundation::Unreal::FName* StaticGet_EntityLocationId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_ResolveOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x119E8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityWorld()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_ResolveOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x119F0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_ResolveOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x119F8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_fieldOfView()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_ResolveOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x11A00);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_ResolveOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x11A08);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_heightRatio()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_ResolveOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x11A10);
		}
		// static const ::System::Int32 SampleEachFrame = 0x4; // 0x0
		::System::UInt32 EntityId; // 0x50
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x58
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* PivotLocation; // 0x60
		::MoleMole::FlowCanvas::Nodes::AspectRatioProvider* aspectRatio; // 0x68
		::System::Single heightRatio; // 0x70
		::System::Single fieldOfView; // 0x74
		::System::Single pitch; // 0x78
		::Foundation::ReferenceValue_1<::UnityEngine::Vector3>* OutputDirection; // 0x80
		::System::Boolean makeContextDependent; // 0x88
		::System::Boolean isEntityValid; // 0x89

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT__CCTOR_OFFSET))();
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Single fetch_heightRatio(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_HEIGHTRATIO_OFFSET))(this, context);
		}

		::System::Single fetch_fieldOfView(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_FIELDOFVIEW_OFFSET))(this, context);
		}

		::System::Single fetch_pitch(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_PITCH_OFFSET))(this, context);
		}

		::System::UInt32 fetch_EntityId(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_ENTITYID_OFFSET))(this, context);
		}

		::Foundation::ReferenceValue_1<::UnityEngine::Vector3>* fetch_OutputDirection(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::Foundation::ReferenceValue_1<::UnityEngine::Vector3>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_OUTPUTDIRECTION_OFFSET))(this, context);
		}

		::Nap::NapECS::EcsWorld* fetch_EntityWorld(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_ENTITYWORLD_OFFSET))(this, context);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_RECEIVENOTIFYEND_OFFSET))(this, context);
		}

		static ::System::Single GetDesiredRadius(::System::Single aspectRatio, ::System::Single fieldOfView, ::System::Single heightRatio, ::System::UInt32 entityId, ::Nap::NapECS::EcsWorld* entityWorld)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT_GETDESIREDRADIUS_OFFSET))(aspectRatio, fieldOfView, heightRatio, entityId, entityWorld);
		}

		static ::System::Void _ReceiveNotifyTick_g__DoProbe_34_0(::UnityEngine::Vector3& probeDirection, ::UnityEngine::Vector3& probeResult, ::PipelineCamera::CameraSequence::CameraSequenceContext*& sequenceContext)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_RESOLVEOPENDIRECTIONINLEVELSETTLEMENT__RECEIVENOTIFYTICK_G__DOPROBE_34_0_OFFSET))(probeDirection, probeResult, sequenceContext);
		}
	};
}
