#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_E3144EBBA3CB68CA_STRUCT_2_B2CC9ADBD6FAA159_METHOD_2_21DDD9F758E2D306_OFFSET UNITYSDK_OFFSET(0x1899CCF0)
#define CLASS_1_E3144EBBA3CB68CA_STRUCT_2_B2CC9ADBD6FAA159_METHOD_2_394C248CEB09C8C6_OFFSET UNITYSDK_OFFSET(0x1899CB90)
#define CLASS_1_E3144EBBA3CB68CA_STRUCT_2_B2CC9ADBD6FAA159__CCTOR_OFFSET UNITYSDK_OFFSET(0x1899CDD0)
#define CLASS_1_E3144EBBA3CB68CA_STRUCT_2_B2CC9ADBD6FAA159__CTOR_OFFSET UNITYSDK_OFFSET(0x3AE6D60)

inline static constexpr unsigned int Class_1_E3144EBBA3CB68CA_Struct_2_B2CC9ADBD6FAA159_TypeDefinitionIndex = 49553;

struct alignas(8) Class_1_E3144EBBA3CB68CA_Struct_2_B2CC9ADBD6FAA159
{
	static ::System::Collections::Generic::Queue_1<::Class_1_E3144EBBA3CB68CA_Struct_2_B2CC9ADBD6FAA159>** StaticGet_MFPNICMCKJG()
	{
		return (::System::Collections::Generic::Queue_1<::Class_1_E3144EBBA3CB68CA_Struct_2_B2CC9ADBD6FAA159>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3144EBBA3CB68CA_Struct_2_B2CC9ADBD6FAA159_TypeDefinitionIndex)->GetStaticField(0x6EC0);
	}
	::System::Int32 EJGEFPBLGLP; // 0x10
	::System::String* LFLPOOCDHDP; // 0x18
	::System::Boolean NCAHGJBCMJC; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_STRUCT_2_B2CC9ADBD6FAA159__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_STRUCT_2_B2CC9ADBD6FAA159__CCTOR_OFFSET))();
	}

	static ::Class_1_E3144EBBA3CB68CA_Struct_2_B2CC9ADBD6FAA159 Method_2_394C248CEB09C8C6(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::Class_1_E3144EBBA3CB68CA_Struct_2_B2CC9ADBD6FAA159(*)(::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_STRUCT_2_B2CC9ADBD6FAA159_METHOD_2_394C248CEB09C8C6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_21DDD9F758E2D306(::Class_1_E3144EBBA3CB68CA_Struct_2_B2CC9ADBD6FAA159 a1)
	{
		return ((::System::Void(*)(::Class_1_E3144EBBA3CB68CA_Struct_2_B2CC9ADBD6FAA159))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_STRUCT_2_B2CC9ADBD6FAA159_METHOD_2_21DDD9F758E2D306_OFFSET))(a1);
	}
};
