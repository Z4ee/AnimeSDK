#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E01A66D05D835284_1;

#define CLASS_1_F9FBCC956DFCF137_44_GET_RULE_OFFSET UNITYSDK_OFFSET(0x19FB3300)
#define CLASS_1_F9FBCC956DFCF137_44__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB32F0)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_44_TypeDefinitionIndex = 79389;

class Class_1_F9FBCC956DFCF137_44 : public ::System::Object
{
public:
	::Class_1_E01A66D05D835284_1* _Rule_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_E01A66D05D835284_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E01A66D05D835284_1*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_44__CTOR_OFFSET))(this, a1);
	}

	::Class_1_E01A66D05D835284_1* get_Rule()
	{
		return ((::Class_1_E01A66D05D835284_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_44_GET_RULE_OFFSET))(this);
	}
};
