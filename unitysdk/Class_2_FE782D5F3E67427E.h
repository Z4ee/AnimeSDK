#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class PropSoundConfig; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_FE782D5F3E67427E_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x136C0F50)
#define CLASS_2_FE782D5F3E67427E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136C1100)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x136C0FA0)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x136C1A80)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_369F47CCB61A607A_OFFSET UNITYSDK_OFFSET(0x136C1960)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x136C16E0)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_7724379154A147EE_OFFSET UNITYSDK_OFFSET(0x136C1190)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x136C18B0)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_8C637C6318E207AD_OFFSET UNITYSDK_OFFSET(0x136C1660)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x136C1150)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x136C1D30)
#define CLASS_2_FE782D5F3E67427E_METHOD_2_E6451DD1ECA91329_OFFSET UNITYSDK_OFFSET(0x136C1B60)
#define CLASS_2_FE782D5F3E67427E_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x136C0EB0)
#define CLASS_2_FE782D5F3E67427E_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x136C0F10)
#define CLASS_2_FE782D5F3E67427E__CTOR_OFFSET UNITYSDK_OFFSET(0x136C1E70)

inline static constexpr unsigned int Class_2_FE782D5F3E67427E_TypeDefinitionIndex = 53476;

class Class_2_FE782D5F3E67427E : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::AdventurePhase* Field_2_0; // 0x18
	::RPG::GameCore::PropSoundConfig* Field_2_1; // 0x20
	::System::Action* Field_2_2; // 0x28
	::System::Int32 Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x34
	::System::Int32 Field_2_5; // 0x38
	::System::Single Field_2_6; // 0x3C
	::System::Single Field_2_7; // 0x40
	::System::Single Field_2_8; // 0x44
	::System::Single Field_2_9; // 0x48
	::System::Boolean Field_2_10; // 0x4C
	::System::Single Field_2_11; // 0x50

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
