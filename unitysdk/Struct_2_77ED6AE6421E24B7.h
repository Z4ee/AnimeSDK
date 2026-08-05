#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SimpleJSON { class JSONNode; }

#define STRUCT_2_77ED6AE6421E24B7_METHOD_2_63E9917148ACA5A5_OFFSET UNITYSDK_OFFSET(0x854A90)
#define STRUCT_2_77ED6AE6421E24B7_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x8549E0)
#define STRUCT_2_77ED6AE6421E24B7_METHOD_2_C3878969E7EBC396_OFFSET UNITYSDK_OFFSET(0x854A80)

inline static constexpr unsigned int Struct_2_77ED6AE6421E24B7_TypeDefinitionIndex = 40837;

struct alignas(4) Struct_2_77ED6AE6421E24B7
{
	::UnityEngine::Vector2 Field_2_1; // 0x10
	::System::Single Field_2_0; // 0x18

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_77ED6AE6421E24B7_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_C3878969E7EBC396()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_77ED6AE6421E24B7_METHOD_2_C3878969E7EBC396_OFFSET))(this);
	}

	::System::Boolean Method_2_63E9917148ACA5A5(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_77ED6AE6421E24B7_METHOD_2_63E9917148ACA5A5_OFFSET))(this, a1);
	}
};
