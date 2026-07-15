#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinBattleCardIdentifier.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_C85C4DAB350DD5FC_2;

#define CLASS_1_B71FC14BA77C9F77_GET_CARDCONFIG_OFFSET UNITYSDK_OFFSET(0x1845D170)
#define CLASS_1_B71FC14BA77C9F77_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x1845D070)
#define CLASS_1_B71FC14BA77C9F77_GET_COPIEDSOURCECARD_OFFSET UNITYSDK_OFFSET(0x1845D190)
#define CLASS_1_B71FC14BA77C9F77_GET_FINALAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0x1845D010)
#define CLASS_1_B71FC14BA77C9F77_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1845CFF0)
#define CLASS_1_B71FC14BA77C9F77_GET_ID_OFFSET UNITYSDK_OFFSET(0x1845CFE0)
#define CLASS_1_B71FC14BA77C9F77_GET_MANACOSTRAW_OFFSET UNITYSDK_OFFSET(0x1845D050)
#define CLASS_1_B71FC14BA77C9F77_GET_MANACOST_OFFSET UNITYSDK_OFFSET(0x1845D030)
#define CLASS_1_B71FC14BA77C9F77_GET_NEEDRELEASETARGET_OFFSET UNITYSDK_OFFSET(0x1845D0B0)
#define CLASS_1_B71FC14BA77C9F77_GET_RAWCASTER_OFFSET UNITYSDK_OFFSET(0x1845D090)
#define CLASS_1_B71FC14BA77C9F77_GET_UID_OFFSET UNITYSDK_OFFSET(0x1845D000)
#define CLASS_1_B71FC14BA77C9F77_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1845D120)
#define CLASS_1_B71FC14BA77C9F77_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1845D0D0)
#define CLASS_1_B71FC14BA77C9F77_SET_CARDCONFIG_OFFSET UNITYSDK_OFFSET(0x1845D180)
#define CLASS_1_B71FC14BA77C9F77_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x1845D080)
#define CLASS_1_B71FC14BA77C9F77_SET_COPIEDSOURCECARD_OFFSET UNITYSDK_OFFSET(0x1845D1A0)
#define CLASS_1_B71FC14BA77C9F77_SET_FINALAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0x1845D020)
#define CLASS_1_B71FC14BA77C9F77_SET_MANACOSTRAW_OFFSET UNITYSDK_OFFSET(0x1845D060)
#define CLASS_1_B71FC14BA77C9F77_SET_MANACOST_OFFSET UNITYSDK_OFFSET(0x1845D040)
#define CLASS_1_B71FC14BA77C9F77_SET_NEEDRELEASETARGET_OFFSET UNITYSDK_OFFSET(0x1845D0C0)
#define CLASS_1_B71FC14BA77C9F77_SET_RAWCASTER_OFFSET UNITYSDK_OFFSET(0x1845D0A0)
#define CLASS_1_B71FC14BA77C9F77__CTOR_OFFSET UNITYSDK_OFFSET(0x1845CF70)

inline static constexpr unsigned int Class_1_B71FC14BA77C9F77_TypeDefinitionIndex = 76141;

class Class_1_B71FC14BA77C9F77 : public ::System::Object
{
public:
	::Class_1_C85C4DAB350DD5FC_2* _CardConfig_k__BackingField; // 0x10
	::Class_1_B71FC14BA77C9F77* _CopiedSourceCard_k__BackingField; // 0x18
	::System::Boolean _NeedReleaseTarget_k__BackingField; // 0x20
	::System::Int32 _ManaCostRaw_k__BackingField; // 0x24
	::RPG::GameCore::FixPoint _FinalAmplification_k__BackingField; // 0x28
	::RPG::GameCore::FateRinCardCasterSource _RawCaster_k__BackingField; // 0x30
	::System::UInt32 _ID_k__BackingField; // 0x34
	::System::UInt32 _UID_k__BackingField; // 0x38
	::System::Int32 _ManaCost_k__BackingField; // 0x3C
	::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier _Identifier_k__BackingField; // 0x40
	::RPG::GameCore::FateRinCardCasterSource _Caster_k__BackingField; // 0x44

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
