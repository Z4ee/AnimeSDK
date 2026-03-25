#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelTemplate.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_534;
namespace RPG::Client { class ActivityData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_21750C05AD544A90_METHOD_1_459130C9530E0D60_OFFSET UNITYSDK_OFFSET(0x8DCCA30)
#define CLASS_1_21750C05AD544A90__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DCCCB0)
#define CLASS_1_21750C05AD544A90__CTOR_OFFSET UNITYSDK_OFFSET(0x8DCCCA0)

inline static constexpr unsigned int Class_1_21750C05AD544A90_TypeDefinitionIndex = 50075;

class Class_1_21750C05AD544A90 : public ::System::Object
{
public:
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_0()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_21750C05AD544A90_TypeDefinitionIndex)->GetStaticField(0x17840);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_1()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_21750C05AD544A90_TypeDefinitionIndex)->GetStaticField(0x17860);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_6()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_21750C05AD544A90_TypeDefinitionIndex)->GetStaticField(0x17880);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_534*, ::RPG::Client::ActivityPanelTemplate>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_534*, ::RPG::Client::ActivityPanelTemplate>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21750C05AD544A90_TypeDefinitionIndex)->GetStaticField(0x178A0);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_2()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_21750C05AD544A90_TypeDefinitionIndex)->GetStaticField(0x178A8);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_5()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_21750C05AD544A90_TypeDefinitionIndex)->GetStaticField(0x178C8);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_3()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_21750C05AD544A90_TypeDefinitionIndex)->GetStaticField(0x178E8);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_4()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_21750C05AD544A90_TypeDefinitionIndex)->GetStaticField(0x17908);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21750C05AD544A90__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21750C05AD544A90__CCTOR_OFFSET))();
	}

	static ::RPG::Client::ActivityPanelTemplate Method_1_459130C9530E0D60(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::ActivityPanelTemplate(*)(::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21750C05AD544A90_METHOD_1_459130C9530E0D60_OFFSET))(a1, a2);
	}
};
