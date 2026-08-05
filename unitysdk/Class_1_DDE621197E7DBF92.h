#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SimpleJSON { class JSONNode; }

#define CLASS_1_DDE621197E7DBF92_METHOD_1_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x13585E30)
#define CLASS_1_DDE621197E7DBF92_METHOD_1_A7EE9E17D07DA126_OFFSET UNITYSDK_OFFSET(0x13585ED0)
#define CLASS_1_DDE621197E7DBF92_METHOD_1_E090615D3CBD4EF1_OFFSET UNITYSDK_OFFSET(0x13586100)
#define CLASS_1_DDE621197E7DBF92__CTOR_OFFSET UNITYSDK_OFFSET(0x135864E0)

inline static constexpr unsigned int Class_1_DDE621197E7DBF92_TypeDefinitionIndex = 53342;

class Class_1_DDE621197E7DBF92 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x14
	::UnityEngine::Vector2 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDE621197E7DBF92__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_DDE621197E7DBF92_METHOD_1_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_1_E090615D3CBD4EF1()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDE621197E7DBF92_METHOD_1_E090615D3CBD4EF1_OFFSET))(this);
	}

	::System::Boolean Method_1_A7EE9E17D07DA126(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_DDE621197E7DBF92_METHOD_1_A7EE9E17D07DA126_OFFSET))(this, a1);
	}
};
