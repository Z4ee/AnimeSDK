#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1073;
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F6835B20CFA5DDE0___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16C7D340)
#define CLASS_2_F6835B20CFA5DDE0___C__DISPLAYCLASS26_0___PREPAREACTIVEDATALIST_B__0_OFFSET UNITYSDK_OFFSET(0x16C7DCA0)

inline static constexpr unsigned int Class_2_F6835B20CFA5DDE0___c__DisplayClass26_0_TypeDefinitionIndex = 68894;

class Class_2_F6835B20CFA5DDE0___c__DisplayClass26_0 : public ::System::Object
{
public:
	::System::Predicate_1<::Class_0_16E4307DCC419505_1073*>* __9__0; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1073*>* paramList; // 0x18
	::System::Int32 i; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6835B20CFA5DDE0___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __PrepareActiveDataList_b__0(::Class_0_16E4307DCC419505_1073* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_1073*))((::PBYTE)hIl2Cpp + CLASS_2_F6835B20CFA5DDE0___C__DISPLAYCLASS26_0___PREPAREACTIVEDATALIST_B__0_OFFSET))(this, a1);
	}
};
