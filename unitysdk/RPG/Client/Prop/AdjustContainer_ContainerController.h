#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2679F01039F3FC24;
class Class_2_CB25D7A6FABF07EF;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::Prop { class AdjustContainer; }
namespace RPG::Client::Prop { class AdjustContainer_ContainerInstance; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xDBC9FB0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_09124A4A24353C26_OFFSET UNITYSDK_OFFSET(0xDBC96B0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0xDBC9B30)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_2DF7969B85DC261B_OFFSET UNITYSDK_OFFSET(0xDBC6080)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_435B33488FBCBE0B_OFFSET UNITYSDK_OFFSET(0xDBC64C0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0xDBC7020)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_735EE20B25F86BF4_1_OFFSET UNITYSDK_OFFSET(0xDBCA640)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xDBCA590)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xDBCA0F0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_95F9978EEF8F29E5_OFFSET UNITYSDK_OFFSET(0xDBC8FD0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_969EF16C38E0FD30_OFFSET UNITYSDK_OFFSET(0xDBCA6E0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xDBCA2E0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_9E38127F40B34F1F_1_OFFSET UNITYSDK_OFFSET(0xDBC9E50)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_9E38127F40B34F1F_2_OFFSET UNITYSDK_OFFSET(0xDBC90C0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xDBC99D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xDBCA530)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xDBC9640)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_B75D122F21CFAD25_OFFSET UNITYSDK_OFFSET(0xDBC6DE0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_B8A8F4F120B2F6D5_OFFSET UNITYSDK_OFFSET(0xDBC8360)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_E7AB99EDC5373156_OFFSET UNITYSDK_OFFSET(0xDBC8BC0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_EFF275E2C18C04F2_OFFSET UNITYSDK_OFFSET(0xDBC55C0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDBCA750)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___REGENERATENOREUSE_B__6_2_OFFSET UNITYSDK_OFFSET(0xDBCA810)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdjustContainer_ContainerController_TypeDefinitionIndex = 77725;

	class AdjustContainer_ContainerController : public ::System::Object
	{
	public:
		::System::Int32 TargetContainerIndex; // 0x10
		::Il2CppArray<::System::Int32>* FollowContainerIndexArray; // 0x18
		::UnityEngine::Transform* ControllerAttachRoot; // 0x20
		::UnityEngine::GameObject* ContainerItem; // 0x28
		::System::String* ContainerControllerPrefabPath; // 0x30
		::System::Boolean IsRevertDirection; // 0x38
		::System::String* MoveLeftText; // 0x40
		::System::String* MoveRightText; // 0x48
		::System::String* QuitOperationText; // 0x50
		::System::String* MoveOperationText; // 0x58
		::System::String* AnimatorStateName; // 0x60
		::System::String* OnPerformStartCustomEventString; // 0x68
		::System::String* OnPerformEndCustomEventString; // 0x70
		::System::String* MoveWaitPlayerAnimStateName; // 0x78
		::System::Single InteractMoveDelay; // 0x80
		::System::Boolean IsActiveVCamera; // 0x84
		::RPG::Client::Prop::AdjustContainer* OwnerAdjustContainerRef; // 0x88
		::System::Int32 ConsoleID; // 0x90
		::System::Boolean IsInOperation; // 0x94
		::System::Boolean IsInMoving; // 0x95
		::RPG::Client::Prop::AdjustContainer_ContainerInstance* TargetContainerInstance; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::Prop::AdjustContainer_ContainerInstance*>* FollowContainerInstanceList; // 0xA0
		::Class_2_2679F01039F3FC24* _TriggerProxy; // 0xA8
		::System::Collections::Generic::List_1<::System::String*>* _TextOptions; // 0xB0
		::UnityEngine::Animator* _Animator; // 0xB8
		::System::Boolean _IsRight; // 0xC0
		::Class_2_CB25D7A6FABF07EF* _AnimEventCompt; // 0xC8
		::System::Int32 _AnimatorStateNameHash; // 0xD0
		::System::Int32 _MoveWaitPlayerAnimStateNameHash; // 0xD4
		::System::Single _DelayTimer; // 0xD8
		::System::Boolean _IsNeedShowOptionUI; // 0xDC
		::System::Boolean _IsTalkUIReady; // 0xDD
		::RPG::GameCore::OptionTalkInfo* MoveLeftOption; // 0xE0
		::RPG::GameCore::OptionTalkInfo* MoveRightOption; // 0xE8
		::RPG::GameCore::OptionTalkInfo* QuitOption; // 0xF0
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* _StreamingItem; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_B75D122F21CFAD25()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_B75D122F21CFAD25_OFFSET))(this);
		}

		::System::Void Method_1_435B33488FBCBE0B(::RPG::Client::Prop::AdjustContainer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AdjustContainer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_435B33488FBCBE0B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_EFF275E2C18C04F2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_EFF275E2C18C04F2_OFFSET))(this);
		}

		::System::Void Method_1_2DF7969B85DC261B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_2DF7969B85DC261B_OFFSET))(this, a1);
		}

		::System::Void Method_1_51AC7912135C5E23()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_51AC7912135C5E23_OFFSET))(this);
		}

		::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
		}

		::System::Void Method_1_B8A8F4F120B2F6D5(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_B8A8F4F120B2F6D5_OFFSET))(this, a1);
		}

		::System::Void Method_1_09124A4A24353C26(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_09124A4A24353C26_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_E7AB99EDC5373156(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_E7AB99EDC5373156_OFFSET))(this, a1);
		}

		::System::Void Method_1_9E38127F40B34F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
		}

		::System::Void Method_1_9E38127F40B34F1F_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_9E38127F40B34F1F_1_OFFSET))(this);
		}

		::System::Void Method_1_19844080C13BA28F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_19844080C13BA28F_OFFSET))(this);
		}

		::System::Void Method_1_89EF21CA0414B145()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_89EF21CA0414B145_OFFSET))(this);
		}

		::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
		}

		::System::Void Method_1_A27D06F9481FAFDB_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_A27D06F9481FAFDB_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_9E38127F40B34F1F_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_9E38127F40B34F1F_2_OFFSET))(this);
		}

		::System::Void Method_1_735EE20B25F86BF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
		}

		::System::Void Method_1_735EE20B25F86BF4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_735EE20B25F86BF4_1_OFFSET))(this);
		}

		::System::Void Method_1_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_06330CD58CB602B6_OFFSET))(this);
		}

		::System::Void Method_1_969EF16C38E0FD30(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_969EF16C38E0FD30_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_95F9978EEF8F29E5(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_95F9978EEF8F29E5_OFFSET))(this, a1, a2);
		}

		::System::Void __ReGenerateNoReUse_b__6_2(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___REGENERATENOREUSE_B__6_2_OFFSET))(this, a1, a2);
		}
	};
}
