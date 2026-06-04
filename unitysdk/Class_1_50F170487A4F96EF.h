#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_50F170487A4F96EF__CTOR_OFFSET UNITYSDK_OFFSET(0x134BAC70)

inline static constexpr unsigned int Class_1_50F170487A4F96EF_TypeDefinitionIndex = 53802;

class Class_1_50F170487A4F96EF : public ::System::Object
{
public:
	::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50F170487A4F96EF__CTOR_OFFSET))(this);
	}
};
