#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_E49DB4EA3354E910;
class Struct_2_EB5102E89A0D104B_Class_1_04A718CFB2B0DB18_27;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define STRUCT_2_EB5102E89A0D104B_CLASS_1_19850CAD614B5511_METHOD_1_77086C40F89D4750_OFFSET UNITYSDK_OFFSET(0x1110B5B0)
#define STRUCT_2_EB5102E89A0D104B_CLASS_1_19850CAD614B5511__CTOR_OFFSET UNITYSDK_OFFSET(0x1110B5A0)

inline static constexpr unsigned int Struct_2_EB5102E89A0D104B_Class_1_19850CAD614B5511_TypeDefinitionIndex = 81959;

class Struct_2_EB5102E89A0D104B_Class_1_19850CAD614B5511 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E49DB4EA3354E910*>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x18
	::Struct_2_EB5102E89A0D104B_Class_1_04A718CFB2B0DB18_27* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EB5102E89A0D104B_CLASS_1_19850CAD614B5511__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_77086C40F89D4750(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_E49DB4EA3354E910*> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_E49DB4EA3354E910*>))((::PBYTE)hIl2Cpp + STRUCT_2_EB5102E89A0D104B_CLASS_1_19850CAD614B5511_METHOD_1_77086C40F89D4750_OFFSET))(this, a1);
	}
};
