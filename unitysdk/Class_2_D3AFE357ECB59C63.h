#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_03D6D30E62EFB374.h"

namespace System { class String; }

#define CLASS_2_D3AFE357ECB59C63_COMPARETO_OFFSET UNITYSDK_OFFSET(0x17D5CBE0)
#define CLASS_2_D3AFE357ECB59C63_METHOD_2_5CEC4607322705E5_1_OFFSET UNITYSDK_OFFSET(0x17D5CD80)
#define CLASS_2_D3AFE357ECB59C63_METHOD_2_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x17D5CD40)
#define CLASS_2_D3AFE357ECB59C63_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D5CC60)
#define CLASS_2_D3AFE357ECB59C63__CTOR_OFFSET UNITYSDK_OFFSET(0x17D5CB90)

inline static constexpr unsigned int Class_2_D3AFE357ECB59C63_TypeDefinitionIndex = 59273;

class Class_2_D3AFE357ECB59C63 : public ::Class_1_03D6D30E62EFB374
{
public:
	::System::UInt32 Field_2_0; // 0x18
	::System::UInt32 Field_2_1; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 CompareTo(::Class_2_D3AFE357ECB59C63* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_D3AFE357ECB59C63*))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_COMPARETO_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_TOSTRING_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_METHOD_2_5CEC4607322705E5_OFFSET))(this);
	}

	::System::UInt32 Method_2_5CEC4607322705E5_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3AFE357ECB59C63_METHOD_2_5CEC4607322705E5_1_OFFSET))(this);
	}
};
