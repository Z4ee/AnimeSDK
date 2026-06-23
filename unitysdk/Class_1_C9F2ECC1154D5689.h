#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_77ED6AE6421E24B7.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }

#define CLASS_1_C9F2ECC1154D5689_METHOD_1_05D323013907B163_OFFSET UNITYSDK_OFFSET(0x114B4B80)
#define CLASS_1_C9F2ECC1154D5689_METHOD_1_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x114B4990)
#define CLASS_1_C9F2ECC1154D5689_METHOD_1_C54BD71DFA7AA09B_OFFSET UNITYSDK_OFFSET(0x114B4A30)
#define CLASS_1_C9F2ECC1154D5689__CTOR_OFFSET UNITYSDK_OFFSET(0x114B4C30)

inline static constexpr unsigned int Class_1_C9F2ECC1154D5689_TypeDefinitionIndex = 82386;

class Class_1_C9F2ECC1154D5689 : public ::System::Object
{
public:
	::Struct_2_77ED6AE6421E24B7 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9F2ECC1154D5689__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_C9F2ECC1154D5689_METHOD_1_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_1_05D323013907B163()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9F2ECC1154D5689_METHOD_1_05D323013907B163_OFFSET))(this);
	}

	::System::Boolean Method_1_C54BD71DFA7AA09B(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_C9F2ECC1154D5689_METHOD_1_C54BD71DFA7AA09B_OFFSET))(this, a1);
	}
};
