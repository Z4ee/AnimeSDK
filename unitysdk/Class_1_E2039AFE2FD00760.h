#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_301;
class Class_1_CB1D9942A98A3EC3;
class Class_3_3C27FB03C7F640D0_8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E2039AFE2FD00760_METHOD_1_6DFACA7B4E281B24_OFFSET UNITYSDK_OFFSET(0x1254B7A0)
#define CLASS_1_E2039AFE2FD00760_METHOD_1_B33A0FCD62B71A46_OFFSET UNITYSDK_OFFSET(0x1254B740)
#define CLASS_1_E2039AFE2FD00760_METHOD_1_C0AAD401F117026A_OFFSET UNITYSDK_OFFSET(0x1254B920)
#define CLASS_1_E2039AFE2FD00760__CTOR_OFFSET UNITYSDK_OFFSET(0x1254B910)

inline static constexpr unsigned int Class_1_E2039AFE2FD00760_TypeDefinitionIndex = 57672;

class Class_1_E2039AFE2FD00760 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2039AFE2FD00760__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_301*>* Method_1_B33A0FCD62B71A46(::Class_1_CB1D9942A98A3EC3* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_301*>*(*)(::PVOID, ::Class_1_CB1D9942A98A3EC3*))((::PBYTE)hIl2Cpp + CLASS_1_E2039AFE2FD00760_METHOD_1_B33A0FCD62B71A46_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C0AAD401F117026A(::Class_3_3C27FB03C7F640D0_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_3C27FB03C7F640D0_8*))((::PBYTE)hIl2Cpp + CLASS_1_E2039AFE2FD00760_METHOD_1_C0AAD401F117026A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_301*>* Method_1_6DFACA7B4E281B24(::Class_3_3C27FB03C7F640D0_8* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_301*>*(*)(::PVOID, ::Class_3_3C27FB03C7F640D0_8*))((::PBYTE)hIl2Cpp + CLASS_1_E2039AFE2FD00760_METHOD_1_6DFACA7B4E281B24_OFFSET))(this, a1);
	}
};
