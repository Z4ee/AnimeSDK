#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9B2CFEFA156739B5;
namespace System { class String; }

#define CLASS_1_C3154E4AE24FC64A_METHOD_1_3C99C2E2361B27E8_OFFSET UNITYSDK_OFFSET(0x935D390)
#define CLASS_1_C3154E4AE24FC64A_METHOD_1_886FF7248981AFB6_OFFSET UNITYSDK_OFFSET(0x935D9E0)
#define CLASS_1_C3154E4AE24FC64A_METHOD_1_D5B2DCC1C3951C1C_1_OFFSET UNITYSDK_OFFSET(0x935D830)
#define CLASS_1_C3154E4AE24FC64A_METHOD_1_D5B2DCC1C3951C1C_OFFSET UNITYSDK_OFFSET(0x935D6A0)
#define CLASS_1_C3154E4AE24FC64A__CTOR_OFFSET UNITYSDK_OFFSET(0x935DBC0)

inline static constexpr unsigned int Class_1_C3154E4AE24FC64A_TypeDefinitionIndex = 48045;

class Class_1_C3154E4AE24FC64A : public ::System::Object
{
public:
	::Class_1_9B2CFEFA156739B5* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3154E4AE24FC64A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3C99C2E2361B27E8(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C3154E4AE24FC64A_METHOD_1_3C99C2E2361B27E8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D5B2DCC1C3951C1C(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C3154E4AE24FC64A_METHOD_1_D5B2DCC1C3951C1C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D5B2DCC1C3951C1C_1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C3154E4AE24FC64A_METHOD_1_D5B2DCC1C3951C1C_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_886FF7248981AFB6(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C3154E4AE24FC64A_METHOD_1_886FF7248981AFB6_OFFSET))(this, a1);
	}
};
