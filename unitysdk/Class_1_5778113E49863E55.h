#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5778113E49863E55_METHOD_1_43B604100A3DFF3F_OFFSET UNITYSDK_OFFSET(0x177415B0)
#define CLASS_1_5778113E49863E55_METHOD_1_45AA42371B78CD1B_OFFSET UNITYSDK_OFFSET(0x177414D0)
#define CLASS_1_5778113E49863E55_METHOD_1_A5BC00BCCF47A28E_OFFSET UNITYSDK_OFFSET(0x17740E40)
#define CLASS_1_5778113E49863E55_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x17740BF0)
#define CLASS_1_5778113E49863E55__CCTOR_OFFSET UNITYSDK_OFFSET(0x177409F0)

inline static constexpr unsigned int Class_1_5778113E49863E55_TypeDefinitionIndex = 73456;

class Class_1_5778113E49863E55 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5778113E49863E55_TypeDefinitionIndex)->GetStaticField(0x3E0F0);
	}
	static ::Foundation::DoubleKeyDictionary_3<::MoleMole::Battle::Entity*, ::System::String*, ::System::String*>** StaticGet_Field_1_7()
	{
		return (::Foundation::DoubleKeyDictionary_3<::MoleMole::Battle::Entity*, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5778113E49863E55_TypeDefinitionIndex)->GetStaticField(0x3E0F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5778113E49863E55_TypeDefinitionIndex)->GetStaticField(0x3E100);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5778113E49863E55_TypeDefinitionIndex)->GetStaticField(0x3E108);
	}
	static ::Foundation::DoubleKeyDictionary_3<::MoleMole::Battle::Entity*, ::System::String*, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::Foundation::DoubleKeyDictionary_3<::MoleMole::Battle::Entity*, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5778113E49863E55_TypeDefinitionIndex)->GetStaticField(0x3E110);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5778113E49863E55__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5778113E49863E55_METHOD_1_A6544B958241856F_OFFSET))();
	}

	static ::System::String* Method_1_A5BC00BCCF47A28E(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5778113E49863E55_METHOD_1_A5BC00BCCF47A28E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_45AA42371B78CD1B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_5778113E49863E55_METHOD_1_45AA42371B78CD1B_OFFSET))(a1);
	}

	static ::System::String* Method_1_43B604100A3DFF3F(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5778113E49863E55_METHOD_1_43B604100A3DFF3F_OFFSET))(a1, a2);
	}
};
