#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_B19769B3B0092EA9;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0A2BED24C23FE0BC_CLASS_1_4B16F85B6E5D9EE2_METHOD_1_6B370CAE01CCB46E_OFFSET UNITYSDK_OFFSET(0x1BBD9880)
#define CLASS_1_0A2BED24C23FE0BC_CLASS_1_4B16F85B6E5D9EE2_METHOD_1_E1EE9719CBE8DF3B_OFFSET UNITYSDK_OFFSET(0x1BBD9720)
#define CLASS_1_0A2BED24C23FE0BC_CLASS_1_4B16F85B6E5D9EE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD96A0)

inline static constexpr unsigned int Class_1_0A2BED24C23FE0BC_Class_1_4B16F85B6E5D9EE2_TypeDefinitionIndex = 11920;

class Class_1_0A2BED24C23FE0BC_Class_1_4B16F85B6E5D9EE2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_B19769B3B0092EA9*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A2BED24C23FE0BC_CLASS_1_4B16F85B6E5D9EE2__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::Class_2_B19769B3B0092EA9*, ::System::Int32> Method_1_E1EE9719CBE8DF3B(::System::DateTime a1)
	{
		return ((::System::ValueTuple_2<::Class_2_B19769B3B0092EA9*, ::System::Int32>(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_0A2BED24C23FE0BC_CLASS_1_4B16F85B6E5D9EE2_METHOD_1_E1EE9719CBE8DF3B_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::Class_2_B19769B3B0092EA9*, ::System::Int32> Method_1_6B370CAE01CCB46E(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::Class_2_B19769B3B0092EA9*, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0A2BED24C23FE0BC_CLASS_1_4B16F85B6E5D9EE2_METHOD_1_6B370CAE01CCB46E_OFFSET))(this, a1);
	}
};
