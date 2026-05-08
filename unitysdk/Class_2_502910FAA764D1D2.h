#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4805505D38D7910B.h"

namespace System { class String; }

#define CLASS_2_502910FAA764D1D2_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10DDB070)
#define CLASS_2_502910FAA764D1D2_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x10DDA820)
#define CLASS_2_502910FAA764D1D2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10DDA9B0)
#define CLASS_2_502910FAA764D1D2__CTOR_OFFSET UNITYSDK_OFFSET(0x10DDAFE0)

inline static constexpr unsigned int Class_2_502910FAA764D1D2_TypeDefinitionIndex = 61655;

class Class_2_502910FAA764D1D2 : public ::Class_1_4805505D38D7910B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502910FAA764D1D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502910FAA764D1D2_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502910FAA764D1D2_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502910FAA764D1D2_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
