#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2B16FFFF87B43037.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarkerWithObject.h"

class Class_0_16E4307DCC419505_115;
class Class_0_16E4307DCC419505_116;
class Class_0_16E4307DCC419505_429_Class_3_363670394F299996;
class Class_0_16E4307DCC419505_429_Class_3_410EEB4A0F592FBB;
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

#define CLASS_1_7E7D14C278F37D72_CLEAR_OFFSET UNITYSDK_OFFSET(0x17C9D3C0)
#define CLASS_1_7E7D14C278F37D72_GETUNEVALUATEDNEXTSTATE_OFFSET UNITYSDK_OFFSET(0x17C9D8E0)
#define CLASS_1_7E7D14C278F37D72_GETUNITYANIMATOR_OFFSET UNITYSDK_OFFSET(0x17C9D970)
#define CLASS_1_7E7D14C278F37D72_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x17C9D9B0)
#define CLASS_1_7E7D14C278F37D72_GET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0x17C9D850)
#define CLASS_1_7E7D14C278F37D72_GET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0x17C9D8B0)
#define CLASS_1_7E7D14C278F37D72_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17C9D9C0)
#define CLASS_1_7E7D14C278F37D72_GET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0x17C9D870)
#define CLASS_1_7E7D14C278F37D72_GET_ONANIMATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x17C9D890)
#define CLASS_1_7E7D14C278F37D72_GET_ONANIMATORMOVECALLBACKMAP_OFFSET UNITYSDK_OFFSET(0x17C9D8D0)
#define CLASS_1_7E7D14C278F37D72_GET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0x17C9D830)
#define CLASS_1_7E7D14C278F37D72_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x17C9D740)
#define CLASS_1_7E7D14C278F37D72_GET_WORLDREF_OFFSET UNITYSDK_OFFSET(0x17C9D710)
#define CLASS_1_7E7D14C278F37D72_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x17C9D670)
#define CLASS_1_7E7D14C278F37D72_METHOD_1_892D0C7F01734DAA_OFFSET UNITYSDK_OFFSET(0x17C9D210)
#define CLASS_1_7E7D14C278F37D72_METHOD_1_8B632CA65292BE1C_OFFSET UNITYSDK_OFFSET(0x17C9CFE0)
#define CLASS_1_7E7D14C278F37D72_METHOD_1_AC6344B47CF49F47_OFFSET UNITYSDK_OFFSET(0x17C9D2F0)
#define CLASS_1_7E7D14C278F37D72_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x17C9D730)
#define CLASS_1_7E7D14C278F37D72_METHOD_1_CFDB2DF757369D2B_OFFSET UNITYSDK_OFFSET(0x17C9D760)
#define CLASS_1_7E7D14C278F37D72_METHOD_1_FAC3436B3B22B430_OFFSET UNITYSDK_OFFSET(0x17C9D5A0)
#define CLASS_1_7E7D14C278F37D72_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x17C9D9D0)
#define CLASS_1_7E7D14C278F37D72_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x17C9D920)
#define CLASS_1_7E7D14C278F37D72_SET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0x17C9D860)
#define CLASS_1_7E7D14C278F37D72_SET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0x17C9D8C0)
#define CLASS_1_7E7D14C278F37D72_SET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0x17C9D880)
#define CLASS_1_7E7D14C278F37D72_SET_ONANIMATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x17C9D8A0)
#define CLASS_1_7E7D14C278F37D72_SET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0x17C9D840)
#define CLASS_1_7E7D14C278F37D72_SET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x17C9D750)
#define CLASS_1_7E7D14C278F37D72_SET_WORLDREF_OFFSET UNITYSDK_OFFSET(0x17C9D720)
#define CLASS_1_7E7D14C278F37D72__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C9DCE0)
#define CLASS_1_7E7D14C278F37D72__CTOR_OFFSET UNITYSDK_OFFSET(0x17C9DBE0)

inline static constexpr unsigned int Class_1_7E7D14C278F37D72_TypeDefinitionIndex = 73378;

