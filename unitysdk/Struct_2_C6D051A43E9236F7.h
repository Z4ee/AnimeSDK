#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/HollowEntityType.h"
#include "unitysdk/Struct_2_DB1A3536F0DE9E3B.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_C6D051A43E9236F7_METHOD_2_4165C3F268304544_1_OFFSET UNITYSDK_OFFSET(0x769660)
#define STRUCT_2_C6D051A43E9236F7_METHOD_2_4165C3F268304544_OFFSET UNITYSDK_OFFSET(0x769640)
#define STRUCT_2_C6D051A43E9236F7_METHOD_2_7EDC9A714EE7E880_OFFSET UNITYSDK_OFFSET(0x769650)
#define STRUCT_2_C6D051A43E9236F7__CTOR_OFFSET UNITYSDK_OFFSET(0x769630)

inline static constexpr unsigned int Struct_2_C6D051A43E9236F7_TypeDefinitionIndex = 56761;

struct alignas(8) Struct_2_C6D051A43E9236F7
{
	::System::UInt32 Field_2_0; // 0x10
	::Struct_2_DB1A3536F0DE9E3B Field_2_1; // 0x18
	::ProtoScript::HollowEntityType Field_2_2; // 0x28

	::System::Void _ctor(::System::UInt32 a1, ::ProtoScript::HollowEntityType a2, ::Struct_2_DB1A3536F0DE9E3B& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::ProtoScript::HollowEntityType, ::Struct_2_DB1A3536F0DE9E3B&))((::PBYTE)hIl2Cpp + STRUCT_2_C6D051A43E9236F7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	/*
	::System::Void Method_2_4165C3F268304544(::Class_1_5DF9D0F5061CCF34_Struct_2_2821977B557C6070& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5DF9D0F5061CCF34_Struct_2_2821977B557C6070&))((::PBYTE)hIl2Cpp + STRUCT_2_C6D051A43E9236F7_METHOD_2_4165C3F268304544_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_7EDC9A714EE7E880(::Class_1_5DF9D0F5061CCF34_Struct_2_C366B93777D740F1& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5DF9D0F5061CCF34_Struct_2_C366B93777D740F1&))((::PBYTE)hIl2Cpp + STRUCT_2_C6D051A43E9236F7_METHOD_2_7EDC9A714EE7E880_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_4165C3F268304544_1(::Class_1_5DF9D0F5061CCF34_Struct_2_C366B93777D740F1& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5DF9D0F5061CCF34_Struct_2_C366B93777D740F1&))((::PBYTE)hIl2Cpp + STRUCT_2_C6D051A43E9236F7_METHOD_2_4165C3F268304544_1_OFFSET))(this, a1);
	}
	*/
};
