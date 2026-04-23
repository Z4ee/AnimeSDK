#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client::Prop { class PorterPuzzle; }
namespace RPG::Client::Prop { class PorterTarget; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_00C5E99C9B0EC08D_OFFSET UNITYSDK_OFFSET(0xAEA5DA0)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xAEA5CA0)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xAEA60A0)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_46D78B8894C3D058_OFFSET UNITYSDK_OFFSET(0xAEA5F30)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_72E4AE9CF106F58D_OFFSET UNITYSDK_OFFSET(0xAEA5E60)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_8842B2964544CD50_OFFSET UNITYSDK_OFFSET(0xAEA5710)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xAEA61F0)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0xAEA6280)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAEA5D10)
#define RPG_CLIENT_PROP_PORTERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAEA6310)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PorterItem_TypeDefinitionIndex = 72270;

	class PorterItem : public ::System::Object
	{
	public:
		::System::Int32 ID; // 0x10
		::UnityEngine::GameObject* Item; // 0x18
		::System::String* InteractText; // 0x20
		::Il2CppArray<::System::String*>* InteractTexts; // 0x28
		::System::String* HintAnimatorStateName; // 0x30
		::System::Boolean IsMatch; // 0x38
		::RPG::Client::Prop::PorterTarget* CurPorterTarget; // 0x40
		::UnityEngine::Animator* _Animator; // 0x48
		::Class_2_2679F01039F3FC24* _UITriggerProxy; // 0x50
		::RPG::Client::Prop::PorterPuzzle* _OwnerRef; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_8842B2964544CD50(::RPG::Client::Prop::PorterPuzzle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PorterPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_8842B2964544CD50_OFFSET))(this, a1);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_00C5E99C9B0EC08D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_00C5E99C9B0EC08D_OFFSET))(this, a1);
		}

		::System::Void Method_1_72E4AE9CF106F58D(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_72E4AE9CF106F58D_OFFSET))(this, a1);
		}

		::System::Void Method_1_46D78B8894C3D058(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_46D78B8894C3D058_OFFSET))(this, a1);
		}

		::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_9681042564541CD6_1_OFFSET))(this);
		}

		::System::Void Method_1_9681042564541CD6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_9681042564541CD6_2_OFFSET))(this);
		}
	};
}
