#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_76.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

class Class_2_A171F95E026CBAD1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_C2047656F538698A_METHOD_2_3F0DB1B0D6BAF251_OFFSET UNITYSDK_OFFSET(0x393D0C0)
#define STRUCT_2_C2047656F538698A__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AB8380)

inline static constexpr unsigned int Struct_2_C2047656F538698A_TypeDefinitionIndex = 66289;

struct alignas(8) Struct_2_C2047656F538698A
{
	static ::Il2CppArray<::Enum_3_0A3761FE34514D6C_76>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::Enum_3_0A3761FE34514D6C_76>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_C2047656F538698A_TypeDefinitionIndex)->GetStaticField(0x64030);
	}
	static ::Il2CppArray<::Enum_3_0A3761FE34514D6C_76>** StaticGet_Field_2_1()
	{
		return (::Il2CppArray<::Enum_3_0A3761FE34514D6C_76>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_C2047656F538698A_TypeDefinitionIndex)->GetStaticField(0x64038);
	}
	static ::Il2CppArray<::Enum_3_0A3761FE34514D6C_76>** StaticGet_Field_2_2()
	{
		return (::Il2CppArray<::Enum_3_0A3761FE34514D6C_76>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_C2047656F538698A_TypeDefinitionIndex)->GetStaticField(0x64040);
	}
	::System::UInt32 Field_2_3; // 0x10
	::System::UInt32 Field_2_4; // 0x14
	::System::UInt32 Field_2_5; // 0x18
	::System::String* Field_2_6; // 0x20
	::System::Collections::Generic::IList_1<::Enum_3_0A3761FE34514D6C_76>* Field_2_7; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_8; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_9; // 0x38
	::RPG::MVector3 Field_2_10; // 0x40
	::RPG::MVector3 Field_2_11; // 0x4C
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_12; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_C2047656F538698A__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_3F0DB1B0D6BAF251(::Class_2_A171F95E026CBAD1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_A171F95E026CBAD1*))((::PBYTE)hIl2Cpp + STRUCT_2_C2047656F538698A_METHOD_2_3F0DB1B0D6BAF251_OFFSET))(this, a1);
	}
};
