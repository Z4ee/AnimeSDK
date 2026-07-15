#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelTemplate.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_681;
namespace RPG::Client { class ActivityData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3BA0A450855E05C5_METHOD_1_9602C7E9E601E6E9_OFFSET UNITYSDK_OFFSET(0x15068690)
#define CLASS_1_3BA0A450855E05C5__CCTOR_OFFSET UNITYSDK_OFFSET(0x15068970)
#define CLASS_1_3BA0A450855E05C5__CTOR_OFFSET UNITYSDK_OFFSET(0x15068960)

inline static constexpr unsigned int Class_1_3BA0A450855E05C5_TypeDefinitionIndex = 58972;

class Class_1_3BA0A450855E05C5 : public ::System::Object
{
public:
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_0()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x6AEC0);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_1()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x6AEE0);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_2()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x6AF00);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_3()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x6AF20);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_4()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x6AF40);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_5()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x6AF60);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_Field_1_6()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x6AF80);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_681*, ::RPG::Client::ActivityPanelTemplate>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_681*, ::RPG::Client::ActivityPanelTemplate>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x6AFA0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3BA0A450855E05C5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3BA0A450855E05C5__CCTOR_OFFSET))();
	}

	static ::RPG::Client::ActivityPanelTemplate Method_1_9602C7E9E601E6E9(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::ActivityPanelTemplate(*)(::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3BA0A450855E05C5_METHOD_1_9602C7E9E601E6E9_OFFSET))(a1, a2);
	}
};
