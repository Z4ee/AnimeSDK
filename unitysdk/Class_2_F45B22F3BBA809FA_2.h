#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_86.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F45B22F3BBA809FA_2_METHOD_2_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x16B0BE50)
#define CLASS_2_F45B22F3BBA809FA_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16B0BE40)

inline static constexpr unsigned int Class_2_F45B22F3BBA809FA_2_TypeDefinitionIndex = 60471;

class Class_2_F45B22F3BBA809FA_2 : public ::Class_1_43BD383C98B4C0C5_86
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_F45B22F3BBA809FA_2__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F45B22F3BBA809FA_2_METHOD_2_43535ED8A0DF5FF8_OFFSET))(this);
	}
};
