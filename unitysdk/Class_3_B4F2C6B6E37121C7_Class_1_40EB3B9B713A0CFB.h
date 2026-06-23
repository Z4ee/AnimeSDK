#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_B4F2C6B6E37121C7_Class_1_40EB3B9B713A0CFB_Struct_2_9472F2C529C3D4C5.h"
#include "unitysdk/Class_3_B4F2C6B6E37121C7_Class_1_40EB3B9B713A0CFB_Struct_2_9472F2C529C3D4C5_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B4F2C6B6E37121C7_CLASS_1_40EB3B9B713A0CFB__CTOR_OFFSET UNITYSDK_OFFSET(0x12577F40)

inline static constexpr unsigned int Class_3_B4F2C6B6E37121C7_Class_1_40EB3B9B713A0CFB_TypeDefinitionIndex = 47004;

class Class_3_B4F2C6B6E37121C7_Class_1_40EB3B9B713A0CFB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_B4F2C6B6E37121C7_Class_1_40EB3B9B713A0CFB_Struct_2_9472F2C529C3D4C5>*>* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_B4F2C6B6E37121C7_Class_1_40EB3B9B713A0CFB_Struct_2_9472F2C529C3D4C5_1>*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4F2C6B6E37121C7_CLASS_1_40EB3B9B713A0CFB__CTOR_OFFSET))(this);
	}
};
