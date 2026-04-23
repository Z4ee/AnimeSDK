#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_73.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

class Class_2_1A037263741137E5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_F63B5B336F4586E3_METHOD_2_455C27AAB650C928_OFFSET UNITYSDK_OFFSET(0x15AD570)
#define STRUCT_2_F63B5B336F4586E3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1240ACB0)

inline static constexpr unsigned int Struct_2_F63B5B336F4586E3_TypeDefinitionIndex = 63966;

struct alignas(8) Struct_2_F63B5B336F4586E3
{
	static ::Il2CppArray<::Enum_3_0A3761FE34514D6C_73>** StaticGet_Field_2_12()
	{
		return (::Il2CppArray<::Enum_3_0A3761FE34514D6C_73>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F63B5B336F4586E3_TypeDefinitionIndex)->GetStaticField(0x56E0);
	}
	static ::Il2CppArray<::Enum_3_0A3761FE34514D6C_73>** StaticGet_Field_2_10()
	{
		return (::Il2CppArray<::Enum_3_0A3761FE34514D6C_73>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F63B5B336F4586E3_TypeDefinitionIndex)->GetStaticField(0x56E8);
	}
	static ::Il2CppArray<::Enum_3_0A3761FE34514D6C_73>** StaticGet_Field_2_11()
	{
		return (::Il2CppArray<::Enum_3_0A3761FE34514D6C_73>**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F63B5B336F4586E3_TypeDefinitionIndex)->GetStaticField(0x56F0);
	}
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18
	::System::String* Field_2_3; // 0x20
	::System::Collections::Generic::IList_1<::Enum_3_0A3761FE34514D6C_73>* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_5; // 0x30
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_2_6; // 0x38
	::RPG::MVector3 Field_2_7; // 0x40
	::RPG::MVector3 Field_2_8; // 0x4C
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_2_9; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F63B5B336F4586E3__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_455C27AAB650C928(::Class_2_1A037263741137E5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1A037263741137E5*))((::PBYTE)hIl2Cpp + STRUCT_2_F63B5B336F4586E3_METHOD_2_455C27AAB650C928_OFFSET))(this, a1);
	}
};
