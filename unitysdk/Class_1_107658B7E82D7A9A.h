#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_107658B7E82D7A9A__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF63A0)

inline static constexpr unsigned int Class_1_107658B7E82D7A9A_TypeDefinitionIndex = 47972;

class Class_1_107658B7E82D7A9A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_107658B7E82D7A9A__CTOR_OFFSET))(this);
	}
};
