#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_0D6706375CDAAE8C;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A7165A858F83C5DB_CLASS_1_620509182F278B22_METHOD_1_2CF9E14253AFCB8E_OFFSET UNITYSDK_OFFSET(0x115C0D10)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_620509182F278B22_METHOD_1_EC073B6268163ED6_OFFSET UNITYSDK_OFFSET(0x115C0F60)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_620509182F278B22__CTOR_OFFSET UNITYSDK_OFFSET(0x115C0D00)

inline static constexpr unsigned int Class_2_A7165A858F83C5DB_Class_1_620509182F278B22_TypeDefinitionIndex = 50080;

class Class_2_A7165A858F83C5DB_Class_1_620509182F278B22 : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_620509182F278B22__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2CF9E14253AFCB8E(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_620509182F278B22_METHOD_1_2CF9E14253AFCB8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC073B6268163ED6(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_620509182F278B22_METHOD_1_EC073B6268163ED6_OFFSET))(this, a1);
	}
};
