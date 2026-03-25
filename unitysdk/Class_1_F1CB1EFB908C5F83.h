#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F1CB1EFB908C5F83__CTOR_OFFSET UNITYSDK_OFFSET(0x168096B0)

inline static constexpr unsigned int Class_1_F1CB1EFB908C5F83_TypeDefinitionIndex = 32705;

class Class_1_F1CB1EFB908C5F83 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1CB1EFB908C5F83__CTOR_OFFSET))(this);
	}
};
