#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8ADAAB4A2E4AC573.h"
#include "unitysdk/Class_2_C423463EEEC5EF6E_Struct_2_5DD28D59F1A736CE.h"

namespace RPG::GameCore { class SetCharacterPartsVisibility; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_C423463EEEC5EF6E_METHOD_2_2B89E00B612083C4_OFFSET UNITYSDK_OFFSET(0x170A8E80)
#define CLASS_2_C423463EEEC5EF6E_METHOD_2_BFFA57BF04B03F27_OFFSET UNITYSDK_OFFSET(0x170A8D10)
#define CLASS_2_C423463EEEC5EF6E_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x170A9840)
#define CLASS_2_C423463EEEC5EF6E__CCTOR_OFFSET UNITYSDK_OFFSET(0x170A9A60)
#define CLASS_2_C423463EEEC5EF6E__CTOR_OFFSET UNITYSDK_OFFSET(0x170A99E0)

inline static constexpr unsigned int Class_2_C423463EEEC5EF6E_TypeDefinitionIndex = 54644;

class Class_2_C423463EEEC5EF6E : public ::Class_1_8ADAAB4A2E4AC573
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_2_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C423463EEEC5EF6E_TypeDefinitionIndex)->GetStaticField(0x2D7B0);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C423463EEEC5EF6E_TypeDefinitionIndex)->GetStaticField(0x7F30);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C423463EEEC5EF6E_TypeDefinitionIndex)->GetStaticField(0x7F34);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C423463EEEC5EF6E_TypeDefinitionIndex)->GetStaticField(0x7F38);
	}
	// static const ::System::Int32 Field_2_4 = 0x8; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_C423463EEEC5EF6E_Struct_2_5DD28D59F1A736CE>* Field_2_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C423463EEEC5EF6E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C423463EEEC5EF6E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_BFFA57BF04B03F27(::RPG::GameCore::SetCharacterPartsVisibility* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetCharacterPartsVisibility*))((::PBYTE)hIl2Cpp + CLASS_2_C423463EEEC5EF6E_METHOD_2_BFFA57BF04B03F27_OFFSET))(this, a1);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C423463EEEC5EF6E_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void Method_2_2B89E00B612083C4(::Class_2_C423463EEEC5EF6E_Struct_2_5DD28D59F1A736CE a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_C423463EEEC5EF6E_Struct_2_5DD28D59F1A736CE))((::PBYTE)hIl2Cpp + CLASS_2_C423463EEEC5EF6E_METHOD_2_2B89E00B612083C4_OFFSET))(this, a1);
	}
};
