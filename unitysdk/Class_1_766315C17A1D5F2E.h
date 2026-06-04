#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarkerWithObject.h"

class Class_0_16E4307DCC419505_405_Class_3_363670394F299996;
class Class_0_16E4307DCC419505_405_Class_3_410EEB4A0F592FBB;
class Class_0_16E4307DCC419505_96;
class Class_0_16E4307DCC419505_97;
class Class_1_38A5D85D4AE9F24D;
class Class_1_FD7BA687A1A99180;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_1_766315C17A1D5F2E_CLEAR_OFFSET UNITYSDK_OFFSET(0x1384CE80)
#define CLASS_1_766315C17A1D5F2E_GETUNEVALUATEDNEXTSTATE_OFFSET UNITYSDK_OFFSET(0x1384D340)
#define CLASS_1_766315C17A1D5F2E_GETUNITYANIMATOR_OFFSET UNITYSDK_OFFSET(0x1384D3D0)
#define CLASS_1_766315C17A1D5F2E_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x1384D410)
#define CLASS_1_766315C17A1D5F2E_GET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0x1384D2B0)
#define CLASS_1_766315C17A1D5F2E_GET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0x1384D310)
#define CLASS_1_766315C17A1D5F2E_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1384D420)
#define CLASS_1_766315C17A1D5F2E_GET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0x1384D2D0)
#define CLASS_1_766315C17A1D5F2E_GET_ONANIMATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1384D2F0)
#define CLASS_1_766315C17A1D5F2E_GET_ONANIMATORMOVECALLBACKMAP_OFFSET UNITYSDK_OFFSET(0x1384D330)
#define CLASS_1_766315C17A1D5F2E_GET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0x1384D290)
#define CLASS_1_766315C17A1D5F2E_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x1384D200)
#define CLASS_1_766315C17A1D5F2E_GET_WORLDREF_OFFSET UNITYSDK_OFFSET(0x1384D1D0)
#define CLASS_1_766315C17A1D5F2E_METHOD_1_0C2F125F54C32BE5_OFFSET UNITYSDK_OFFSET(0x1384CB00)
#define CLASS_1_766315C17A1D5F2E_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1384D130)
#define CLASS_1_766315C17A1D5F2E_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1384D220)
#define CLASS_1_766315C17A1D5F2E_METHOD_1_892D0C7F01734DAA_OFFSET UNITYSDK_OFFSET(0x1384CCD0)
#define CLASS_1_766315C17A1D5F2E_METHOD_1_AC6344B47CF49F47_OFFSET UNITYSDK_OFFSET(0x1384CDB0)
#define CLASS_1_766315C17A1D5F2E_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x1384D1F0)
#define CLASS_1_766315C17A1D5F2E_METHOD_1_FAC3436B3B22B430_OFFSET UNITYSDK_OFFSET(0x1384D060)
#define CLASS_1_766315C17A1D5F2E_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x1384D430)
#define CLASS_1_766315C17A1D5F2E_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1384D380)
#define CLASS_1_766315C17A1D5F2E_SET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0x1384D2C0)
#define CLASS_1_766315C17A1D5F2E_SET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0x1384D320)
#define CLASS_1_766315C17A1D5F2E_SET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0x1384D2E0)
#define CLASS_1_766315C17A1D5F2E_SET_ONANIMATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1384D300)
#define CLASS_1_766315C17A1D5F2E_SET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0x1384D2A0)
#define CLASS_1_766315C17A1D5F2E_SET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x1384D210)
#define CLASS_1_766315C17A1D5F2E_SET_WORLDREF_OFFSET UNITYSDK_OFFSET(0x1384D1E0)
#define CLASS_1_766315C17A1D5F2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1384D740)
#define CLASS_1_766315C17A1D5F2E__CTOR_OFFSET UNITYSDK_OFFSET(0x1384D640)

inline static constexpr unsigned int Class_1_766315C17A1D5F2E_TypeDefinitionIndex = 71853;

