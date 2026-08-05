#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_35A988BF5E50EA31.h"
#include "unitysdk/Struct_2_B679E4D914A10080_2.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_6EEAA83EDB800B24;
class Class_2_1503376ECC91D8EA;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1503376ECC91D8EA_CLASS_1_399BC2BDCFFB6416_METHOD_1_4259C4813B08FAF4_OFFSET UNITYSDK_OFFSET(0x18762E10)
#define CLASS_2_1503376ECC91D8EA_CLASS_1_399BC2BDCFFB6416_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x18762ED0)
#define CLASS_2_1503376ECC91D8EA_CLASS_1_399BC2BDCFFB6416__CTOR_OFFSET UNITYSDK_OFFSET(0x18762E00)

inline static constexpr unsigned int Class_2_1503376ECC91D8EA_Class_1_399BC2BDCFFB6416_TypeDefinitionIndex = 50831;

class Class_2_1503376ECC91D8EA_Class_1_399BC2BDCFFB6416 : public ::System::Object
{
public:
	::Struct_2_35A988BF5E50EA31 Field_1_6; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_B679E4D914A10080_2>* Field_1_0; // 0x30
	::Class_2_1503376ECC91D8EA* Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA_CLASS_1_399BC2BDCFFB6416__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::Struct_2_35A988BF5E50EA31, ::System::Collections::Generic::List_1<::Struct_2_B679E4D914A10080_2>*> Method_1_4259C4813B08FAF4(::System::Collections::Generic::KeyValuePair_2<::Struct_2_35A988BF5E50EA31, ::Class_1_6EEAA83EDB800B24*> a1)
	{
		return ((::System::ValueTuple_2<::Struct_2_35A988BF5E50EA31, ::System::Collections::Generic::List_1<::Struct_2_B679E4D914A10080_2>*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Struct_2_35A988BF5E50EA31, ::Class_1_6EEAA83EDB800B24*>))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA_CLASS_1_399BC2BDCFFB6416_METHOD_1_4259C4813B08FAF4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1503376ECC91D8EA_CLASS_1_399BC2BDCFFB6416_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}
};
