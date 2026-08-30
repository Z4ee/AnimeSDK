#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client::Prop { class PorterPuzzle; }
namespace RPG::Client::Prop { class PorterTarget; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xDCF5D30)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xDCF60D0)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_6434F3E6F6B1EC67_OFFSET UNITYSDK_OFFSET(0xDCF5EF0)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_95AA3C6CB470ECEA_OFFSET UNITYSDK_OFFSET(0xDCF5E30)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xDCF6220)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0xDCF62B0)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDCF5DA0)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_E986FF079803291E_OFFSET UNITYSDK_OFFSET(0xDCF56B0)
#define RPG_CLIENT_PROP_PORTERITEM_METHOD_1_EC79C6527FBF4B63_OFFSET UNITYSDK_OFFSET(0xDCF6020)
#define RPG_CLIENT_PROP_PORTERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xDCF6340)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PorterItem_TypeDefinitionIndex = 78303;

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

		::System::Void Method_1_E986FF079803291E(::RPG::Client::Prop::PorterPuzzle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PorterPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_E986FF079803291E_OFFSET))(this, a1);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_95AA3C6CB470ECEA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_95AA3C6CB470ECEA_OFFSET))(this, a1);
		}

		::System::Void Method_1_6434F3E6F6B1EC67(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_6434F3E6F6B1EC67_OFFSET))(this, a1);
		}

		::System::Void Method_1_EC79C6527FBF4B63(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERITEM_METHOD_1_EC79C6527FBF4B63_OFFSET))(this, a1);
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
