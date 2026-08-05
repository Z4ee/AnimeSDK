#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Class_2_17355C6A1A4C3282_Enum_3_D5A47A9198A9EE8B.h"

namespace System { class Action; }

#define CLASS_2_17355C6A1A4C3282_METHOD_2_B42D0A3442EFB29E_OFFSET UNITYSDK_OFFSET(0x127909D0)
#define CLASS_2_17355C6A1A4C3282_METHOD_2_C7F84614C46F5039_OFFSET UNITYSDK_OFFSET(0x12790870)
#define CLASS_2_17355C6A1A4C3282__CCTOR_OFFSET UNITYSDK_OFFSET(0x12790860)
#define CLASS_2_17355C6A1A4C3282__CTOR_OFFSET UNITYSDK_OFFSET(0x12790850)

inline static constexpr unsigned int Class_2_17355C6A1A4C3282_TypeDefinitionIndex = 62874;

class Class_2_17355C6A1A4C3282 : public ::Class_1_BE149A7D6310B037
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_17355C6A1A4C3282_TypeDefinitionIndex)->GetStaticField(0xB210);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17355C6A1A4C3282__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_17355C6A1A4C3282__CCTOR_OFFSET))();
	}

	::Class_2_17355C6A1A4C3282_Enum_3_D5A47A9198A9EE8B Method_2_C7F84614C46F5039(::System::Int32 a1)
	{
		return ((::Class_2_17355C6A1A4C3282_Enum_3_D5A47A9198A9EE8B(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17355C6A1A4C3282_METHOD_2_C7F84614C46F5039_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B42D0A3442EFB29E(::System::Action* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_17355C6A1A4C3282_METHOD_2_B42D0A3442EFB29E_OFFSET))(this, a1);
	}
};
