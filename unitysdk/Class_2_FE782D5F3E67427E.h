#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class PropSoundConfig; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_FE782D5F3E67427E_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x130B60A0)
#define CLASS_2_FE782D5F3E67427E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x130B6250)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x130B60F0)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x130B6BD0)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_369F47CCB61A607A_OFFSET UNITYSDK_OFFSET(0x130B6AB0)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x130B6830)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_7724379154A147EE_OFFSET UNITYSDK_OFFSET(0x130B62E0)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x130B6A00)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_8C637C6318E207AD_OFFSET UNITYSDK_OFFSET(0x130B67B0)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x130B62A0)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x130B6E80)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_E6451DD1ECA91329_OFFSET UNITYSDK_OFFSET(0x130B6CB0)
#define CLASS_2_FE782D5F3E67427E_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x130B6000)
#define CLASS_2_FE782D5F3E67427E_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x130B6060)
#define CLASS_2_FE782D5F3E67427E__CTOR_OFFSET UNITYSDK_OFFSET(0x130B6FC0)

inline static constexpr unsigned int Class_2_FE782D5F3E67427E_TypeDefinitionIndex = 57413;

class Class_2_FE782D5F3E67427E : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Action* HHOPLKLKLMO; // 0x18
	::RPG::GameCore::PropSoundConfig* CAOBOIDHIDN; // 0x20
	::RPG::Client::AdventurePhase* HKDOPJJJALA; // 0x28
	::System::Single IDLEELLLCDL; // 0x30
	::System::Single GCBJGHPKPIP; // 0x34
	::System::Int32 MHBMNAAGDHE; // 0x38
	::System::Boolean JLBLDDLFIHB; // 0x3C
	::System::Single PMNIOEMJIDP; // 0x40
	::System::Int32 GMJDIKGPABK; // 0x44
	::System::Single GGBAJJJLDPO; // 0x48
	::System::Single PPMOGCCDHAA; // 0x4C
	::System::Single HILOIBFHCKN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E__CTOR_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void BeforeDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_BEFOREDISPOSE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7724379154A147EE(::RPG::GameCore::PropSoundConfig* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSoundConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_METHOD_2_7724379154A147EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_E6451DD1ECA91329(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_METHOD_2_E6451DD1ECA91329_OFFSET))(this, a1);
	}

	::System::Void Method_2_369F47CCB61A607A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_METHOD_2_369F47CCB61A607A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_METHOD_2_25CD86BF8626C8D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_8C637C6318E207AD(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E_METHOD_2_8C637C6318E207AD_OFFSET))(this, a1);
	}
};
