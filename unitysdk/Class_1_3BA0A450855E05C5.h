#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelTemplate.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_720;
namespace RPG::Client { class ActivityData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3BA0A450855E05C5_METHOD_1_9602C7E9E601E6E9_OFFSET UNITYSDK_OFFSET(0x188FAFE0)
#define CLASS_1_3BA0A450855E05C5__CCTOR_OFFSET UNITYSDK_OFFSET(0x188FB2C0)
#define CLASS_1_3BA0A450855E05C5__CTOR_OFFSET UNITYSDK_OFFSET(0x188FB2B0)

inline static constexpr unsigned int Class_1_3BA0A450855E05C5_TypeDefinitionIndex = 61807;

class Class_1_3BA0A450855E05C5 : public ::System::Object
{
public:
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_AAHAHNBGBPH()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x66740);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_CLFAMLEADDD()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x66760);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_CEPDIIPEKBO()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x66780);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_MCIHFJOIINA()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x667A0);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_MDDOBLODHEE()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x667C0);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_MMLDFMKFNIN()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x667E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_720*, ::RPG::Client::ActivityPanelTemplate>** StaticGet_ODPGDKCDEMI()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_720*, ::RPG::Client::ActivityPanelTemplate>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x66800);
	}
	static ::RPG::Client::ActivityPanelTemplate* StaticGet_DHHPJEGAHJL()
	{
		return (::RPG::Client::ActivityPanelTemplate*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3BA0A450855E05C5_TypeDefinitionIndex)->GetStaticField(0x66808);
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
