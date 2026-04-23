#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4D9C8125B364DFB1___c__DisplayClass0_0.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CLASS_1_4D9C8125B364DFB1_METHOD_1_117AB17947B8FE89_OFFSET UNITYSDK_OFFSET(0x1183B0B0)
#define CLASS_1_4D9C8125B364DFB1_METHOD_1_7520F698946AB01C_OFFSET UNITYSDK_OFFSET(0x1183B580)
#define CLASS_1_4D9C8125B364DFB1_METHOD_1_D18269B5760EDD09_OFFSET UNITYSDK_OFFSET(0x1183B280)
#define CLASS_1_4D9C8125B364DFB1__CTOR_OFFSET UNITYSDK_OFFSET(0x1183B6F0)
#define CLASS_1_4D9C8125B364DFB1__SETJSONNODEVALUE_G__SETJSONNODEVALUEBYKEY_0_0_OFFSET UNITYSDK_OFFSET(0x1183B380)

inline static constexpr unsigned int Class_1_4D9C8125B364DFB1_TypeDefinitionIndex = 48052;

class Class_1_4D9C8125B364DFB1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D9C8125B364DFB1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_117AB17947B8FE89(::SimpleJSON::JSONNode* a1, ::System::String* a2, ::SimpleJSON::JSONNode* a3)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_4D9C8125B364DFB1_METHOD_1_117AB17947B8FE89_OFFSET))(a1, a2, a3);
	}

	static ::SimpleJSON::JSONNode* Method_1_7520F698946AB01C(::SimpleJSON::JSONNode* a1, ::System::String* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::SimpleJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D9C8125B364DFB1_METHOD_1_7520F698946AB01C_OFFSET))(a1, a2);
	}

	static ::SimpleJSON::JSONNode* Method_1_D18269B5760EDD09(::SimpleJSON::JSONNode* a1, ::System::String* a2)
	{
		return ((::SimpleJSON::JSONNode*(*)(::SimpleJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4D9C8125B364DFB1_METHOD_1_D18269B5760EDD09_OFFSET))(a1, a2);
	}

	static ::System::Void _SetJsonNodeValue_g__SetJsonNodeValueByKey_0_0(::SimpleJSON::JSONNode* n, ::System::String* k, ::SimpleJSON::JSONNode* v, ::Class_1_4D9C8125B364DFB1___c__DisplayClass0_0& a4)
	{
		return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::SimpleJSON::JSONNode*, ::Class_1_4D9C8125B364DFB1___c__DisplayClass0_0&))((::PBYTE)hIl2Cpp + CLASS_1_4D9C8125B364DFB1__SETJSONNODEVALUE_G__SETJSONNODEVALUEBYKEY_0_0_OFFSET))(n, k, v, a4);
	}
};
