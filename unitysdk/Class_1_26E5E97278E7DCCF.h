#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C70A12CE5BBC6553.h"
#include "unitysdk/System/Object.h"

class Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0;
namespace Foundation::Unreal { class FGameplayTagQuery; }

#define CLASS_1_26E5E97278E7DCCF_METHOD_1_375156ED7E2356D6_OFFSET UNITYSDK_OFFSET(0x131BD4D0)
#define CLASS_1_26E5E97278E7DCCF_METHOD_1_39541DD577F09C24_OFFSET UNITYSDK_OFFSET(0x131BD590)
#define CLASS_1_26E5E97278E7DCCF__CTOR_OFFSET UNITYSDK_OFFSET(0x131BD4C0)

inline static constexpr unsigned int Class_1_26E5E97278E7DCCF_TypeDefinitionIndex = 54123;

class Class_1_26E5E97278E7DCCF : public ::System::Object
{
public:
	::Foundation::Unreal::FGameplayTagQuery* Field_1_1; // 0x10
	::Foundation::Unreal::FGameplayTagQuery* Field_1_0; // 0x18

	::System::Void _ctor(::Foundation::Unreal::FGameplayTagQuery* a1, ::Foundation::Unreal::FGameplayTagQuery* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagQuery*, ::Foundation::Unreal::FGameplayTagQuery*))((::PBYTE)hIl2Cpp + CLASS_1_26E5E97278E7DCCF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_375156ED7E2356D6(::Struct_2_C70A12CE5BBC6553& a1, ::Struct_2_C70A12CE5BBC6553& a2, ::Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C70A12CE5BBC6553&, ::Struct_2_C70A12CE5BBC6553&, ::Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0*))((::PBYTE)hIl2Cpp + CLASS_1_26E5E97278E7DCCF_METHOD_1_375156ED7E2356D6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_39541DD577F09C24(::Struct_2_C70A12CE5BBC6553& a1, ::Struct_2_C70A12CE5BBC6553& a2, ::Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C70A12CE5BBC6553&, ::Struct_2_C70A12CE5BBC6553&, ::Class_1_562E27B325F76EB9_Class_1_EC905AE436B97AD0*))((::PBYTE)hIl2Cpp + CLASS_1_26E5E97278E7DCCF_METHOD_1_39541DD577F09C24_OFFSET))(this, a1, a2, a3);
	}
};
