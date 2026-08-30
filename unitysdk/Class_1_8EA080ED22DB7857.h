#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_974;
class Class_1_0B6B39B929043B8F;
class Class_2_FFF9083835D38A52;
namespace RPG::Client::PixAir { class PixAirEquipInstance; }
namespace RPG::Client::PixAir { class PixAirEquipLevelData; }
namespace RPG::Client::PixAir { class PixAirEquipmentGhost; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IList; }

#define CLASS_1_8EA080ED22DB7857_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xC182A70)
#define CLASS_1_8EA080ED22DB7857_GET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0xC1819A0)
#define CLASS_1_8EA080ED22DB7857_GET_CHARGEPOWER_OFFSET UNITYSDK_OFFSET(0xC181A00)
#define CLASS_1_8EA080ED22DB7857_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0xC181940)
#define CLASS_1_8EA080ED22DB7857_GET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0xC181960)
#define CLASS_1_8EA080ED22DB7857_GET_HASTEPOWER_OFFSET UNITYSDK_OFFSET(0xC1819E0)
#define CLASS_1_8EA080ED22DB7857_GET_JAMPOWER_OFFSET UNITYSDK_OFFSET(0xC181A20)
#define CLASS_1_8EA080ED22DB7857_GET_MULTIPOWER_OFFSET UNITYSDK_OFFSET(0xC1819C0)
#define CLASS_1_8EA080ED22DB7857_GET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0xC181980)
#define CLASS_1_8EA080ED22DB7857_METHOD_1_1699EE197DCC012D_OFFSET UNITYSDK_OFFSET(0xC1821A0)
#define CLASS_1_8EA080ED22DB7857_METHOD_1_621F8E54F3755EEC_OFFSET UNITYSDK_OFFSET(0xC182580)
#define CLASS_1_8EA080ED22DB7857_METHOD_1_633B64919EFDE65C_OFFSET UNITYSDK_OFFSET(0xC182620)
#define CLASS_1_8EA080ED22DB7857_METHOD_1_B3584D5964FDFB7E_OFFSET UNITYSDK_OFFSET(0xC181A40)
#define CLASS_1_8EA080ED22DB7857_METHOD_1_C9BA836BA1E88EC0_OFFSET UNITYSDK_OFFSET(0xC181CA0)
#define CLASS_1_8EA080ED22DB7857_METHOD_1_EC5A942F906ED2A6_OFFSET UNITYSDK_OFFSET(0xC181C20)
#define CLASS_1_8EA080ED22DB7857_SET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0xC1819B0)
#define CLASS_1_8EA080ED22DB7857_SET_CHARGEPOWER_OFFSET UNITYSDK_OFFSET(0xC181A10)
#define CLASS_1_8EA080ED22DB7857_SET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0xC181950)
#define CLASS_1_8EA080ED22DB7857_SET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0xC181970)
#define CLASS_1_8EA080ED22DB7857_SET_HASTEPOWER_OFFSET UNITYSDK_OFFSET(0xC1819F0)
#define CLASS_1_8EA080ED22DB7857_SET_JAMPOWER_OFFSET UNITYSDK_OFFSET(0xC181A30)
#define CLASS_1_8EA080ED22DB7857_SET_MULTIPOWER_OFFSET UNITYSDK_OFFSET(0xC1819D0)
#define CLASS_1_8EA080ED22DB7857_SET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0xC181990)
#define CLASS_1_8EA080ED22DB7857__CTOR_OFFSET UNITYSDK_OFFSET(0xC181C10)

inline static constexpr unsigned int Class_1_8EA080ED22DB7857_TypeDefinitionIndex = 78900;

class Class_1_8EA080ED22DB7857 : public ::System::Object
{
public:
	::Class_2_FFF9083835D38A52* IFAHBJDHGFH; // 0x10
	::Class_1_0B6B39B929043B8F* KALACGGGCDE; // 0x18
	::RPG::GameCore::FixPoint _JamPower_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _ShieldPower_k__BackingField; // 0x28
	::RPG::GameCore::FixPoint _DamagePower_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint _MultiPower_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _CoolDown_k__BackingField; // 0x40
	::RPG::GameCore::FixPoint _BurnPower_k__BackingField; // 0x48
	::RPG::GameCore::FixPoint _ChargePower_k__BackingField; // 0x50
	::RPG::GameCore::FixPoint _HastePower_k__BackingField; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_CoolDown()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_GET_COOLDOWN_OFFSET))(this);
	}

	::System::Void set_CoolDown(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_SET_COOLDOWN_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_DamagePower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_GET_DAMAGEPOWER_OFFSET))(this);
	}

	::System::Void set_DamagePower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_SET_DAMAGEPOWER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ShieldPower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_GET_SHIELDPOWER_OFFSET))(this);
	}

	::System::Void set_ShieldPower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_SET_SHIELDPOWER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_BurnPower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_GET_BURNPOWER_OFFSET))(this);
	}

	::System::Void set_BurnPower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_SET_BURNPOWER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MultiPower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_GET_MULTIPOWER_OFFSET))(this);
	}

	::System::Void set_MultiPower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_SET_MULTIPOWER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_HastePower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_GET_HASTEPOWER_OFFSET))(this);
	}

	::System::Void set_HastePower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_SET_HASTEPOWER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ChargePower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_GET_CHARGEPOWER_OFFSET))(this);
	}

	::System::Void set_ChargePower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_SET_CHARGEPOWER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_JamPower()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_GET_JAMPOWER_OFFSET))(this);
	}

	::System::Void set_JamPower(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_SET_JAMPOWER_OFFSET))(this, a1);
	}

	static ::Class_1_8EA080ED22DB7857* Method_1_B3584D5964FDFB7E(::RPG::Client::PixAir::PixAirEquipLevelData* a1)
	{
		return ((::Class_1_8EA080ED22DB7857*(*)(::RPG::Client::PixAir::PixAirEquipLevelData*))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_METHOD_1_B3584D5964FDFB7E_OFFSET))(a1);
	}

	static ::Class_1_8EA080ED22DB7857* Method_1_C9BA836BA1E88EC0(::RPG::Client::PixAir::PixAirEquipInstance* a1)
	{
		return ((::Class_1_8EA080ED22DB7857*(*)(::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_METHOD_1_C9BA836BA1E88EC0_OFFSET))(a1);
	}

	static ::Class_1_8EA080ED22DB7857* Method_1_1699EE197DCC012D(::RPG::Client::PixAir::PixAirEquipmentGhost* a1, ::RPG::Client::PixAir::PixAirEquipLevelData* a2)
	{
		return ((::Class_1_8EA080ED22DB7857*(*)(::RPG::Client::PixAir::PixAirEquipmentGhost*, ::RPG::Client::PixAir::PixAirEquipLevelData*))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_METHOD_1_1699EE197DCC012D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_EC5A942F906ED2A6(::Class_0_16E4307DCC419505_974* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_974*))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_METHOD_1_EC5A942F906ED2A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_621F8E54F3755EEC(::System::Collections::IList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_METHOD_1_621F8E54F3755EEC_OFFSET))(this, a1);
	}

	::System::String* Method_1_633B64919EFDE65C(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_METHOD_1_633B64919EFDE65C_OFFSET))(this, a1);
	}

	::System::Object* GetContext(::System::Type* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_8EA080ED22DB7857_GETCONTEXT_OFFSET))(this, a1);
	}
};
