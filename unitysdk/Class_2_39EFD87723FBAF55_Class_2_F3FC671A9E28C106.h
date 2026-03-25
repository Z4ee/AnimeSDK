#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_170.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_39EFD87723FBAF55_CLASS_2_F3FC671A9E28C106__CTOR_OFFSET UNITYSDK_OFFSET(0x108D1DB0)

inline static constexpr unsigned int Class_2_39EFD87723FBAF55_Class_2_F3FC671A9E28C106_TypeDefinitionIndex = 63024;

class Class_2_39EFD87723FBAF55_Class_2_F3FC671A9E28C106 : public ::Class_1_43BD383C98B4C0C5_170
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39EFD87723FBAF55_CLASS_2_F3FC671A9E28C106__CTOR_OFFSET))(this);
	}
};
