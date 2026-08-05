#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_464;
namespace MoleMole { class UICinemaMovieWidgetController; }

#define CLASS_1_C6CFD545CB9F30D6_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x13AF15C0)
#define CLASS_1_C6CFD545CB9F30D6_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x13AF1570)
#define CLASS_1_C6CFD545CB9F30D6_METHOD_1_86D2441BB26AD122_OFFSET UNITYSDK_OFFSET(0x13AF1170)
#define CLASS_1_C6CFD545CB9F30D6_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x13AF1270)
#define CLASS_1_C6CFD545CB9F30D6__CTOR_OFFSET UNITYSDK_OFFSET(0x13AF15B0)

inline static constexpr unsigned int Class_1_C6CFD545CB9F30D6_TypeDefinitionIndex = 59323;

class Class_1_C6CFD545CB9F30D6 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_464* Field_1_6; // 0x10
	::MoleMole::UICinemaMovieWidgetController* Field_1_7; // 0x18
	::System::Boolean Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6CFD545CB9F30D6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_86D2441BB26AD122(::MoleMole::UICinemaMovieWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaMovieWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_C6CFD545CB9F30D6_METHOD_1_86D2441BB26AD122_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6CFD545CB9F30D6_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C6CFD545CB9F30D6_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6CFD545CB9F30D6_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}
};
