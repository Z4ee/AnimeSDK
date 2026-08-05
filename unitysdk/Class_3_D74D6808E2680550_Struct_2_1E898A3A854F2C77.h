#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_D74D6808E2680550_STRUCT_2_1E898A3A854F2C77_EQUALS_OFFSET UNITYSDK_OFFSET(0x6323C0)
#define CLASS_3_D74D6808E2680550_STRUCT_2_1E898A3A854F2C77_METHOD_2_0EE970143C56269D_OFFSET UNITYSDK_OFFSET(0x632440)
#define CLASS_3_D74D6808E2680550_STRUCT_2_1E898A3A854F2C77_METHOD_2_A62F9D27A2950A53_OFFSET UNITYSDK_OFFSET(0x632450)
#define CLASS_3_D74D6808E2680550_STRUCT_2_1E898A3A854F2C77__CCTOR_OFFSET UNITYSDK_OFFSET(0xF0B6A40)

inline static constexpr unsigned int Class_3_D74D6808E2680550_Struct_2_1E898A3A854F2C77_TypeDefinitionIndex = 54371;

struct alignas(8) Class_3_D74D6808E2680550_Struct_2_1E898A3A854F2C77
{
	static ::Class_3_D74D6808E2680550_Struct_2_1E898A3A854F2C77* StaticGet_Field_2_1()
	{
		return (::Class_3_D74D6808E2680550_Struct_2_1E898A3A854F2C77*)Il2CppClass::FromTypeDefinitionIndex(Class_3_D74D6808E2680550_Struct_2_1E898A3A854F2C77_TypeDefinitionIndex)->GetStaticField(0x4ED50);
	}
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_7; // 0x14
	::System::Func_2<::System::Int32, ::System::Boolean>* Field_2_6; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D74D6808E2680550_STRUCT_2_1E898A3A854F2C77__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Class_3_D74D6808E2680550_Struct_2_1E898A3A854F2C77 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_D74D6808E2680550_Struct_2_1E898A3A854F2C77))((::PBYTE)hIl2Cpp + CLASS_3_D74D6808E2680550_STRUCT_2_1E898A3A854F2C77_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0EE970143C56269D(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_D74D6808E2680550_STRUCT_2_1E898A3A854F2C77_METHOD_2_0EE970143C56269D_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A62F9D27A2950A53(::Class_3_D74D6808E2680550_Struct_2_1E898A3A854F2C77 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_D74D6808E2680550_Struct_2_1E898A3A854F2C77))((::PBYTE)hIl2Cpp + CLASS_3_D74D6808E2680550_STRUCT_2_1E898A3A854F2C77_METHOD_2_A62F9D27A2950A53_OFFSET))(this, a1);
	}
};
