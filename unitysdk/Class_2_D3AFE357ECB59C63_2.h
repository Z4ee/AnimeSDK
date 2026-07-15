#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_03D6D30E62EFB374.h"

namespace System { class String; }

#define CLASS_2_D3AFE357ECB59C63_2_COMPARETO_OFFSET UNITYSDK_OFFSET(0x157D1FB0)
#define CLASS_2_D3AFE357ECB59C63_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x157D2030)
#define CLASS_2_D3AFE357ECB59C63_2__CTOR_OFFSET UNITYSDK_OFFSET(0x157D1F60)

inline static constexpr unsigned int Class_2_D3AFE357ECB59C63_2_TypeDefinitionIndex = 59276;

class Class_2_D3AFE357ECB59C63_2 : public ::Class_1_03D6D30E62EFB374
{
public:
	::System::UInt32 Field_2_0; // 0x18
	::System::UInt32 Field_2_1; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 CompareTo(::Class_2_D3AFE357ECB59C63_2* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_D3AFE357ECB59C63_2*))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_2_COMPARETO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_2_TOSTRING_OFFSET))(this);
	}
};
