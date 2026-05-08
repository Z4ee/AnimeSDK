#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_CFE95B82BD52EB3B;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_214A08D8A91F32A6_CLASS_1_0018D1D4237A5136_METHOD_1_5DC57180DE8EA128_OFFSET UNITYSDK_OFFSET(0x14C67180)
#define CLASS_2_214A08D8A91F32A6_CLASS_1_0018D1D4237A5136__CTOR_OFFSET UNITYSDK_OFFSET(0x14C67170)

inline static constexpr unsigned int Class_2_214A08D8A91F32A6_Class_1_0018D1D4237A5136_TypeDefinitionIndex = 69068;

class Class_2_214A08D8A91F32A6_Class_1_0018D1D4237A5136 : public ::System::Object
{
public:
	::System::Predicate_1<::Class_3_CFE95B82BD52EB3B*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_214A08D8A91F32A6_CLASS_1_0018D1D4237A5136__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_5DC57180DE8EA128(::Class_3_CFE95B82BD52EB3B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_CFE95B82BD52EB3B*))((::PBYTE)hIl2Cpp + CLASS_2_214A08D8A91F32A6_CLASS_1_0018D1D4237A5136_METHOD_1_5DC57180DE8EA128_OFFSET))(this, a1);
	}
};
