#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_301;
class Class_0_16E4307DCC419505_492;
class Class_1_125B637E4CB5468C_1;
class Class_3_3C27FB03C7F640D0_8;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_841C622447A133AA_METHOD_1_26719A747F1F295B_OFFSET UNITYSDK_OFFSET(0xDB78420)
#define CLASS_1_841C622447A133AA_METHOD_1_270B53EEB6EE25FD_OFFSET UNITYSDK_OFFSET(0xDB78570)
#define CLASS_1_841C622447A133AA_METHOD_1_6B0CE9325F8728A3_OFFSET UNITYSDK_OFFSET(0xDB786F0)
#define CLASS_1_841C622447A133AA_METHOD_1_75E64FB28106AA5F_OFFSET UNITYSDK_OFFSET(0xDB78690)
#define CLASS_1_841C622447A133AA__CTOR_OFFSET UNITYSDK_OFFSET(0xDB782B0)

inline static constexpr unsigned int Class_1_841C622447A133AA_TypeDefinitionIndex = 63067;

class Class_1_841C622447A133AA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_492*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_841C622447A133AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_26719A747F1F295B(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_301*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_301*>*))((::PBYTE)hIl2Cpp + CLASS_1_841C622447A133AA_METHOD_1_26719A747F1F295B_OFFSET))(this, a1);
	}

	::System::Void Method_1_75E64FB28106AA5F(::Class_3_3C27FB03C7F640D0_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3C27FB03C7F640D0_8*))((::PBYTE)hIl2Cpp + CLASS_1_841C622447A133AA_METHOD_1_75E64FB28106AA5F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_301*>* Method_1_6B0CE9325F8728A3(::Class_3_3C27FB03C7F640D0_8* a1, ::Class_1_125B637E4CB5468C_1* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_301*>*(*)(::PVOID, ::Class_3_3C27FB03C7F640D0_8*, ::Class_1_125B637E4CB5468C_1*))((::PBYTE)hIl2Cpp + CLASS_1_841C622447A133AA_METHOD_1_6B0CE9325F8728A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_270B53EEB6EE25FD(::Class_0_16E4307DCC419505_301* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_301*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_841C622447A133AA_METHOD_1_270B53EEB6EE25FD_OFFSET))(this, a1, a2);
	}
};
