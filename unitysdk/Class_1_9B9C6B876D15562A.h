#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_8280730987DC22B2;
template <typename T1, typename T2> class Class_1_516A565475879095;

#define CLASS_1_9B9C6B876D15562A__CTOR_1_OFFSET UNITYSDK_OFFSET(0xD86B1E0)
#define CLASS_1_9B9C6B876D15562A__CTOR_OFFSET UNITYSDK_OFFSET(0xD86B190)

inline static constexpr unsigned int Class_1_9B9C6B876D15562A_TypeDefinitionIndex = 60133;

class Class_1_9B9C6B876D15562A : public ::System::Object
{
public:
	::Class_1_516A565475879095<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B9C6B876D15562A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_3_8280730987DC22B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8280730987DC22B2*))((::PBYTE)hIl2Cpp + CLASS_1_9B9C6B876D15562A__CTOR_1_OFFSET))(this, a1);
	}
};
