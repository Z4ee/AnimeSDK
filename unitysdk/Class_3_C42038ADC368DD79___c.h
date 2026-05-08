#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_790B79B02D84C247.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_C42038ADC368DD79___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x19D0C910)
#define CLASS_3_C42038ADC368DD79___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x19D0C900)
#define CLASS_3_C42038ADC368DD79___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D0C8B0)
#define CLASS_3_C42038ADC368DD79___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D0C8F0)

inline static constexpr unsigned int Class_3_C42038ADC368DD79___c_TypeDefinitionIndex = 24410;

class Class_3_C42038ADC368DD79___c : public ::System::Object
{
public:
	static ::Class_3_C42038ADC368DD79___c** StaticGet___9()
	{
		return (::Class_3_C42038ADC368DD79___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C42038ADC368DD79___c_TypeDefinitionIndex)->GetStaticField(0xEE80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C42038ADC368DD79___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C42038ADC368DD79___C__CTOR_OFFSET))(this);
	}

	::Enum_3_790B79B02D84C247 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_790B79B02D84C247(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C42038ADC368DD79___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_790B79B02D84C247 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_790B79B02D84C247))((::PBYTE)hIl2Cpp + CLASS_3_C42038ADC368DD79___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}
};
