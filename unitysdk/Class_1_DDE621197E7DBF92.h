#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SimpleJSON { class JSONNode; }

#define CLASS_1_DDE621197E7DBF92_METHOD_1_31F644E3CE9EE786_OFFSET UNITYSDK_OFFSET(0xFB04C80)
#define CLASS_1_DDE621197E7DBF92_METHOD_1_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0xFB049D0)
#define CLASS_1_DDE621197E7DBF92_METHOD_1_BC1A59B25F257882_OFFSET UNITYSDK_OFFSET(0xFB04A70)
#define CLASS_1_DDE621197E7DBF92__CTOR_OFFSET UNITYSDK_OFFSET(0xFB05070)

inline static constexpr unsigned int Class_1_DDE621197E7DBF92_TypeDefinitionIndex = 73655;

class Class_1_DDE621197E7DBF92 : public ::System::Object
{
public:
	::System::Single Field_1_2; // 0x10
	::UnityEngine::Vector2 Field_1_0; // 0x14
	::System::Single Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDE621197E7DBF92__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_DDE621197E7DBF92_METHOD_1_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_1_31F644E3CE9EE786()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDE621197E7DBF92_METHOD_1_31F644E3CE9EE786_OFFSET))(this);
	}

	::System::Boolean Method_1_BC1A59B25F257882(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_DDE621197E7DBF92_METHOD_1_BC1A59B25F257882_OFFSET))(this, a1);
	}
};
