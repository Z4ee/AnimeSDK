#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_945F852A8B481F54_Enum_3_A5191D6218CE9E26.h"
#include "unitysdk/Enum_3_9F43ACD08F0FC8E8_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/ValueType.h"

class Class_1_B7E341C5F1A6F199;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x82BA20)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_CHECKEXECUTE_OFFSET UNITYSDK_OFFSET(0x82BA00)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x82BAA0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_GET_INSID_OFFSET UNITYSDK_OFFSET(0x82B8C0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_ISMATCHNOTCOUNTTAG_OFFSET UNITYSDK_OFFSET(0x82B9D0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_LISTENENTITYTAGCHANGE_OFFSET UNITYSDK_OFFSET(0x82BA50)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x82BA40)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_ONMONSTERSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x82BA80)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_SET_INSID_OFFSET UNITYSDK_OFFSET(0x82B8D0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_SHOULDCOUNT_OFFSET UNITYSDK_OFFSET(0x82B9F0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x82BA30)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x15960660)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x82B8E0)

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FMonsterMemberLeftCheckAction_TypeDefinitionIndex = 54709;

	struct alignas(8) FMonsterMemberLeftCheckAction
	{
		static ::System::Int32* StaticGet_IDG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FMonsterMemberLeftCheckAction_TypeDefinitionIndex)->GetStaticField(0xFD80);
		}
		::Struct_2_FE9BD044832BC9C3 Action; // 0x10
		::System::Action_1<::MoleMole::EntityHandle>* ReachCallback; // 0x40
		::System::Int32 LeftCount; // 0x48
		::Enum_3_9F43ACD08F0FC8E8_1 CompareType; // 0x4C
		::Foundation::ViewObject::ViewObjectHandle GroupHandle; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* targetList; // 0x60
		::MoleMole::FlowCanvas::Nodes::EntityDieCheckType dieCheckType; // 0x68
		::System::Int32 _InsID_k__BackingField; // 0x6C

		::System::Void _ctor(::Struct_2_FE9BD044832BC9C3 action, ::System::Action_1<::MoleMole::EntityHandle>* reachCallback, ::System::Int32 leftCount, ::Enum_3_9F43ACD08F0FC8E8_1 compareType, ::Foundation::ViewObject::ViewObjectHandle groupHandle, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType dieCheckType, ::System::Collections::Generic::List_1<::System::Int32>* targetList)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FE9BD044832BC9C3, ::System::Action_1<::MoleMole::EntityHandle>*, ::System::Int32, ::Enum_3_9F43ACD08F0FC8E8_1, ::Foundation::ViewObject::ViewObjectHandle, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION__CTOR_OFFSET))(this, action, reachCallback, leftCount, compareType, groupHandle, dieCheckType, targetList);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_InsID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_GET_INSID_OFFSET))(this);
		}

		::System::Void set_InsID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_SET_INSID_OFFSET))(this, value);
		}

		::System::Boolean IsMatchNotCountTag(::MoleMole::EntityHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_ISMATCHNOTCOUNTTAG_OFFSET))(this, handle);
		}

		/*
		::System::Boolean ShouldCount(::System::UInt32 groupId, ::System::UInt32 memberId, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*& tags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_SHOULDCOUNT_OFFSET))(this, groupId, memberId, tags);
		}
		*/

		::System::Boolean CheckExecute(::MoleMole::EntityHandle entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_CHECKEXECUTE_OFFSET))(this, entity);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		/*
		::System::Void ListenEntityTagChange(::MoleMole::EntityHandle entityHandle, ::Class_2_945F852A8B481F54_Enum_3_A5191D6218CE9E26 changeType, ::MoleMole::GameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Class_2_945F852A8B481F54_Enum_3_A5191D6218CE9E26, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_LISTENENTITYTAGCHANGE_OFFSET))(this, entityHandle, changeType, tag);
		}
		*/

		::System::Void OnMonsterStateChange(::MoleMole::EntityHandle entity, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_ONMONSTERSTATECHANGE_OFFSET))(this, entity, tag);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FMONSTERMEMBERLEFTCHECKACTION_DISPOSE_OFFSET))(this);
		}
	};
}
