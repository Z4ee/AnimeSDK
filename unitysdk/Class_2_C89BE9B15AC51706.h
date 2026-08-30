#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapRotation/EffectType.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_2_B105BEE67D1C2502;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace System { class String; }

#define CLASS_2_C89BE9B15AC51706_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E13320)
#define CLASS_2_C89BE9B15AC51706_METHOD_2_02C5AB138F5F739C_OFFSET UNITYSDK_OFFSET(0x18E132B0)
#define CLASS_2_C89BE9B15AC51706_METHOD_2_56B51D69AFAE07D7_OFFSET UNITYSDK_OFFSET(0x18E13370)
#define CLASS_2_C89BE9B15AC51706_METHOD_2_7DB540F7EC4E5E2C_OFFSET UNITYSDK_OFFSET(0x18E13580)
#define CLASS_2_C89BE9B15AC51706_METHOD_2_921E1D046132097A_OFFSET UNITYSDK_OFFSET(0x18E137D0)
#define CLASS_2_C89BE9B15AC51706_METHOD_2_96F674FB9A99092A_OFFSET UNITYSDK_OFFSET(0x18E136C0)
#define CLASS_2_C89BE9B15AC51706_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x18E13740)
#define CLASS_2_C89BE9B15AC51706_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x18E13780)
#define CLASS_2_C89BE9B15AC51706__CTOR_OFFSET UNITYSDK_OFFSET(0x18E13250)

inline static constexpr unsigned int Class_2_C89BE9B15AC51706_TypeDefinitionIndex = 57470;

class Class_2_C89BE9B15AC51706 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::String* BHCCCKJOCNL; // 0x18
	::Class_2_B105BEE67D1C2502* LKCGAFENIJG; // 0x20
	::RPG::Client::MapRotation::EffectType EOBPHJFPCFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C89BE9B15AC51706__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_02C5AB138F5F739C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C89BE9B15AC51706_METHOD_2_02C5AB138F5F739C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C89BE9B15AC51706_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_56B51D69AFAE07D7(::RPG::Client::MapRotation::EffectType a1, ::RPG::Client::TriggerEffectParams* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapRotation::EffectType, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + CLASS_2_C89BE9B15AC51706_METHOD_2_56B51D69AFAE07D7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7DB540F7EC4E5E2C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C89BE9B15AC51706_METHOD_2_7DB540F7EC4E5E2C_OFFSET))(this, a1);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C89BE9B15AC51706_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C89BE9B15AC51706_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_921E1D046132097A(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_C89BE9B15AC51706_METHOD_2_921E1D046132097A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_96F674FB9A99092A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C89BE9B15AC51706_METHOD_2_96F674FB9A99092A_OFFSET))(this, a1);
	}
};
