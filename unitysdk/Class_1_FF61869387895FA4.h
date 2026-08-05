#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD.h"
#include "unitysdk/System/Object.h"

class Class_1_FF61869387895FA4_Class_1_A8A60A96F9E3AFDF;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FF61869387895FA4_METHOD_1_1BF93B2D68F37C07_OFFSET UNITYSDK_OFFSET(0xFFDB970)
#define CLASS_1_FF61869387895FA4_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xFFDBE30)
#define CLASS_1_FF61869387895FA4_METHOD_1_73553E1737061228_OFFSET UNITYSDK_OFFSET(0xFFDB2F0)
#define CLASS_1_FF61869387895FA4_METHOD_1_96BC71B2295A154A_OFFSET UNITYSDK_OFFSET(0xFFDB100)
#define CLASS_1_FF61869387895FA4_METHOD_1_AD23716FA202ACEE_OFFSET UNITYSDK_OFFSET(0xFFDB560)
#define CLASS_1_FF61869387895FA4_METHOD_1_D3C6AECBC4FFB6CD_OFFSET UNITYSDK_OFFSET(0xFFDB2A0)

inline static constexpr unsigned int Class_1_FF61869387895FA4_TypeDefinitionIndex = 71201;

class Class_1_FF61869387895FA4 : public ::System::Object
{
public:
	static ::Class_1_FF61869387895FA4_Class_1_A8A60A96F9E3AFDF** StaticGet_Field_1_6()
	{
		return (::Class_1_FF61869387895FA4_Class_1_A8A60A96F9E3AFDF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF61869387895FA4_TypeDefinitionIndex)->GetStaticField(0x3BCB0);
	}
	static ::System::Collections::Generic::List_1<::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF61869387895FA4_TypeDefinitionIndex)->GetStaticField(0x3BCB8);
	}
	static ::System::UInt32* StaticGet_Field_1_7()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF61869387895FA4_TypeDefinitionIndex)->GetStaticField(0xE0A0);
	}
	// static const ::System::String* Field_1_1; // 0x0

	static ::MoleMole::Battle::Entity* Method_1_96BC71B2295A154A()
	{
		return ((::MoleMole::Battle::Entity*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF61869387895FA4_METHOD_1_96BC71B2295A154A_OFFSET))();
	}

	static ::System::Boolean Method_1_D3C6AECBC4FFB6CD(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF61869387895FA4_METHOD_1_D3C6AECBC4FFB6CD_OFFSET))(a1);
	}

	static ::System::Void Method_1_73553E1737061228(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF61869387895FA4_METHOD_1_73553E1737061228_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD>* Method_1_AD23716FA202ACEE()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF61869387895FA4_METHOD_1_AD23716FA202ACEE_OFFSET))();
	}

	static ::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF61869387895FA4_METHOD_1_4307B2A4B4A12C1A_OFFSET))();
	}

	static ::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD Method_1_1BF93B2D68F37C07(::MoleMole::Battle::Entity* a1)
	{
		return ((::Class_1_FF61869387895FA4_Struct_2_3A8B2275EA9FFCBD(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_FF61869387895FA4_METHOD_1_1BF93B2D68F37C07_OFFSET))(a1);
	}
};
