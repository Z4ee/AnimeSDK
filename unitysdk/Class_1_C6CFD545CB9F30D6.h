#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_403;
namespace MoleMole { class UICinemaMovieWidgetController; }

#define CLASS_1_C6CFD545CB9F30D6_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x13DC00B0)
#define CLASS_1_C6CFD545CB9F30D6_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x13DC0060)
#define CLASS_1_C6CFD545CB9F30D6_METHOD_1_86D2441BB26AD122_OFFSET UNITYSDK_OFFSET(0x13DBFCA0)
#define CLASS_1_C6CFD545CB9F30D6_METHOD_1_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x13DBFDA0)
#define CLASS_1_C6CFD545CB9F30D6__CTOR_OFFSET UNITYSDK_OFFSET(0x13DC00A0)

inline static constexpr unsigned int Class_1_C6CFD545CB9F30D6_TypeDefinitionIndex = 56164;

class Class_1_C6CFD545CB9F30D6 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_403* Field_1_4; // 0x10
	::MoleMole::UICinemaMovieWidgetController* Field_1_3; // 0x18
	::System::Boolean Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::System::Int32 Field_1_2; // 0x28

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

	::System::Void Method_1_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6CFD545CB9F30D6_METHOD_1_DF3C54A5ADEABAF1_OFFSET))(this);
	}
};
