#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_5_910ED53707FDC57F___C_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x17FB4370)
#define CLASS_5_910ED53707FDC57F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FB4320)
#define CLASS_5_910ED53707FDC57F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB4360)

inline static constexpr unsigned int Class_5_910ED53707FDC57F___c_TypeDefinitionIndex = 62968;

class Class_5_910ED53707FDC57F___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__2_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_5_910ED53707FDC57F___c_TypeDefinitionIndex)->GetStaticField(0x38540);
	}
	static ::Class_5_910ED53707FDC57F___c** StaticGet___9()
	{
		return (::Class_5_910ED53707FDC57F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_910ED53707FDC57F___c_TypeDefinitionIndex)->GetStaticField(0x38548);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_910ED53707FDC57F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_910ED53707FDC57F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_910ED53707FDC57F___C_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}
};
