#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_B19769B3B0092EA9;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD4FEC51F1432504_CLASS_1_D5D782135037A5FA_METHOD_1_33E5E7CC3BDCA0B2_OFFSET UNITYSDK_OFFSET(0x16834F20)
#define CLASS_1_BD4FEC51F1432504_CLASS_1_D5D782135037A5FA_METHOD_1_6B370CAE01CCB46E_OFFSET UNITYSDK_OFFSET(0x16835090)
#define CLASS_1_BD4FEC51F1432504_CLASS_1_D5D782135037A5FA__CTOR_OFFSET UNITYSDK_OFFSET(0x16834EA0)

inline static constexpr unsigned int Class_1_BD4FEC51F1432504_Class_1_D5D782135037A5FA_TypeDefinitionIndex = 12198;

class Class_1_BD4FEC51F1432504_Class_1_D5D782135037A5FA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_B19769B3B0092EA9*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD4FEC51F1432504_CLASS_1_D5D782135037A5FA__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::Class_2_B19769B3B0092EA9*, ::System::Int32> Method_1_33E5E7CC3BDCA0B2(::System::DateTime a1)
	{
		return ((::System::ValueTuple_2<::Class_2_B19769B3B0092EA9*, ::System::Int32>(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + CLASS_1_BD4FEC51F1432504_CLASS_1_D5D782135037A5FA_METHOD_1_33E5E7CC3BDCA0B2_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::Class_2_B19769B3B0092EA9*, ::System::Int32> Method_1_6B370CAE01CCB46E(::System::Int32 a1)
	{
		return ((::System::ValueTuple_2<::Class_2_B19769B3B0092EA9*, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD4FEC51F1432504_CLASS_1_D5D782135037A5FA_METHOD_1_6B370CAE01CCB46E_OFFSET))(this, a1);
	}
};
