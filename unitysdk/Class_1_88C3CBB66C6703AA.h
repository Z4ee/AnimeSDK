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

#define CLASS_1_88C3CBB66C6703AA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A0FEA50)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x1A0FF0C0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_1293CB739F1151A1_1_OFFSET UNITYSDK_OFFSET(0x1A0FE4A0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x1A0FE360)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1A0FF1A0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1A0FF3D0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_58D7EBA86980EE7B_OFFSET UNITYSDK_OFFSET(0x1A0FE260)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x1A0FEAD0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_6E520D7D4D494BBE_OFFSET UNITYSDK_OFFSET(0x1A0FE410)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_7D2BD1D8D2B63CC7_OFFSET UNITYSDK_OFFSET(0x1A0FE7D0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_8D663435C6E609D2_OFFSET UNITYSDK_OFFSET(0x1A0FE310)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x1A0FE9C0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_AA81315E4ED1DD8F_OFFSET UNITYSDK_OFFSET(0x1A0FE550)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_B249669397C86AFF_OFFSET UNITYSDK_OFFSET(0x1A0FF2A0)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_C55DD5B612A4F0D5_OFFSET UNITYSDK_OFFSET(0x1A0FEF10)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A0FEA10)
#define CLASS_1_88C3CBB66C6703AA_METHOD_1_EEA7696F9914667D_OFFSET UNITYSDK_OFFSET(0x1A0FE740)
#define CLASS_1_88C3CBB66C6703AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0FF3E0)

inline static constexpr unsigned int Class_1_88C3CBB66C6703AA_TypeDefinitionIndex = 60898;

class Class_1_88C3CBB66C6703AA : public ::System::Object
{
public:
	::RPG::GameCore::EffectConfig* JPDPMEIKJKG; // 0x10
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
	::Class_1_E45C207B1AC948BE* CDAECNCKMJO; // 0x20
	::RPG::Client::MonoEffect* HJBEGIDAMBP; // 0x28
	::RPG::GameCore::TimeRewindEffConfig* ICJLGDHCHDC; // 0x30
	::System::String* CBGBLLLCCOH; // 0x38
	::RPG::Client::MonoEffectPluginTimeRewind* ELCCBFJHDDK; // 0x40
	::System::Single HBDJCFFDGDD; // 0x48
	::System::Boolean PFJBJLBHCFH; // 0x4C
	::System::Single KBDPMBDJIOF; // 0x50
	::System::Single CNDJDPHMHNK; // 0x54
	::RPG::GameCore::TimeRewindState PPNPFHEGGCI; // 0x58
	::System::Int32 ILKCHEDFFGE; // 0x5C
	::Class_1_88C3CBB66C6703AA_FadeInOutState JBGFIMKKNFP; // 0x60
	::System::Boolean BAPANJOFDFA; // 0x64
	::System::Boolean MCAPIAKDMAA; // 0x65
	::System::Boolean LLMLOGNFFCD; // 0x66
	::System::Boolean ADDOOLCIPFD; // 0x67

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
