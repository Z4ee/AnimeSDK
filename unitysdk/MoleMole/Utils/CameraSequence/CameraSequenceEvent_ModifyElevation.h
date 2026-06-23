#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/AttributeSetType.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x12CA5E30)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x12CA5EA0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_FETCH_ELEVATION_OFFSET UNITYSDK_OFFSET(0x12CA6160)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_FETCH_MAXELEVATION_OFFSET UNITYSDK_OFFSET(0x12CA60B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_FETCH_MINELEVATION_OFFSET UNITYSDK_OFFSET(0x12CA6000)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x12CA5540)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x12CA5580)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_RECEIVENOTIFY_OFFSET UNITYSDK_OFFSET(0x12CA5590)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x12CA6250)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA6210)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceEvent_ModifyElevation_TypeDefinitionIndex = 52371;

	class CameraSequenceEvent_ModifyElevation : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyEvent
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_minElevation()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceEvent_ModifyElevation_TypeDefinitionIndex)->GetStaticField(0x11CA0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_maxElevation()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceEvent_ModifyElevation_TypeDefinitionIndex)->GetStaticField(0x11CA8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_elevation()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceEvent_ModifyElevation_TypeDefinitionIndex)->GetStaticField(0x11CB0);
		}
		::MoleMole::Utils::CameraSequence::AttributeSetType setPolicy; // 0x48
		::System::Single minElevation; // 0x4C
		::System::Single maxElevation; // 0x50
		::System::Single elevation; // 0x54
		::System::Boolean makeContextDependent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void ReceiveNotify(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_RECEIVENOTIFY_OFFSET))(this, context);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Single fetch_minElevation(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_FETCH_MINELEVATION_OFFSET))(this, context);
		}

		::System::Single fetch_maxElevation(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_FETCH_MAXELEVATION_OFFSET))(this, context);
		}

		::System::Single fetch_elevation(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEEVENT_MODIFYELEVATION_FETCH_ELEVATION_OFFSET))(this, context);
		}
	};
}
