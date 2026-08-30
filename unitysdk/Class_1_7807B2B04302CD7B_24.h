#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7807B2B04302CD7B_24__CCTOR_OFFSET UNITYSDK_OFFSET(0xF42C260)

inline static constexpr unsigned int Class_1_7807B2B04302CD7B_24_TypeDefinitionIndex = 49679;

class Class_1_7807B2B04302CD7B_24 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_PIOBBKEOOID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7807B2B04302CD7B_24_TypeDefinitionIndex)->GetStaticField(0x7C90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_24__CCTOR_OFFSET))();
	}
};
