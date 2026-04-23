#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_86FEC2E40AA8DA01_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x18405B20)
#define CLASS_1_86FEC2E40AA8DA01_1_METHOD_1_724FF6FA3EC5B898_OFFSET UNITYSDK_OFFSET(0x18405B70)
#define CLASS_1_86FEC2E40AA8DA01_1_METHOD_1_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x18405B30)
#define CLASS_1_86FEC2E40AA8DA01_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18405C00)

inline static constexpr unsigned int Class_1_86FEC2E40AA8DA01_1_TypeDefinitionIndex = 23466;

class Class_1_86FEC2E40AA8DA01_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86FEC2E40AA8DA01_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86FEC2E40AA8DA01_1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86FEC2E40AA8DA01_1_METHOD_1_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Object* Method_1_724FF6FA3EC5B898()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86FEC2E40AA8DA01_1_METHOD_1_724FF6FA3EC5B898_OFFSET))(this);
	}
};
