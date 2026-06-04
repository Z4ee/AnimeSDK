#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/BAThrowEvent_ThrowState.h"
#include "unitysdk/RPG/CustomRP/BatchAnimationEvent.h"
#include "unitysdk/UnityEngine/Rendering/BatchAnimEventObjCB.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class BatchAnimEventObjCB_ExecuteEventFun; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define RPG_CUSTOMRP_BATHROWEVENT_ATTACHTRANS_OFFSET UNITYSDK_OFFSET(0x18EA6330)
#define RPG_CUSTOMRP_BATHROWEVENT_BEGIN_OFFSET UNITYSDK_OFFSET(0x18EA65F0)
#define RPG_CUSTOMRP_BATHROWEVENT_END_OFFSET UNITYSDK_OFFSET(0x18EA6600)
#define RPG_CUSTOMRP_BATHROWEVENT_EVENT_THROW_OFFSET UNITYSDK_OFFSET(0x18EA60D0)
#define RPG_CUSTOMRP_BATHROWEVENT_GETEVENTEXECUTORFUN_OFFSET UNITYSDK_OFFSET(0x18EA6010)
#define RPG_CUSTOMRP_BATHROWEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x18EA6390)
#define RPG_CUSTOMRP_BATHROWEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA6650)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int BAThrowEvent_TypeDefinitionIndex = 35543;

	class BAThrowEvent : public ::RPG::CustomRP::BatchAnimationEvent
	{
	public:
		::UnityEngine::Rendering::BatchAnimationInstance* a; // 0x30
		::UnityEngine::Rendering::BatchAnimationInstance* b; // 0x38
		::UnityEngine::Transform* obj; // 0x40
		::System::Int32 boneIndex; // 0x48
		::RPG::CustomRP::BAThrowEvent_ThrowState throwState; // 0x4C
		::UnityEngine::Rendering::BatchAnimationInstance* currentInstance; // 0x50
		::UnityEngine::Vector3 startPos; // 0x58
		::System::Single deltaDist; // 0x64
		::System::Int32 updateCount; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATHROWEVENT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::BatchAnimEventObjCB_ExecuteEventFun* GetEventExecutorFun(::System::String* a1)
		{
			return ((::UnityEngine::Rendering::BatchAnimEventObjCB_ExecuteEventFun*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATHROWEVENT_GETEVENTEXECUTORFUN_OFFSET))(this, a1);
		}

		::System::Void Event_Throw(::UnityEngine::Rendering::BatchAnimation* a1, ::UnityEngine::Rendering::BatchAnimEventObjCB& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::UnityEngine::Rendering::BatchAnimEventObjCB&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATHROWEVENT_EVENT_THROW_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATHROWEVENT_UPDATE_OFFSET))(this);
		}

		::System::Void Begin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATHROWEVENT_BEGIN_OFFSET))(this);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATHROWEVENT_END_OFFSET))(this);
		}

		::System::Void AttachTrans(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATHROWEVENT_ATTACHTRANS_OFFSET))(this, a1, a2);
		}
	};
}
