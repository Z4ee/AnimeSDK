#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2E2C04EBA1DFB44A.h"

class Class_0_16E4307DCC419505_425;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AEDFDBADDF8ED755_METHOD_2_08F5DB5DDE8433C2_OFFSET UNITYSDK_OFFSET(0x15544F30)
#define CLASS_2_AEDFDBADDF8ED755__CTOR_OFFSET UNITYSDK_OFFSET(0x15545180)

inline static constexpr unsigned int Class_2_AEDFDBADDF8ED755_TypeDefinitionIndex = 55471;

class Class_2_AEDFDBADDF8ED755 : public ::Class_1_2E2C04EBA1DFB44A
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEDFDBADDF8ED755__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_425*>* Method_2_08F5DB5DDE8433C2()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_425*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEDFDBADDF8ED755_METHOD_2_08F5DB5DDE8433C2_OFFSET))(this);
	}
};
