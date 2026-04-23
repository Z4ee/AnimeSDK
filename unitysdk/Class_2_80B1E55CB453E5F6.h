#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2ACD63F96B5B2027.h"
#include "unitysdk/Class_2_80B1E55CB453E5F6_Struct_2_5DD28D59F1A736CE.h"

namespace RPG::GameCore { class SetCharacterPartsVisibility; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_80B1E55CB453E5F6_METHOD_2_BFFA57BF04B03F27_OFFSET UNITYSDK_OFFSET(0x11986C60)
#define CLASS_2_80B1E55CB453E5F6_METHOD_2_D53593840A99764D_OFFSET UNITYSDK_OFFSET(0x11986DD0)
#define CLASS_2_80B1E55CB453E5F6_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x11987790)
#define CLASS_2_80B1E55CB453E5F6__CCTOR_OFFSET UNITYSDK_OFFSET(0x119879A0)
#define CLASS_2_80B1E55CB453E5F6__CTOR_OFFSET UNITYSDK_OFFSET(0x11987920)
#define CLASS_2_80B1E55CB453E5F6___IFIXBASEPROXY_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x11987B70)

inline static constexpr unsigned int Class_2_80B1E55CB453E5F6_TypeDefinitionIndex = 52724;

class Class_2_80B1E55CB453E5F6 : public ::Class_1_2ACD63F96B5B2027
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_2_5()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_80B1E55CB453E5F6_TypeDefinitionIndex)->GetStaticField(0x2FBC0);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_80B1E55CB453E5F6_TypeDefinitionIndex)->GetStaticField(0xBF90);
	}
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_80B1E55CB453E5F6_TypeDefinitionIndex)->GetStaticField(0xBF94);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_80B1E55CB453E5F6_TypeDefinitionIndex)->GetStaticField(0xBF98);
	}
	// static const ::System::Int32 Field_2_1 = 0x8; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_80B1E55CB453E5F6_Struct_2_5DD28D59F1A736CE>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80B1E55CB453E5F6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_80B1E55CB453E5F6__CCTOR_OFFSET))();
	}

	::System::Void Method_2_BFFA57BF04B03F27(::RPG::GameCore::SetCharacterPartsVisibility* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetCharacterPartsVisibility*))((::PBYTE)hIl2Cpp + CLASS_2_80B1E55CB453E5F6_METHOD_2_BFFA57BF04B03F27_OFFSET))(this, a1);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80B1E55CB453E5F6_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void Method_2_D53593840A99764D(::Class_2_80B1E55CB453E5F6_Struct_2_5DD28D59F1A736CE a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_80B1E55CB453E5F6_Struct_2_5DD28D59F1A736CE))((::PBYTE)hIl2Cpp + CLASS_2_80B1E55CB453E5F6_METHOD_2_D53593840A99764D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80B1E55CB453E5F6___IFIXBASEPROXY_ONMODELARTLOADED_OFFSET))(this);
	}
};
