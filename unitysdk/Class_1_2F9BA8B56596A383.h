#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2F9BA8B56596A383__CTOR_OFFSET UNITYSDK_OFFSET(0x12FBA8F0)

inline static constexpr unsigned int Class_1_2F9BA8B56596A383_TypeDefinitionIndex = 42349;

class Class_1_2F9BA8B56596A383 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F9BA8B56596A383__CTOR_OFFSET))(this);
	}
};
