#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0244180E10798511_Struct_2_6CB98E3CD32CB04C.h"
#include "unitysdk/System/Object.h"

class Class_2_0244180E10798511_Class_1_DCF87FF35A56B610;
class Class_3_F3DCBA99CBDDC096;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0244180E10798511_CLASS_1_A3FD5FE9DE177ECC_METHOD_1_06EBB4DB5C4E1E4C_OFFSET UNITYSDK_OFFSET(0xF0995F0)
#define CLASS_2_0244180E10798511_CLASS_1_A3FD5FE9DE177ECC_METHOD_1_563CDA762AC6FCD8_OFFSET UNITYSDK_OFFSET(0xF099680)
#define CLASS_2_0244180E10798511_CLASS_1_A3FD5FE9DE177ECC_METHOD_1_565AAE0E9C42AF8E_OFFSET UNITYSDK_OFFSET(0xF099E10)
#define CLASS_2_0244180E10798511_CLASS_1_A3FD5FE9DE177ECC__CTOR_OFFSET UNITYSDK_OFFSET(0xF0995E0)

inline static constexpr unsigned int Class_2_0244180E10798511_Class_1_A3FD5FE9DE177ECC_TypeDefinitionIndex = 58084;

class Class_2_0244180E10798511_Class_1_A3FD5FE9DE177ECC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_0244180E10798511_Struct_2_6CB98E3CD32CB04C>* Field_1_0; // 0x10
	::Class_2_0244180E10798511_Class_1_DCF87FF35A56B610* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_A3FD5FE9DE177ECC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_06EBB4DB5C4E1E4C(::Class_3_F3DCBA99CBDDC096* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F3DCBA99CBDDC096*))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_A3FD5FE9DE177ECC_METHOD_1_06EBB4DB5C4E1E4C_OFFSET))(this, a1);
	}

	::System::Void Method_1_565AAE0E9C42AF8E(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_A3FD5FE9DE177ECC_METHOD_1_565AAE0E9C42AF8E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_563CDA762AC6FCD8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_A3FD5FE9DE177ECC_METHOD_1_563CDA762AC6FCD8_OFFSET))(this);
	}
};
