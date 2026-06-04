#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F1CB1EFB908C5F83_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18E607D0)

inline static constexpr unsigned int Class_1_F1CB1EFB908C5F83_1_TypeDefinitionIndex = 39270;

class Class_1_F1CB1EFB908C5F83_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1CB1EFB908C5F83_1__CTOR_OFFSET))(this);
	}
};
