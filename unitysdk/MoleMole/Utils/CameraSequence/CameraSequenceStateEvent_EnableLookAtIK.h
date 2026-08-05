#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x112E6430)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x112E64A0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_FETCH_ENABLELOOKAT_OFFSET UNITYSDK_OFFSET(0x112E6600)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_FETCH_ENTITYID_OFFSET UNITYSDK_OFFSET(0x112E66B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_FETCH_ENTITYWORLD_OFFSET UNITYSDK_OFFSET(0x112E6810)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_FETCH_LOOKATENTITYID_OFFSET UNITYSDK_OFFSET(0x112E6760)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x112E5BC0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x112E5C00)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x112E5C10)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x112E60E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x112E6080)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK__CCTOR_OFFSET UNITYSDK_OFFSET(0x112E6910)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK__CTOR_OFFSET UNITYSDK_OFFSET(0x112E68C0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceStateEvent_EnableLookAtIK_TypeDefinitionIndex = 44183;

	class CameraSequenceStateEvent_EnableLookAtIK : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityWorld()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_EnableLookAtIK_TypeDefinitionIndex)->GetStaticField(0x129A0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_lookAtEntityID()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_EnableLookAtIK_TypeDefinitionIndex)->GetStaticField(0x129A8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_enableLookAt()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_EnableLookAtIK_TypeDefinitionIndex)->GetStaticField(0x129B0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_entityID()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_EnableLookAtIK_TypeDefinitionIndex)->GetStaticField(0x129B8);
		}
		::System::Boolean enableLookAt; // 0x50
		::System::UInt32 entityID; // 0x54
		::System::UInt32 lookAtEntityID; // 0x58
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_RECEIVENOTIFYEND_OFFSET))(this, context);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Boolean fetch_enableLookAt(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_FETCH_ENABLELOOKAT_OFFSET))(this, context);
		}

		::System::UInt32 fetch_entityID(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_FETCH_ENTITYID_OFFSET))(this, context);
		}

		::System::UInt32 fetch_lookAtEntityID(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_FETCH_LOOKATENTITYID_OFFSET))(this, context);
		}

		::Nap::NapECS::EcsWorld* fetch_EntityWorld(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCESTATEEVENT_ENABLELOOKATIK_FETCH_ENTITYWORLD_OFFSET))(this, context);
		}
	};
}
