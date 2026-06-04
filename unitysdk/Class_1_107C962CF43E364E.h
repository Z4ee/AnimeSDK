#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_107C962CF43E364E___c__DisplayClass0_0.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_1_107C962CF43E364E_METHOD_1_D18269B5760EDD09_OFFSET UNITYSDK_OFFSET(0xA68F680)
#define CLASS_1_107C962CF43E364E_METHOD_1_E94FF745E6F18CC0_OFFSET UNITYSDK_OFFSET(0xA68F4E0)
#define CLASS_1_107C962CF43E364E_METHOD_1_F5ECDC51969B1DE5_OFFSET UNITYSDK_OFFSET(0xA68F9A0)
#define CLASS_1_107C962CF43E364E__CTOR_OFFSET UNITYSDK_OFFSET(0xA68FB10)
#define CLASS_1_107C962CF43E364E__SETJSONNODEVALUE_G__SETJSONNODEVALUEBYKEY_0_0_OFFSET UNITYSDK_OFFSET(0xA68F780)

inline static constexpr unsigned int Class_1_107C962CF43E364E_TypeDefinitionIndex = 48670;

class Class_1_107C962CF43E364E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_107C962CF43E364E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E94FF745E6F18CC0(::SimpleJSON::JSONNode* a1, ::System::String* a2, ::SimpleJSON::JSONNode* a3)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_107C962CF43E364E_METHOD_1_E94FF745E6F18CC0_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONNode* Method_1_F5ECDC51969B1DE5(::SimpleJSON::JSONNode* a1, ::System::String* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::SimpleJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_107C962CF43E364E_METHOD_1_F5ECDC51969B1DE5_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_D18269B5760EDD09(::SimpleJSON::JSONNode* a1, ::System::String* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::SimpleJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_107C962CF43E364E_METHOD_1_D18269B5760EDD09_OFFSET))(a1, a2);
	}

	static ::System::Void _SetJsonNodeValue_g__SetJsonNodeValueByKey_0_0(::SimpleJSON::JSONNode* a1, ::System::String* a2, ::SimpleJSON::JSONNode* a3, ::Class_1_107C962CF43E364E___c__DisplayClass0_0& a4)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::SimpleJSON::JSONNode*, ::Class_1_107C962CF43E364E___c__DisplayClass0_0&))((::PBYTE)hIl2Cpp + CLASS_1_107C962CF43E364E__SETJSONNODEVALUE_G__SETJSONNODEVALUEBYKEY_0_0_OFFSET))(a1, a2, a3, a4);
	}
};
