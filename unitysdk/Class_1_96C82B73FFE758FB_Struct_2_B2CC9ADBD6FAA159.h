#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_96C82B73FFE758FB_STRUCT_2_B2CC9ADBD6FAA159_METHOD_2_21DDD9F758E2D306_OFFSET UNITYSDK_OFFSET(0xB8C1A40)
#define CLASS_1_96C82B73FFE758FB_STRUCT_2_B2CC9ADBD6FAA159_METHOD_2_394C248CEB09C8C6_OFFSET UNITYSDK_OFFSET(0xB8C18E0)
#define CLASS_1_96C82B73FFE758FB_STRUCT_2_B2CC9ADBD6FAA159__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8C1B20)
#define CLASS_1_96C82B73FFE758FB_STRUCT_2_B2CC9ADBD6FAA159__CTOR_OFFSET UNITYSDK_OFFSET(0x412550)

inline static constexpr unsigned int Class_1_96C82B73FFE758FB_Struct_2_B2CC9ADBD6FAA159_TypeDefinitionIndex = 39816;

struct alignas(8) Class_1_96C82B73FFE758FB_Struct_2_B2CC9ADBD6FAA159
{
	static ::System::Collections::Generic::Queue_1<::Class_1_96C82B73FFE758FB_Struct_2_B2CC9ADBD6FAA159>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Queue_1<::Class_1_96C82B73FFE758FB_Struct_2_B2CC9ADBD6FAA159>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_96C82B73FFE758FB_Struct_2_B2CC9ADBD6FAA159_TypeDefinitionIndex)->GetStaticField(0x41280);
	}
	::System::Int32 Field_2_1; // 0x10
	::System::String* Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_STRUCT_2_B2CC9ADBD6FAA159__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_STRUCT_2_B2CC9ADBD6FAA159__CCTOR_OFFSET))();
	}

	static ::Class_1_96C82B73FFE758FB_Struct_2_B2CC9ADBD6FAA159 Method_2_394C248CEB09C8C6(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Class_1_96C82B73FFE758FB_Struct_2_B2CC9ADBD6FAA159(*)(::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_STRUCT_2_B2CC9ADBD6FAA159_METHOD_2_394C248CEB09C8C6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_21DDD9F758E2D306(::Class_1_96C82B73FFE758FB_Struct_2_B2CC9ADBD6FAA159 a1)
	{
		return ((::System::Void(*)(::Class_1_96C82B73FFE758FB_Struct_2_B2CC9ADBD6FAA159))((::PBYTE)hIl2Cpp + CLASS_1_96C82B73FFE758FB_STRUCT_2_B2CC9ADBD6FAA159_METHOD_2_21DDD9F758E2D306_OFFSET))(a1);
	}
};
