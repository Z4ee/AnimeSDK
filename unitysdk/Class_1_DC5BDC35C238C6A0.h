#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DC5BDC35C238C6A0___c__DisplayClass0_0.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_1_DC5BDC35C238C6A0_METHOD_1_117AB17947B8FE89_OFFSET UNITYSDK_OFFSET(0x17A9A780)
#define CLASS_1_DC5BDC35C238C6A0_METHOD_1_A320EA78265BCF7A_OFFSET UNITYSDK_OFFSET(0x17A9A980)
#define CLASS_1_DC5BDC35C238C6A0_METHOD_1_F5ECDC51969B1DE5_OFFSET UNITYSDK_OFFSET(0x17A9B020)
#define CLASS_1_DC5BDC35C238C6A0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A9B190)
#define CLASS_1_DC5BDC35C238C6A0__SETJSONNODEVALUE_G__SETJSONNODEVALUEBYKEY_0_0_OFFSET UNITYSDK_OFFSET(0x17A9ABC0)

inline static constexpr unsigned int Class_1_DC5BDC35C238C6A0_TypeDefinitionIndex = 52341;

class Class_1_DC5BDC35C238C6A0 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC5BDC35C238C6A0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_117AB17947B8FE89(::SimpleJSON::JSONNode* a1, ::System::String* a2, ::SimpleJSON::JSONNode* a3)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_DC5BDC35C238C6A0_METHOD_1_117AB17947B8FE89_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONNode* Method_1_F5ECDC51969B1DE5(::SimpleJSON::JSONNode* a1, ::System::String* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::SimpleJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC5BDC35C238C6A0_METHOD_1_F5ECDC51969B1DE5_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_A320EA78265BCF7A(::SimpleJSON::JSONNode* a1, ::System::String* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::SimpleJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC5BDC35C238C6A0_METHOD_1_A320EA78265BCF7A_OFFSET))(a1, a2);
	}

	static ::System::Void _SetJsonNodeValue_g__SetJsonNodeValueByKey_0_0(::SimpleJSON::JSONNode* a1, ::System::String* a2, ::SimpleJSON::JSONNode* a3, ::Class_1_DC5BDC35C238C6A0___c__DisplayClass0_0& a4)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::SimpleJSON::JSONNode*, ::Class_1_DC5BDC35C238C6A0___c__DisplayClass0_0&))((::PBYTE)hIl2Cpp + CLASS_1_DC5BDC35C238C6A0__SETJSONNODEVALUE_G__SETJSONNODEVALUEBYKEY_0_0_OFFSET))(a1, a2, a3, a4);
	}
};
