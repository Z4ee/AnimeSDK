#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class PropSoundConfig; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_16FDF42AD8E2C125_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x1573E320)
#define CLASS_2_16FDF42AD8E2C125_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1573E560)
#define CLASS_2_16FDF42AD8E2C125_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x1573E370)
#define CLASS_2_16FDF42AD8E2C125_METHOD_2_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x1573EF60)
#define CLASS_2_16FDF42AD8E2C125_METHOD_2_369F47CCB61A607A_OFFSET UNITYSDK_OFFSET(0x1573EE40)
#define CLASS_2_16FDF42AD8E2C125_METHOD_2_7724379154A147EE_OFFSET UNITYSDK_OFFSET(0x1573E5F0)
#define CLASS_2_16FDF42AD8E2C125_METHOD_2_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x1573EB50)
#define CLASS_2_16FDF42AD8E2C125_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x1573ED90)
#define CLASS_2_16FDF42AD8E2C125_METHOD_2_8C637C6318E207AD_OFFSET UNITYSDK_OFFSET(0x1573EAD0)
#define CLASS_2_16FDF42AD8E2C125_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1573E5B0)
#define CLASS_2_16FDF42AD8E2C125_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1573F190)
#define CLASS_2_16FDF42AD8E2C125_METHOD_2_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x1573F040)
#define CLASS_2_16FDF42AD8E2C125_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x1573E280)
#define CLASS_2_16FDF42AD8E2C125_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1573E2E0)
#define CLASS_2_16FDF42AD8E2C125__CTOR_OFFSET UNITYSDK_OFFSET(0x1573F2D0)

inline static constexpr unsigned int Class_2_16FDF42AD8E2C125_TypeDefinitionIndex = 57257;

class Class_2_16FDF42AD8E2C125 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::PropSoundConfig* CAOBOIDHIDN; // 0x18
	::System::Action* HHOPLKLKLMO; // 0x20
	::RPG::Client::AdventurePhase* HKDOPJJJALA; // 0x28
	::System::Single GCBJGHPKPIP; // 0x30
	::System::Single HILOIBFHCKN; // 0x34
	::System::Single GGBAJJJLDPO; // 0x38
	::System::Single IDLEELLLCDL; // 0x3C
	::System::Boolean JLBLDDLFIHB; // 0x40
	::System::Single PPMOGCCDHAA; // 0x44
	::System::Single PMNIOEMJIDP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125__CTOR_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void BeforeDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_BEFOREDISPOSE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7724379154A147EE(::RPG::GameCore::PropSoundConfig* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSoundConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_METHOD_2_7724379154A147EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_METHOD_2_7A73F165001BC325_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_D4975DF907B2431F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_METHOD_2_D4975DF907B2431F_OFFSET))(this, a1);
	}

	::System::Void Method_2_369F47CCB61A607A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_METHOD_2_369F47CCB61A607A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_METHOD_2_25CD86BF8626C8D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_8C637C6318E207AD(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_16FDF42AD8E2C125_METHOD_2_8C637C6318E207AD_OFFSET))(this, a1);
	}
};
