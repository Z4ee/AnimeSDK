#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_470C0D8ED6D7F159__CTOR_OFFSET UNITYSDK_OFFSET(0x19D49120)

inline static constexpr unsigned int Class_1_470C0D8ED6D7F159_TypeDefinitionIndex = 35802;

class Class_1_470C0D8ED6D7F159 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* HHEAPPJPCCF; // 0x10
	::System::Int32 FFIHGMEPCCJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_470C0D8ED6D7F159__CTOR_OFFSET))(this);
	}
};
