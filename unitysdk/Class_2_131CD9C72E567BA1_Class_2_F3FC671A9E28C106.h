#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_193.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_131CD9C72E567BA1_CLASS_2_F3FC671A9E28C106__CTOR_OFFSET UNITYSDK_OFFSET(0x185CD8E0)

inline static constexpr unsigned int Class_2_131CD9C72E567BA1_Class_2_F3FC671A9E28C106_TypeDefinitionIndex = 73527;

class Class_2_131CD9C72E567BA1_Class_2_F3FC671A9E28C106 : public ::Class_1_43BD383C98B4C0C5_193
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_131CD9C72E567BA1_CLASS_2_F3FC671A9E28C106__CTOR_OFFSET))(this);
	}
};
