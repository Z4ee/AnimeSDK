#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_27E511E181CEAAFF.h"

namespace System { class String; }

#define CLASS_2_C083C7E12D419B12_METHOD_2_24BAFB7B1E0BC8F8_OFFSET UNITYSDK_OFFSET(0x17B1C2A0)
#define CLASS_2_C083C7E12D419B12_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x17B1C170)
#define CLASS_2_C083C7E12D419B12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B1C1C0)
#define CLASS_2_C083C7E12D419B12__CTOR_OFFSET UNITYSDK_OFFSET(0x17B015B0)
#define CLASS_2_C083C7E12D419B12___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B1C370)

inline static constexpr unsigned int Class_2_C083C7E12D419B12_TypeDefinitionIndex = 37722;

class Class_2_C083C7E12D419B12 : public ::Class_1_27E511E181CEAAFF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C083C7E12D419B12__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C083C7E12D419B12_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C083C7E12D419B12_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_24BAFB7B1E0BC8F8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C083C7E12D419B12_METHOD_2_24BAFB7B1E0BC8F8_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C083C7E12D419B12___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
