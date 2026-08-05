#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_DDE621197E7DBF92;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_6278093091190FC5_METHOD_2_295D46E6CBB12275_OFFSET UNITYSDK_OFFSET(0x873330)
#define STRUCT_2_6278093091190FC5_METHOD_2_30710AFF0D9EC858_OFFSET UNITYSDK_OFFSET(0x17C64400)
#define STRUCT_2_6278093091190FC5_METHOD_2_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x873290)
#define STRUCT_2_6278093091190FC5_METHOD_2_AC3D4F5B260540D8_OFFSET UNITYSDK_OFFSET(0x873340)
#define STRUCT_2_6278093091190FC5_METHOD_2_CA14E3CDB6244B0C_OFFSET UNITYSDK_OFFSET(0x17C64080)

inline static constexpr unsigned int Struct_2_6278093091190FC5_TypeDefinitionIndex = 86423;

struct alignas(8) Struct_2_6278093091190FC5
{
	::Class_1_DDE621197E7DBF92* Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x18
	::UnityEngine::Color Field_2_6; // 0x20

	::System::Boolean Method_2_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_6278093091190FC5_METHOD_2_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_2_295D46E6CBB12275()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6278093091190FC5_METHOD_2_295D46E6CBB12275_OFFSET))(this);
	}

	static ::System::String* Method_2_CA14E3CDB6244B0C(::UnityEngine::Color a1)
	{
		return ((::System::String*(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + STRUCT_2_6278093091190FC5_METHOD_2_CA14E3CDB6244B0C_OFFSET))(a1);
	}

	::System::Boolean Method_2_AC3D4F5B260540D8(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + STRUCT_2_6278093091190FC5_METHOD_2_AC3D4F5B260540D8_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_30710AFF0D9EC858(::System::String* a1, ::UnityEngine::Color& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + STRUCT_2_6278093091190FC5_METHOD_2_30710AFF0D9EC858_OFFSET))(a1, a2);
	}
};
