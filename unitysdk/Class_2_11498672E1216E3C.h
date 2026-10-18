#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7807B2B04302CD7B_32.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_11498672E1216E3C_CLEAR_OFFSET UNITYSDK_OFFSET(0x15C1FD40)
#define CLASS_2_11498672E1216E3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C1FDA0)
#define CLASS_2_11498672E1216E3C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C1FE10)

inline static constexpr unsigned int Class_2_11498672E1216E3C_TypeDefinitionIndex = 67557;

class Class_2_11498672E1216E3C : public ::Class_1_7807B2B04302CD7B_32
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* CDOHINJOMIJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11498672E1216E3C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11498672E1216E3C_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11498672E1216E3C_DISPOSE_OFFSET))(this);
	}
};
