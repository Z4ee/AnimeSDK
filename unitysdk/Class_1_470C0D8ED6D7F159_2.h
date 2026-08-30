#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_470C0D8ED6D7F159_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A858B30)

inline static constexpr unsigned int Class_1_470C0D8ED6D7F159_2_TypeDefinitionIndex = 80668;

class Class_1_470C0D8ED6D7F159_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* GDLJBGKGGIC; // 0x10
	::System::Int32 OEMBIDNANCM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_470C0D8ED6D7F159_2__CTOR_OFFSET))(this);
	}
};
