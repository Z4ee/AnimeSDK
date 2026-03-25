#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2679F01039F3FC24;
class Class_2_705B862E649BF345;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::Prop { class AdjustContainer; }
namespace RPG::Client::Prop { class AdjustContainer_ContainerInstance; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_09124A4A24353C26_OFFSET UNITYSDK_OFFSET(0xA000FF0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_152DB1D5ED5EBC1C_OFFSET UNITYSDK_OFFSET(0xA000AB0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x9FFEEC0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA001990)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_4852C8351A25DF62_OFFSET UNITYSDK_OFFSET(0xA0006E0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_5BCE9210F4ACDD0B_1_OFFSET UNITYSDK_OFFSET(0xA0017D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0xA001310)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_5D3D37F2BAE9FB65_OFFSET UNITYSDK_OFFSET(0xA001AC0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0xA0014D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_735EE20B25F86BF4_1_OFFSET UNITYSDK_OFFSET(0xA002010)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xA001F60)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_7A197CEF49C8F61D_OFFSET UNITYSDK_OFFSET(0x9FFE460)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xA000BA0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_969EF16C38E0FD30_OFFSET UNITYSDK_OFFSET(0xA0020B0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xA001CB0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xA001F00)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA000F80)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_B75D122F21CFAD25_OFFSET UNITYSDK_OFFSET(0x9FFECF0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_E353B097E3B1AFDF_OFFSET UNITYSDK_OFFSET(0xA0000D0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_E3595C70D352D71F_OFFSET UNITYSDK_OFFSET(0x9FFE040)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x9FFD6A0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA002120)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___REGENERATENOREUSE_B__6_2_OFFSET UNITYSDK_OFFSET(0xA0021E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdjustContainer_ContainerController_TypeDefinitionIndex = 63647;

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
		::Class_2_705B862E649BF345* _AnimEventCompt; // 0xC8
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

		::System::Void Method_1_7A197CEF49C8F61D(::RPG::Client::Prop::AdjustContainer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::AdjustContainer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_7A197CEF49C8F61D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_F978A1D172468895_OFFSET))(this);
		}

		::System::Void Method_1_E3595C70D352D71F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_E3595C70D352D71F_OFFSET))(this, a1);
		}

		::System::Void Method_1_41AA181104E03F2C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_41AA181104E03F2C_OFFSET))(this);
		}

		::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
		}

		::System::Void Method_1_E353B097E3B1AFDF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_E353B097E3B1AFDF_OFFSET))(this, a1);
		}

		::System::Void Method_1_09124A4A24353C26(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_09124A4A24353C26_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_4852C8351A25DF62(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_4852C8351A25DF62_OFFSET))(this, a1);
		}

		::System::Void Method_1_5BCE9210F4ACDD0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_5BCE9210F4ACDD0B_OFFSET))(this);
		}

		::System::Void Method_1_5BCE9210F4ACDD0B_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_5BCE9210F4ACDD0B_1_OFFSET))(this);
		}

		::System::Void Method_1_66F42CE2EDA79734()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_66F42CE2EDA79734_OFFSET))(this);
		}

		::System::Void Method_1_5D3D37F2BAE9FB65()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_5D3D37F2BAE9FB65_OFFSET))(this);
		}

		::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
		}

		::System::Void Method_1_A27D06F9481FAFDB_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_A27D06F9481FAFDB_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_7FBAA229ED524F8E_OFFSET))(this);
		}

		::System::Void Method_1_735EE20B25F86BF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
		}

		::System::Void Method_1_735EE20B25F86BF4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_735EE20B25F86BF4_1_OFFSET))(this);
		}

		::System::Void Method_1_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_1_969EF16C38E0FD30(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_969EF16C38E0FD30_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_152DB1D5ED5EBC1C(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER_METHOD_1_152DB1D5ED5EBC1C_OFFSET))(this, a1, a2);
		}

		::System::Void __ReGenerateNoReUse_b__6_2(::UnityEngine::GameObject* go, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___REGENERATENOREUSE_B__6_2_OFFSET))(this, go, data);
		}
	};
}
