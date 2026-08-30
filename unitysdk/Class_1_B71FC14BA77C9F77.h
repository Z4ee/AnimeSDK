#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardIdentifier.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_C85C4DAB350DD5FC_2;

#define CLASS_1_B71FC14BA77C9F77_GET_CARDCONFIG_OFFSET UNITYSDK_OFFSET(0xDD87B80)
#define CLASS_1_B71FC14BA77C9F77_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xDD87A80)
#define CLASS_1_B71FC14BA77C9F77_GET_COPIEDSOURCECARD_OFFSET UNITYSDK_OFFSET(0xDD87BA0)
#define CLASS_1_B71FC14BA77C9F77_GET_FINALAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xDD87A20)
#define CLASS_1_B71FC14BA77C9F77_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDD87A00)
#define CLASS_1_B71FC14BA77C9F77_GET_ID_OFFSET UNITYSDK_OFFSET(0xDD879F0)
#define CLASS_1_B71FC14BA77C9F77_GET_MANACOSTRAW_OFFSET UNITYSDK_OFFSET(0xDD87A60)
#define CLASS_1_B71FC14BA77C9F77_GET_MANACOST_OFFSET UNITYSDK_OFFSET(0xDD87A40)
#define CLASS_1_B71FC14BA77C9F77_GET_NEEDRELEASETARGET_OFFSET UNITYSDK_OFFSET(0xDD87AC0)
#define CLASS_1_B71FC14BA77C9F77_GET_RAWCASTER_OFFSET UNITYSDK_OFFSET(0xDD87AA0)
#define CLASS_1_B71FC14BA77C9F77_GET_UID_OFFSET UNITYSDK_OFFSET(0xDD87A10)
#define CLASS_1_B71FC14BA77C9F77_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xDD87B30)
#define CLASS_1_B71FC14BA77C9F77_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xDD87AE0)
#define CLASS_1_B71FC14BA77C9F77_SET_CARDCONFIG_OFFSET UNITYSDK_OFFSET(0xDD87B90)
#define CLASS_1_B71FC14BA77C9F77_SET_CASTER_OFFSET UNITYSDK_OFFSET(0xDD87A90)
#define CLASS_1_B71FC14BA77C9F77_SET_COPIEDSOURCECARD_OFFSET UNITYSDK_OFFSET(0xDD87BB0)
#define CLASS_1_B71FC14BA77C9F77_SET_FINALAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0xDD87A30)
#define CLASS_1_B71FC14BA77C9F77_SET_MANACOSTRAW_OFFSET UNITYSDK_OFFSET(0xDD87A70)
#define CLASS_1_B71FC14BA77C9F77_SET_MANACOST_OFFSET UNITYSDK_OFFSET(0xDD87A50)
#define CLASS_1_B71FC14BA77C9F77_SET_NEEDRELEASETARGET_OFFSET UNITYSDK_OFFSET(0xDD87AD0)
#define CLASS_1_B71FC14BA77C9F77_SET_RAWCASTER_OFFSET UNITYSDK_OFFSET(0xDD87AB0)
#define CLASS_1_B71FC14BA77C9F77__CTOR_OFFSET UNITYSDK_OFFSET(0xDD87980)

inline static constexpr unsigned int Class_1_B71FC14BA77C9F77_TypeDefinitionIndex = 79775;

class Class_1_B71FC14BA77C9F77 : public ::System::Object
{
public:
	::Class_1_B71FC14BA77C9F77* _CopiedSourceCard_k__BackingField; // 0x10
	::Class_1_C85C4DAB350DD5FC_2* _CardConfig_k__BackingField; // 0x18
	::RPG::GameCore::FateRinCardCasterSource _Caster_k__BackingField; // 0x20
	::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier _Identifier_k__BackingField; // 0x24
	::System::Int32 _ManaCost_k__BackingField; // 0x28
	::RPG::GameCore::FateRinCardCasterSource _RawCaster_k__BackingField; // 0x2C
	::RPG::GameCore::FixPoint _FinalAmplification_k__BackingField; // 0x30
	::System::UInt32 _UID_k__BackingField; // 0x38
	::System::UInt32 _ID_k__BackingField; // 0x3C
	::System::Boolean _NeedReleaseTarget_k__BackingField; // 0x40
	::System::Int32 _ManaCostRaw_k__BackingField; // 0x44

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_GET_ID_OFFSET))(this);
	}

	::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier get_Identifier()
	{
		return ((::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_UID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_GET_UID_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_FinalAmplification()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_GET_FINALAMPLIFICATION_OFFSET))(this);
	}

	::System::Void set_FinalAmplification(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_SET_FINALAMPLIFICATION_OFFSET))(this, a1);
	}

	::System::Int32 get_ManaCost()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_GET_MANACOST_OFFSET))(this);
	}

	::System::Void set_ManaCost(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_SET_MANACOST_OFFSET))(this, a1);
	}

	::System::Int32 get_ManaCostRaw()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_GET_MANACOSTRAW_OFFSET))(this);
	}

	::System::Void set_ManaCostRaw(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_SET_MANACOSTRAW_OFFSET))(this, a1);
	}

	::RPG::GameCore::FateRinCardCasterSource get_Caster()
	{
		return ((::RPG::GameCore::FateRinCardCasterSource(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_GET_CASTER_OFFSET))(this);
	}

	::System::Void set_Caster(::RPG::GameCore::FateRinCardCasterSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCardCasterSource))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_SET_CASTER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FateRinCardCasterSource get_RawCaster()
	{
		return ((::RPG::GameCore::FateRinCardCasterSource(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_GET_RAWCASTER_OFFSET))(this);
	}

	::System::Void set_RawCaster(::RPG::GameCore::FateRinCardCasterSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCardCasterSource))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_SET_RAWCASTER_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedReleaseTarget()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_GET_NEEDRELEASETARGET_OFFSET))(this);
	}

	::System::Void set_NeedReleaseTarget(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_SET_NEEDRELEASETARGET_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::Class_1_C85C4DAB350DD5FC_2* get_CardConfig()
	{
		return ((::Class_1_C85C4DAB350DD5FC_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_GET_CARDCONFIG_OFFSET))(this);
	}

	::System::Void set_CardConfig(::Class_1_C85C4DAB350DD5FC_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C85C4DAB350DD5FC_2*))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_SET_CARDCONFIG_OFFSET))(this, a1);
	}

	::Class_1_B71FC14BA77C9F77* get_CopiedSourceCard()
	{
		return ((::Class_1_B71FC14BA77C9F77*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_GET_COPIEDSOURCECARD_OFFSET))(this);
	}

	::System::Void set_CopiedSourceCard(::Class_1_B71FC14BA77C9F77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B71FC14BA77C9F77*))((::PBYTE)hIl2Cpp + CLASS_1_B71FC14BA77C9F77_SET_COPIEDSOURCECARD_OFFSET))(this, a1);
	}
};
