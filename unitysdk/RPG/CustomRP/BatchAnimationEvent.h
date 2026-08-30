#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/BatchAnimEventObjCB.h"

namespace RPG::CustomRP { class BAEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class BatchAnimEventObjCB_ExecuteEventFun; }
namespace UnityEngine::Rendering { class BatchAnimation; }

#define RPG_CUSTOMRP_BATCHANIMATIONEVENT_BUILDEVENTMAP_OFFSET UNITYSDK_OFFSET(0x1929E450)
#define RPG_CUSTOMRP_BATCHANIMATIONEVENT_EXECUTEEVENT_OFFSET UNITYSDK_OFFSET(0x1929E250)
#define RPG_CUSTOMRP_BATCHANIMATIONEVENT_GETEVENTEXECUTORFUN_OFFSET UNITYSDK_OFFSET(0x1929E3B0)
#define RPG_CUSTOMRP_BATCHANIMATIONEVENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1929E760)
#define RPG_CUSTOMRP_BATCHANIMATIONEVENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1929E3C0)
#define RPG_CUSTOMRP_BATCHANIMATIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1929DF00)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int BatchAnimationEvent_TypeDefinitionIndex = 36909;

	class BatchAnimationEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::CustomRP::BAEvent*>* events; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::CustomRP::BAEvent*>* eventMap; // 0x20
		::UnityEngine::Rendering::BatchAnimation* baCache; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATCHANIMATIONEVENT__CTOR_OFFSET))(this);
		}

		::System::Void ExecuteEvent(::UnityEngine::Rendering::BatchAnimation* a1, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchAnimEventObjCB>& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchAnimEventObjCB>&, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATCHANIMATIONEVENT_EXECUTEEVENT_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Rendering::BatchAnimEventObjCB_ExecuteEventFun* GetEventExecutorFun(::System::String* a1)
		{
			return ((::UnityEngine::Rendering::BatchAnimEventObjCB_ExecuteEventFun*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATCHANIMATIONEVENT_GETEVENTEXECUTORFUN_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATCHANIMATIONEVENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATCHANIMATIONEVENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void BuildEventMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BATCHANIMATIONEVENT_BUILDEVENTMAP_OFFSET))(this);
		}
	};
}