class Class_1_766315C17A1D5F2E : public ::System::Object
{
public:
	static ::Unity::Profiling::ProfilerMarkerWithObject* StaticGet_Field_1_0()
	{
		return (::Unity::Profiling::ProfilerMarkerWithObject*)Il2CppClass::FromTypeDefinitionIndex(Class_1_766315C17A1D5F2E_TypeDefinitionIndex)->GetStaticField(0x12520);
	}
	::Class_1_FD7BA687A1A99180* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_96*>* Field_1_2; // 0x18
	::RPG::GameCore::GameWorld* _WorldRef_k__BackingField; // 0x20
	::Il2CppArray<::System::String*>* Field_1_4; // 0x28
	::Il2CppArray<::System::String*>* Field_1_5; // 0x30
	::RPG::GameCore::GameEntity* Field_1_6; // 0x38
	::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* _DynamicAnimEventDataList_k__BackingField; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_405_Class_3_410EEB4A0F592FBB*>* _OnAnimatorMoveCallbackMap_k__BackingField; // 0x48
	::RPG::GameCore::TaskContext* _TaskContext_k__BackingField; // 0x50
	::Entitas::IEntity* Field_1_10; // 0x58
	::Struct_2_2B16FFFF87B43037 Field_1_11; // 0x60
	::UnityEngine::Animator* Field_1_12; // 0x70
	::Class_0_16E4307DCC419505_405_Class_3_363670394F299996* _OnAnimationStateChange_k__BackingField; // 0x78
	::System::UInt32 Field_1_14; // 0x80
	::System::Boolean _NeedResetEvent_k__BackingField; // 0x84
	::System::Boolean _AnimatorNotInit_k__BackingField; // 0x85
	::System::Int32 _ReEntryCounter_k__BackingField; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E__CCTOR_OFFSET))();
	}

	::System::Void Method_1_0C2F125F54C32BE5(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_97* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_97*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_METHOD_1_0C2F125F54C32BE5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_1_892D0C7F01734DAA(::Class_0_16E4307DCC419505_96* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_0_16E4307DCC419505_96*))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_METHOD_1_892D0C7F01734DAA_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_96* Method_1_AC6344B47CF49F47(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_96*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_METHOD_1_AC6344B47CF49F47_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_FAC3436B3B22B430(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_METHOD_1_FAC3436B3B22B430_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::RPG::GameCore::GameWorld* get_WorldRef()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_GET_WORLDREF_OFFSET))(this);
	}

	::System::Void set_WorldRef(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_SET_WORLDREF_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* get_TaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_GET_TASKCONTEXT_OFFSET))(this);
	}

	::System::Void set_TaskContext(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_SET_TASKCONTEXT_OFFSET))(this, a1);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Int32 get_ReEntryCounter()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_GET_REENTRYCOUNTER_OFFSET))(this);
	}

	::System::Void set_ReEntryCounter(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_SET_REENTRYCOUNTER_OFFSET))(this, a1);
	}

	::System::Boolean get_AnimatorNotInit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_GET_ANIMATORNOTINIT_OFFSET))(this);
	}

	::System::Void set_AnimatorNotInit(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_SET_ANIMATORNOTINIT_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedResetEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_GET_NEEDRESETEVENT_OFFSET))(this);
	}

	::System::Void set_NeedResetEvent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_SET_NEEDRESETEVENT_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_405_Class_3_363670394F299996* get_OnAnimationStateChange()
	{
		return ((::Class_0_16E4307DCC419505_405_Class_3_363670394F299996*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_GET_ONANIMATIONSTATECHANGE_OFFSET))(this);
	}

	::System::Void set_OnAnimationStateChange(::Class_0_16E4307DCC419505_405_Class_3_363670394F299996* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_405_Class_3_363670394F299996*))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_SET_ONANIMATIONSTATECHANGE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* get_DynamicAnimEventDataList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_GET_DYNAMICANIMEVENTDATALIST_OFFSET))(this);
	}

	::System::Void set_DynamicAnimEventDataList(::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>*))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_SET_DYNAMICANIMEVENTDATALIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_405_Class_3_410EEB4A0F592FBB*>* get_OnAnimatorMoveCallbackMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_405_Class_3_410EEB4A0F592FBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_GET_ONANIMATORMOVECALLBACKMAP_OFFSET))(this);
	}

	::System::Int32 GetUnevaluatedNextState()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_GETUNEVALUATEDNEXTSTATE_OFFSET))(this);
	}

	::System::Single QueryStateNoramlizedStartTime(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET))(this, a1);
	}

	::UnityEngine::Animator* GetUnityAnimator()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_GETUNITYANIMATOR_OFFSET))(this);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_766315C17A1D5F2E_ONANIMATORMOVE_OFFSET))(this, a1);
	}
};
