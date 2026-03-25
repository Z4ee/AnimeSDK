#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_22664499479190F5_STRUCT_2_BE959BDD63E039B7_METHOD_2_13B517347EC76301_OFFSET UNITYSDK_OFFSET(0x20F8240)
#define CLASS_1_22664499479190F5_STRUCT_2_BE959BDD63E039B7_METHOD_2_FF9BEE4067A2E9E3_OFFSET UNITYSDK_OFFSET(0x17A70A80)
#define CLASS_1_22664499479190F5_STRUCT_2_BE959BDD63E039B7__CTOR_OFFSET UNITYSDK_OFFSET(0x852E0)

inline static constexpr unsigned int Class_1_22664499479190F5_Struct_2_BE959BDD63E039B7_TypeDefinitionIndex = 33877;

struct alignas(8) Class_1_22664499479190F5_Struct_2_BE959BDD63E039B7
{
	// static const ::System::Int32 Field_2_0 = 0x14; // 0x0
	// static const ::System::UInt32 Field_2_1 = 0x227; // 0x0
	// static const ::System::UInt32 Field_2_2 = 0x22722727; // 0x0
	::System::UInt64 Field_2_3; // 0x10
	::System::UInt32 Field_2_4; // 0x18

	::System::Void _ctor(::System::UInt64 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_22664499479190F5_STRUCT_2_BE959BDD63E039B7__CTOR_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Byte>* Method_2_13B517347EC76301()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22664499479190F5_STRUCT_2_BE959BDD63E039B7_METHOD_2_13B517347EC76301_OFFSET))(this);
	}

	static ::System::Boolean Method_2_FF9BEE4067A2E9E3(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_22664499479190F5_Struct_2_BE959BDD63E039B7& a4)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Class_1_22664499479190F5_Struct_2_BE959BDD63E039B7&))((::PBYTE)hIl2Cpp + CLASS_1_22664499479190F5_STRUCT_2_BE959BDD63E039B7_METHOD_2_FF9BEE4067A2E9E3_OFFSET))(a1, a2, a3, a4);
	}
};
