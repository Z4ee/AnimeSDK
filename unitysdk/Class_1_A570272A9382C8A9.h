#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DD8C28D372CDFF16;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A570272A9382C8A9_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x14CF5C80)
#define CLASS_1_A570272A9382C8A9_METHOD_1_3783F0665AED1E64_OFFSET UNITYSDK_OFFSET(0x14CF5C20)
#define CLASS_1_A570272A9382C8A9_METHOD_1_F79A7E7200EB71FB_OFFSET UNITYSDK_OFFSET(0x14CF5D20)
#define CLASS_1_A570272A9382C8A9__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF5C10)

inline static constexpr unsigned int Class_1_A570272A9382C8A9_TypeDefinitionIndex = 61995;

class Class_1_A570272A9382C8A9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_DD8C28D372CDFF16*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A570272A9382C8A9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3783F0665AED1E64(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A570272A9382C8A9_METHOD_1_3783F0665AED1E64_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A570272A9382C8A9_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_F79A7E7200EB71FB(::System::UInt32 a1, ::Class_1_DD8C28D372CDFF16* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_DD8C28D372CDFF16*))((::PBYTE)hIl2Cpp + CLASS_1_A570272A9382C8A9_METHOD_1_F79A7E7200EB71FB_OFFSET))(this, a1, a2);
	}
};
