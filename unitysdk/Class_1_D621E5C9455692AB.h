#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelTemplate.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_646;
namespace RPG::Client { class ActivityData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D621E5C9455692AB_METHOD_1_DB60F267977C3350_OFFSET UNITYSDK_OFFSET(0xAB1D380)
#define CLASS_1_D621E5C9455692AB__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB1D600)
#define CLASS_1_D621E5C9455692AB__CTOR_OFFSET UNITYSDK_OFFSET(0xAB1D5F0)

inline static constexpr unsigned int Class_1_D621E5C9455692AB_TypeDefinitionIndex = 57706;

class Class_1_D621E5C9455692AB : public ::System::Object
{
public:
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_0()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D621E5C9455692AB_TypeDefinitionIndex)->GetStaticField(0x7A80);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_1()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D621E5C9455692AB_TypeDefinitionIndex)->GetStaticField(0x7AA0);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_2()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D621E5C9455692AB_TypeDefinitionIndex)->GetStaticField(0x7AC0);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_3()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D621E5C9455692AB_TypeDefinitionIndex)->GetStaticField(0x7AE0);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_4()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D621E5C9455692AB_TypeDefinitionIndex)->GetStaticField(0x7B00);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_5()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D621E5C9455692AB_TypeDefinitionIndex)->GetStaticField(0x7B20);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_6()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D621E5C9455692AB_TypeDefinitionIndex)->GetStaticField(0x7B40);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_646*, ::RPG::Client::ActivityPanelTemplate>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_646*, ::RPG::Client::ActivityPanelTemplate>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D621E5C9455692AB_TypeDefinitionIndex)->GetStaticField(0x7B60);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D621E5C9455692AB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D621E5C9455692AB__CCTOR_OFFSET))();
	}

	static ::RPG::Client::ActivityPanelTemplate Method_1_DB60F267977C3350(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::ActivityPanelTemplate(*)(::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D621E5C9455692AB_METHOD_1_DB60F267977C3350_OFFSET))(a1, a2);
	}
};
