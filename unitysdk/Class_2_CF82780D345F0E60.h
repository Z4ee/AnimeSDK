#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C31F776B3FE6F486_4.h"

class Class_0_16E4307DCC419505_449;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CF82780D345F0E60__CTOR_OFFSET UNITYSDK_OFFSET(0x194E3BE0)

inline static constexpr unsigned int Class_2_CF82780D345F0E60_TypeDefinitionIndex = 85560;

class Class_2_CF82780D345F0E60 : public ::Class_1_C31F776B3FE6F486_4
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_449*>* Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF82780D345F0E60__CTOR_OFFSET))(this);
	}
};
