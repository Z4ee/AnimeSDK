#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_880;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0626D3BA290F70D___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C79C70)
#define CLASS_1_E0626D3BA290F70D___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x16C7A4B0)

inline static constexpr unsigned int Class_1_E0626D3BA290F70D___c__DisplayClass0_0_TypeDefinitionIndex = 64163;

class Class_1_E0626D3BA290F70D___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_880*>* displayActions; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0626D3BA290F70D___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _Execute_b__0(::Class_0_16E4307DCC419505_880* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_880*))((::PBYTE)hIl2Cpp + CLASS_1_E0626D3BA290F70D___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET))(this, a1);
	}
};
