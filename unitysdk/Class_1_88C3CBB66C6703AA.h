#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_88C3CBB66C6703AA_FadeInOutState.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

class Class_1_E45C207B1AC948BE;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginTimeRewind; }
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindEffConfig; }
namespace System { class String; }

#define CLASS_1_88C3CBB66C6703AA_CLEAR_OFFSET UNITYSDK_OFFSET(0xC1F1E30)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xC1F24C0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_1293CB739F1151A1_1_OFFSET UNITYSDK_OFFSET(0xC1F1880)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0xC1F1740)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xC1F25A0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xC1F27D0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_58D7EBA86980EE7B_OFFSET UNITYSDK_OFFSET(0xC1F1650)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0xC1F1EC0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0xC1F17F0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_7D2BD1D8D2B63CC7_OFFSET UNITYSDK_OFFSET(0xC1F1BB0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_8D663435C6E609D2_OFFSET UNITYSDK_OFFSET(0xC1F16F0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xC1F1DA0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_AA81315E4ED1DD8F_OFFSET UNITYSDK_OFFSET(0xC1F1930)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_B249669397C86AFF_OFFSET UNITYSDK_OFFSET(0xC1F26A0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_C55DD5B612A4F0D5_OFFSET UNITYSDK_OFFSET(0xC1F2310)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC1F1DF0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_EEA7696F9914667D_OFFSET UNITYSDK_OFFSET(0xC1F1B20)
#define CLASS_1_88C3CBB66C6703AA__CTOR_OFFSET UNITYSDK_OFFSET(0xC1F27E0)

inline static constexpr unsigned int Class_1_88C3CBB66C6703AA_TypeDefinitionIndex = 56824;

class Class_1_88C3CBB66C6703AA : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Class_1_E45C207B1AC948BE* Field_1_1; // 0x18
	::RPG::GameCore::EffectConfig* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::RPG::Client::MonoEffectPluginTimeRewind* Field_1_4; // 0x30
	::RPG::GameCore::TimeRewindEffConfig* Field_1_5; // 0x38
	::RPG::Client::MonoEffect* Field_1_6; // 0x40
	::System::Single Field_1_7; // 0x48
	::RPG::GameCore::TimeRewindState Field_1_8; // 0x4C
	::System::Int32 Field_1_9; // 0x50
	::System::Single Field_1_10; // 0x54
	::Class_1_88C3CBB66C6703AA_FadeInOutState Field_1_11; // 0x58
	::System::Boolean Field_1_12; // 0x5C
	::System::Boolean Field_1_13; // 0x5D
	::System::Boolean Field_1_14; // 0x5E
	::System::Boolean Field_1_15; // 0x5F
	::System::Boolean Field_1_16; // 0x60
	::System::Single Field_1_17; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_58D7EBA86980EE7B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TimeRewindEffConfig* a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TimeRewindEffConfig*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_58D7EBA86980EE7B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8D663435C6E609D2(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_8D663435C6E609D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_1_1293CB739F1151A1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_1293CB739F1151A1_1_OFFSET))(this);
	}

	::System::Void Method_1_AA81315E4ED1DD8F(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_AA81315E4ED1DD8F_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_EEA7696F9914667D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_EEA7696F9914667D_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D2BD1D8D2B63CC7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_7D2BD1D8D2B63CC7_OFFSET))(this, a1);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_1_B249669397C86AFF(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_B249669397C86AFF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C55DD5B612A4F0D5(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_C55DD5B612A4F0D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E520D7D4D494BBE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_6E520D7D4D494BBE_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88C3CBB66C6703AA_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}
};
