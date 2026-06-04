#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_470C0D8ED6D7F159_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1891D5B0)

inline static constexpr unsigned int Class_1_470C0D8ED6D7F159_1_TypeDefinitionIndex = 38422;

class Class_1_470C0D8ED6D7F159_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_470C0D8ED6D7F159_1__CTOR_OFFSET))(this);
	}
};
