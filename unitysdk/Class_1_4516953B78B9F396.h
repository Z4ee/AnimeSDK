#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_4516953B78B9F396__CTOR_OFFSET UNITYSDK_OFFSET(0x16896FD0)

inline static constexpr unsigned int Class_1_4516953B78B9F396_TypeDefinitionIndex = 32209;

class Class_1_4516953B78B9F396 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4516953B78B9F396__CTOR_OFFSET))(this);
	}
};
