#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_41FF0AFA1C3FB14E.h"
#include "unitysdk/System/Object.h"

class Class_1_6CFC72D3F035968E;

#define CLASS_1_5363DDA1628A9C29_METHOD_1_62F1CAA9EAAC8566_OFFSET UNITYSDK_OFFSET(0x1C52FC30)
#define CLASS_1_5363DDA1628A9C29_METHOD_1_A9DFC8BA71ABC3AF_OFFSET UNITYSDK_OFFSET(0x1C52FD90)
#define CLASS_1_5363DDA1628A9C29_METHOD_1_E6184566299DAB0F_1_OFFSET UNITYSDK_OFFSET(0x1C52FDD0)
#define CLASS_1_5363DDA1628A9C29_METHOD_1_E6184566299DAB0F_OFFSET UNITYSDK_OFFSET(0x1C52FA60)
#define CLASS_1_5363DDA1628A9C29_METHOD_1_FBE28B8C5D60C22E_OFFSET UNITYSDK_OFFSET(0x1C52FAC0)
#define CLASS_1_5363DDA1628A9C29__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C52FA50)

inline static constexpr unsigned int Class_1_5363DDA1628A9C29_TypeDefinitionIndex = 89512;

class Class_1_5363DDA1628A9C29 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5363DDA1628A9C29_TypeDefinitionIndex)->GetStaticField(0x131C0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7D0; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7D0; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xFA0; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1770; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x1F40; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2710; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x7CF; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5363DDA1628A9C29__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_E6184566299DAB0F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5363DDA1628A9C29_METHOD_1_E6184566299DAB0F_OFFSET))(a1);
	}

	static ::System::Single Method_1_FBE28B8C5D60C22E(::Class_1_6CFC72D3F035968E* a1)
	{
		return ((::System::Single(*)(::Class_1_6CFC72D3F035968E*))((::PBYTE)hIl2Cpp + CLASS_1_5363DDA1628A9C29_METHOD_1_FBE28B8C5D60C22E_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_62F1CAA9EAAC8566(::Enum_3_41FF0AFA1C3FB14E a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::Enum_3_41FF0AFA1C3FB14E, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5363DDA1628A9C29_METHOD_1_62F1CAA9EAAC8566_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_E6184566299DAB0F_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5363DDA1628A9C29_METHOD_1_E6184566299DAB0F_1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_A9DFC8BA71ABC3AF(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5363DDA1628A9C29_METHOD_1_A9DFC8BA71ABC3AF_OFFSET))(a1);
	}
};
