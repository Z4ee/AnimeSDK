#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_61DD098C4AD3E56F.h"

#define CLASS_3_DCF04EBE8046FC37_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB94D1D0)
#define CLASS_3_DCF04EBE8046FC37__CTOR_OFFSET UNITYSDK_OFFSET(0xB94D330)
#define CLASS_3_DCF04EBE8046FC37__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB94CFE0)

inline static constexpr unsigned int Class_3_DCF04EBE8046FC37_TypeDefinitionIndex = 57406;

class Class_3_DCF04EBE8046FC37 : public ::Class_2_61DD098C4AD3E56F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCF04EBE8046FC37__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCF04EBE8046FC37__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DCF04EBE8046FC37_DISPOSE_OFFSET))(this);
	}
};
