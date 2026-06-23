#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4AB9EFD33B97523D.h"

class Class_0_16E4307DCC419505_418;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AEDFDBADDF8ED755_METHOD_2_08F5DB5DDE8433C2_OFFSET UNITYSDK_OFFSET(0x1375DE70)
#define CLASS_2_AEDFDBADDF8ED755__CTOR_OFFSET UNITYSDK_OFFSET(0x1375E0C0)

inline static constexpr unsigned int Class_2_AEDFDBADDF8ED755_TypeDefinitionIndex = 48747;

class Class_2_AEDFDBADDF8ED755 : public ::Class_1_4AB9EFD33B97523D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEDFDBADDF8ED755__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_418*>* Method_2_08F5DB5DDE8433C2()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_418*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEDFDBADDF8ED755_METHOD_2_08F5DB5DDE8433C2_OFFSET))(this);
	}
};
