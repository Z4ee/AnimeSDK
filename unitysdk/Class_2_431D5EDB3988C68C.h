#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7807B2B04302CD7B_28.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_431D5EDB3988C68C_CLEAR_OFFSET UNITYSDK_OFFSET(0x95BB130)
#define CLASS_2_431D5EDB3988C68C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95BB1A0)
#define CLASS_2_431D5EDB3988C68C__CTOR_OFFSET UNITYSDK_OFFSET(0x95BB210)

inline static constexpr unsigned int Class_2_431D5EDB3988C68C_TypeDefinitionIndex = 62259;

class Class_2_431D5EDB3988C68C : public ::Class_1_7807B2B04302CD7B_28
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_431D5EDB3988C68C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_431D5EDB3988C68C_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_431D5EDB3988C68C_DISPOSE_OFFSET))(this);
	}
};
