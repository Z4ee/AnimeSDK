#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5982B07322461137.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A277FB0E4C827612_METHOD_1_3C86BEA94AD24F1D_OFFSET UNITYSDK_OFFSET(0x140CE970)
#define CLASS_1_A277FB0E4C827612_METHOD_1_50F0C5297A76EECB_OFFSET UNITYSDK_OFFSET(0x140CE760)
#define CLASS_1_A277FB0E4C827612_METHOD_1_91B03095B65725D9_OFFSET UNITYSDK_OFFSET(0x140CE8A0)
#define CLASS_1_A277FB0E4C827612_METHOD_1_93DA6293BFCF7821_OFFSET UNITYSDK_OFFSET(0x140CEAE0)
#define CLASS_1_A277FB0E4C827612_METHOD_1_CD79A54011A64F0E_OFFSET UNITYSDK_OFFSET(0x140CE690)
#define CLASS_1_A277FB0E4C827612_METHOD_1_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x140CEA80)
#define CLASS_1_A277FB0E4C827612__CCTOR_OFFSET UNITYSDK_OFFSET(0x140CE390)

inline static constexpr unsigned int Class_1_A277FB0E4C827612_TypeDefinitionIndex = 47450;

class Class_1_A277FB0E4C827612 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt16>*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt16>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A277FB0E4C827612_TypeDefinitionIndex)->GetStaticField(0x3B240);
	}
	static ::Il2CppArray<::Struct_2_5982B07322461137>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::Struct_2_5982B07322461137>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A277FB0E4C827612_TypeDefinitionIndex)->GetStaticField(0x3B248);
	}
	static ::System::Collections::Generic::List_1<::System::UInt16>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::List_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A277FB0E4C827612_TypeDefinitionIndex)->GetStaticField(0x3B250);
	}
	static ::Il2CppArray<::System::Type*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A277FB0E4C827612_TypeDefinitionIndex)->GetStaticField(0x3B258);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A277FB0E4C827612_TypeDefinitionIndex)->GetStaticField(0x3B260);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A277FB0E4C827612_TypeDefinitionIndex)->GetStaticField(0xE880);
	}
	// static const ::System::UInt16 Field_1_0 = 0x200; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A277FB0E4C827612__CCTOR_OFFSET))();
	}

	static ::Struct_2_5982B07322461137 Method_1_CD79A54011A64F0E(::System::Int32 a1)
	{
		return ((::Struct_2_5982B07322461137(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A277FB0E4C827612_METHOD_1_CD79A54011A64F0E_OFFSET))(a1);
	}

	static ::System::UInt16 Method_1_50F0C5297A76EECB(::System::Type* a1)
	{
		return ((::System::UInt16(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_A277FB0E4C827612_METHOD_1_50F0C5297A76EECB_OFFSET))(a1);
	}

	static ::System::Type* Method_1_91B03095B65725D9(::System::Int32 a1)
	{
		return ((::System::Type*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A277FB0E4C827612_METHOD_1_91B03095B65725D9_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::UInt16>* Method_1_3C86BEA94AD24F1D(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt16>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A277FB0E4C827612_METHOD_1_3C86BEA94AD24F1D_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_A277FB0E4C827612_METHOD_1_EBCA8E5D8C47FF73_OFFSET))();
	}

	static ::System::Void Method_1_93DA6293BFCF7821(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A277FB0E4C827612_METHOD_1_93DA6293BFCF7821_OFFSET))(a1);
	}
};
