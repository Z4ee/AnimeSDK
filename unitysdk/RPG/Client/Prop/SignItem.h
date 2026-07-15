#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client::Prop { class SignPuzzle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_SIGNITEM_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16108280)
#define RPG_CLIENT_PROP_SIGNITEM_METHOD_1_2A6E71BD882634D2_OFFSET UNITYSDK_OFFSET(0x16107D30)
#define RPG_CLIENT_PROP_SIGNITEM_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16108180)
#define RPG_CLIENT_PROP_SIGNITEM_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16108240)
#define RPG_CLIENT_PROP_SIGNITEM_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x161080C0)
#define RPG_CLIENT_PROP_SIGNITEM_METHOD_1_805C56F44231AEF9_1_OFFSET UNITYSDK_OFFSET(0x16108450)
#define RPG_CLIENT_PROP_SIGNITEM_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x161082E0)
#define RPG_CLIENT_PROP_SIGNITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x161085C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int SignItem_TypeDefinitionIndex = 74905;

	class SignItem : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Item; // 0x10
		::System::Boolean Signable; // 0x18
		::System::String* SignText; // 0x20
		::System::String* CancelSignText; // 0x28
		::Class_2_2679F01039F3FC24* _UITriggerProxy; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* _TextOptions; // 0x38
		::RPG::Client::Prop::SignPuzzle* _OwnerRef; // 0x40
		::System::Boolean _IsSign; // 0x48
		::UnityEngine::Animator* _Animator; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_2A6E71BD882634D2(::RPG::Client::Prop::SignPuzzle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::SignPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_METHOD_1_2A6E71BD882634D2_OFFSET))(this, a1);
		}

		::System::Void Method_1_6E6682ED9FD6F719()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
		}

		::System::Void Method_1_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_METHOD_1_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Method_1_805C56F44231AEF9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_METHOD_1_805C56F44231AEF9_OFFSET))(this);
		}

		::System::Void Method_1_805C56F44231AEF9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SIGNITEM_METHOD_1_805C56F44231AEF9_1_OFFSET))(this);
		}
	};
}
