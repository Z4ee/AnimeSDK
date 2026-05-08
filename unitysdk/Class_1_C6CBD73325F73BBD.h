#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C6CBD73325F73BBD_METHOD_1_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0x143D0650)
#define CLASS_1_C6CBD73325F73BBD__CTOR_OFFSET UNITYSDK_OFFSET(0x143D0640)

inline static constexpr unsigned int Class_1_C6CBD73325F73BBD_TypeDefinitionIndex = 38681;

class Class_1_C6CBD73325F73BBD : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6CBD73325F73BBD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8073A3C8BD4F2EE0(::Class_1_C6CBD73325F73BBD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C6CBD73325F73BBD*))((::PBYTE)hIl2Cpp + CLASS_1_C6CBD73325F73BBD_METHOD_1_8073A3C8BD4F2EE0_OFFSET))(this, a1);
	}
};