class Class_1_7E7D14C278F37D72 : public ::System::Object
{
public:
	static ::Unity::Profiling::ProfilerMarkerWithObject* StaticGet_Field_1_0()
	{
		return (::Unity::Profiling::ProfilerMarkerWithObject*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7E7D14C278F37D72_TypeDefinitionIndex)->GetStaticField(0xE8F0);
	}
	::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* _DynamicAnimEventDataList_k__BackingField; // 0x10
	::Il2CppArray<::System::String*>* Field_1_2; // 0x18
	::UnityEngine::Animator* Field_1_3; // 0x20
	::RPG::GameCore::GameEntity* Field_1_4; // 0x28
	::RPG::GameCore::TaskContext* _TaskContext_k__BackingField; // 0x30
	::Class_0_16E4307DCC419505_429_Class_3_363670394F299996* _OnAnimationStateChange_k__BackingField; // 0x38
	::RPG::GameCore::GameWorld* _WorldRef_k__BackingField; // 0x40
	::Il2CppArray<::System::String*>* Field_1_8; // 0x48
	::Class_1_FD7BA687A1A99180* Field_1_9; // 0x50
	::Struct_2_2B16FFFF87B43037 Field_1_10; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_115*>* Field_1_11; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_429_Class_3_410EEB4A0F592FBB*>* _OnAnimatorMoveCallbackMap_k__BackingField; // 0x70
	::Entitas::IEntity* Field_1_13; // 0x78
	::System::UInt32 Field_1_14; // 0x80
	::System::Boolean _NeedResetEvent_k__BackingField; // 0x84
	::System::Boolean _AnimatorNotInit_k__BackingField; // 0x85
	::System::Int32 _ReEntryCounter_k__BackingField; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72__CCTOR_OFFSET))();
	}

	::System::Void Method_1_8B632CA65292BE1C(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_116* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_116*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_METHOD_1_8B632CA65292BE1C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_1_892D0C7F01734DAA(::Class_0_16E4307DCC419505_115* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_0_16E4307DCC419505_115*))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_METHOD_1_892D0C7F01734DAA_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_115* Method_1_AC6344B47CF49F47(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_115*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_METHOD_1_AC6344B47CF49F47_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_FAC3436B3B22B430(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_METHOD_1_FAC3436B3B22B430_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::RPG::GameCore::GameWorld* get_WorldRef()
	{
		return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_GET_WORLDREF_OFFSET))(this);
	}

	::System::Void set_WorldRef(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_SET_WORLDREF_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* get_TaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_GET_TASKCONTEXT_OFFSET))(this);
	}

	::System::Void set_TaskContext(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_SET_TASKCONTEXT_OFFSET))(this, a1);
	}

	::System::String* Method_1_CFDB2DF757369D2B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_METHOD_1_CFDB2DF757369D2B_OFFSET))(this);
	}

	::System::Int32 get_ReEntryCounter()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_GET_REENTRYCOUNTER_OFFSET))(this);
	}

	::System::Void set_ReEntryCounter(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_SET_REENTRYCOUNTER_OFFSET))(this, a1);
	}

	::System::Boolean get_AnimatorNotInit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_GET_ANIMATORNOTINIT_OFFSET))(this);
	}

	::System::Void set_AnimatorNotInit(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_SET_ANIMATORNOTINIT_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedResetEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_GET_NEEDRESETEVENT_OFFSET))(this);
	}

	::System::Void set_NeedResetEvent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_SET_NEEDRESETEVENT_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_429_Class_3_363670394F299996* get_OnAnimationStateChange()
	{
		return ((::Class_0_16E4307DCC419505_429_Class_3_363670394F299996*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_GET_ONANIMATIONSTATECHANGE_OFFSET))(this);
	}

	::System::Void set_OnAnimationStateChange(::Class_0_16E4307DCC419505_429_Class_3_363670394F299996* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_429_Class_3_363670394F299996*))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_SET_ONANIMATIONSTATECHANGE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* get_DynamicAnimEventDataList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_GET_DYNAMICANIMEVENTDATALIST_OFFSET))(this);
	}

	::System::Void set_DynamicAnimEventDataList(::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_38A5D85D4AE9F24D*>*))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_SET_DYNAMICANIMEVENTDATALIST_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_429_Class_3_410EEB4A0F592FBB*>* get_OnAnimatorMoveCallbackMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_429_Class_3_410EEB4A0F592FBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_GET_ONANIMATORMOVECALLBACKMAP_OFFSET))(this);
	}

	::System::Int32 GetUnevaluatedNextState()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_GETUNEVALUATEDNEXTSTATE_OFFSET))(this);
	}

	::System::Single QueryStateNoramlizedStartTime(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET))(this, a1);
	}

	::UnityEngine::Animator* GetUnityAnimator()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_GETUNITYANIMATOR_OFFSET))(this);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_7E7D14C278F37D72_ONANIMATORMOVE_OFFSET))(this, a1);
	}
};
