#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_03D6D30E62EFB374.h"

namespace System { class String; }

#define CLASS_2_D3AFE357ECB59C63_1_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBDDE680)
#define CLASS_2_D3AFE357ECB59C63_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBDDE700)
#define CLASS_2_D3AFE357ECB59C63_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBDDE630)

inline static constexpr unsigned int Class_2_D3AFE357ECB59C63_1_TypeDefinitionIndex = 62110;

class Class_2_D3AFE357ECB59C63_1 : public ::Class_1_03D6D30E62EFB374
{
public:
	::System::UInt32 KDDAMPAMLNN; // 0x18
	::System::UInt32 OKHLEGENBBJ; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 CompareTo(::Class_2_D3AFE357ECB59C63_1* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_D3AFE357ECB59C63_1*))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_1_COMPARETO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_1_TOSTRING_OFFSET))(this);
	}
};
