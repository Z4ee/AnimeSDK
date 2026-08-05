#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_76C5A4C5A662A017.h"

namespace System { class String; }

#define CLASS_2_502910FAA764D1D2_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1585EDD0)
#define CLASS_2_502910FAA764D1D2_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1585E650)
#define CLASS_2_502910FAA764D1D2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1585E710)
#define CLASS_2_502910FAA764D1D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1585ED40)

inline static constexpr unsigned int Class_2_502910FAA764D1D2_TypeDefinitionIndex = 66664;

class Class_2_502910FAA764D1D2 : public ::Class_1_76C5A4C5A662A017
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502910FAA764D1D2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502910FAA764D1D2_METHOD_2_30D1209326FA87FC_OFFSET))(this);
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
