#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_885;
class Class_1_0B6B39B929043B8F;
class Class_2_FFF9083835D38A52;
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace RPG::Client::PixAir { class PixAirEquipLevelData; }
namespace RPG::Client::PixAir { class PixAirEquipmentGhost; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IList; }

#define CLASS_1_6613E92732C80D52_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xAD63B50)
#define CLASS_1_6613E92732C80D52_GET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0xAD62530)
#define CLASS_1_6613E92732C80D52_GET_CHARGEPOWER_OFFSET UNITYSDK_OFFSET(0xAD62590)
#define CLASS_1_6613E92732C80D52_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0xAD624D0)
#define CLASS_1_6613E92732C80D52_GET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0xAD624F0)
#define CLASS_1_6613E92732C80D52_GET_HASTEPOWER_OFFSET UNITYSDK_OFFSET(0xAD62570)
#define CLASS_1_6613E92732C80D52_GET_JAMPOWER_OFFSET UNITYSDK_OFFSET(0xAD625B0)
#define CLASS_1_6613E92732C80D52_GET_MULTIPOWER_OFFSET UNITYSDK_OFFSET(0xAD62550)
#define CLASS_1_6613E92732C80D52_GET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0xAD62510)
#define CLASS_1_6613E92732C80D52_METHOD_1_621F8E54F3755EEC_OFFSET UNITYSDK_OFFSET(0xAD63660)
#define CLASS_1_6613E92732C80D52_METHOD_1_633B64919EFDE65C_OFFSET UNITYSDK_OFFSET(0xAD63700)
#define CLASS_1_6613E92732C80D52_METHOD_1_E04788E18124DA4E_OFFSET UNITYSDK_OFFSET(0xAD62BC0)
#define CLASS_1_6613E92732C80D52_METHOD_1_E66E75DC21E4F544_OFFSET UNITYSDK_OFFSET(0xAD631A0)
#define CLASS_1_6613E92732C80D52_METHOD_1_EC5A942F906ED2A6_OFFSET UNITYSDK_OFFSET(0xAD62B40)
#define CLASS_1_6613E92732C80D52_METHOD_1_FECF6B2037779CA0_OFFSET UNITYSDK_OFFSET(0xAD625D0)
#define CLASS_1_6613E92732C80D52_SET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0xAD62540)
#define CLASS_1_6613E92732C80D52_SET_CHARGEPOWER_OFFSET UNITYSDK_OFFSET(0xAD625A0)
#define CLASS_1_6613E92732C80D52_SET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0xAD624E0)
#define CLASS_1_6613E92732C80D52_SET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0xAD62500)
#define CLASS_1_6613E92732C80D52_SET_HASTEPOWER_OFFSET UNITYSDK_OFFSET(0xAD62580)
#define CLASS_1_6613E92732C80D52_SET_JAMPOWER_OFFSET UNITYSDK_OFFSET(0xAD625C0)
#define CLASS_1_6613E92732C80D52_SET_MULTIPOWER_OFFSET UNITYSDK_OFFSET(0xAD62560)
#define CLASS_1_6613E92732C80D52_SET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0xAD62520)
#define CLASS_1_6613E92732C80D52__CTOR_OFFSET UNITYSDK_OFFSET(0xAD62B30)

inline static constexpr unsigned int Class_1_6613E92732C80D52_TypeDefinitionIndex = 73703;

class Class_1_6613E92732C80D52 : public ::System::Object
{
public:
	::Class_1_0B6B39B929043B8F* Field_1_0; // 0x10
	::Class_2_FFF9083835D38A52* Field_1_1; // 0x18
	::RPG::GameCore::FixPoint _DamagePower_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _MultiPower_k__BackingField; // 0x28
	::RPG::GameCore::FixPoint _BurnPower_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint _ShieldPower_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _JamPower_k__BackingField; // 0x40
	::RPG::GameCore::FixPoint _CoolDown_k__BackingField; // 0x48
	::RPG::GameCore::FixPoint _HastePower_k__BackingField; // 0x50
	::RPG::GameCore::FixPoint _ChargePower_k__BackingField; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_CoolDown()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_GET_COOLDOWN_OFFSET))(this);
	}

	::System::Void set_CoolDown(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_SET_COOLDOWN_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_DamagePower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_GET_DAMAGEPOWER_OFFSET))(this);
	}

	::System::Void set_DamagePower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_SET_DAMAGEPOWER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ShieldPower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_GET_SHIELDPOWER_OFFSET))(this);
	}

	::System::Void set_ShieldPower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_SET_SHIELDPOWER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_BurnPower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_GET_BURNPOWER_OFFSET))(this);
	}

	::System::Void set_BurnPower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_SET_BURNPOWER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MultiPower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_GET_MULTIPOWER_OFFSET))(this);
	}

	::System::Void set_MultiPower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_SET_MULTIPOWER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_HastePower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_GET_HASTEPOWER_OFFSET))(this);
	}

	::System::Void set_HastePower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_SET_HASTEPOWER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ChargePower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_GET_CHARGEPOWER_OFFSET))(this);
	}

	::System::Void set_ChargePower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_SET_CHARGEPOWER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_JamPower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_GET_JAMPOWER_OFFSET))(this);
	}

	::System::Void set_JamPower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_SET_JAMPOWER_OFFSET))(this, a1);
	}

	static ::Class_1_6613E92732C80D52* Method_1_FECF6B2037779CA0(::RPG::Client::PixAir::PixAirEquipLevelData* a1)
	{
		return ((::Class_1_6613E92732C80D52*(*)(::RPG::Client::PixAir::PixAirEquipLevelData*))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_METHOD_1_FECF6B2037779CA0_OFFSET))(a1);
	}

	static ::Class_1_6613E92732C80D52* Method_1_E04788E18124DA4E(::RPG::Client::PixAir::PixAirEquipInstance* a1)
	{
		return ((::Class_1_6613E92732C80D52*(*)(::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_METHOD_1_E04788E18124DA4E_OFFSET))(a1);
	}

	static ::Class_1_6613E92732C80D52* Method_1_E66E75DC21E4F544(::RPG::Client::PixAir::PixAirEquipmentGhost* a1, ::RPG::Client::PixAir::PixAirEquipLevelData* a2)
	{
		return ((::Class_1_6613E92732C80D52*(*)(::RPG::Client::PixAir::PixAirEquipmentGhost*, ::RPG::Client::PixAir::PixAirEquipLevelData*))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_METHOD_1_E66E75DC21E4F544_OFFSET))(a1, a2);
	}

	::System::Void Method_1_EC5A942F906ED2A6(::Class_0_16E4307DCC419505_885* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_885*))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_METHOD_1_EC5A942F906ED2A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_621F8E54F3755EEC(::System::Collections::IList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_METHOD_1_621F8E54F3755EEC_OFFSET))(this, a1);
	}

	::System::String* Method_1_633B64919EFDE65C(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_METHOD_1_633B64919EFDE65C_OFFSET))(this, a1);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_6613E92732C80D52_GETCONTEXT_OFFSET))(this, a1);
	}
};
