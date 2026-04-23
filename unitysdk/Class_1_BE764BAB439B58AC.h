#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_5;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BE764BAB439B58AC_GET_DEBUGSTATE_OFFSET UNITYSDK_OFFSET(0x1240ADB0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_12C7BCAF571F0978_OFFSET UNITYSDK_OFFSET(0x1240C0E0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_1A6E343D342D69AF_OFFSET UNITYSDK_OFFSET(0x1240B3E0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_2D857960348D8239_OFFSET UNITYSDK_OFFSET(0x1240BA20)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_41FF931D39D0E06F_OFFSET UNITYSDK_OFFSET(0x1240C280)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_5CA2AF0D24D1DCAA_OFFSET UNITYSDK_OFFSET(0x1240B6A0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_6FCDE4DB27EDEA53_OFFSET UNITYSDK_OFFSET(0x1240BD70)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_703299C3DD1F5B47_OFFSET UNITYSDK_OFFSET(0x1240AEF0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_93D050EF99EC4D7D_OFFSET UNITYSDK_OFFSET(0x1240BF60)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_AC8FED96A4FA7F66_OFFSET UNITYSDK_OFFSET(0x1240B710)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_BF49A14094DB94AB_OFFSET UNITYSDK_OFFSET(0x1240BF10)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_DE2473C3425C1AAC_OFFSET UNITYSDK_OFFSET(0x1240C4E0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_DEA99971B2F44BCB_OFFSET UNITYSDK_OFFSET(0x1240C5F0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_E39CF2B836B1C440_OFFSET UNITYSDK_OFFSET(0x1240AE80)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_F4835D1CBEED047B_OFFSET UNITYSDK_OFFSET(0x1240B590)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_F777E2887C21937E_OFFSET UNITYSDK_OFFSET(0x1240C030)
#define CLASS_1_BE764BAB439B58AC_SET_DEBUGSTATE_OFFSET UNITYSDK_OFFSET(0x1240ADC0)
#define CLASS_1_BE764BAB439B58AC__CTOR_OFFSET UNITYSDK_OFFSET(0x1240ADD0)
#define CLASS_1_BE764BAB439B58AC___SHOWBATTLESUCCTOAST_B__30_0_OFFSET UNITYSDK_OFFSET(0x1240CEC0)
#define CLASS_1_BE764BAB439B58AC___SHOWBOSSSUCCDIALOG_B__29_0_OFFSET UNITYSDK_OFFSET(0x1240CE90)
#define CLASS_1_BE764BAB439B58AC___SHOWCATCHUPREWARDDIALOG_B__27_0_OFFSET UNITYSDK_OFFSET(0x1240CE60)
#define CLASS_1_BE764BAB439B58AC___SHOWEQUIPORB_B__24_0_OFFSET UNITYSDK_OFFSET(0x1240CE30)

inline static constexpr unsigned int Class_1_BE764BAB439B58AC_TypeDefinitionIndex = 69322;

class Class_1_BE764BAB439B58AC : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_10 = 0x5; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Field_1_2; // 0x10
	::RPG::Client::Promises::Promise* Field_1_4; // 0x18
	::RPG::Client::Promises::Promise* Field_1_6; // 0x20
	::RPG::Client::Promises::Promise* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x30
	::RPG::Client::Promises::Promise* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Field_1_1; // 0x40
	::System::UInt32 _DebugState_k__BackingField; // 0x48
	::System::UInt32 Field_1_8; // 0x4C
	::System::Boolean Field_1_9; // 0x50
	::System::UInt32 Field_1_7; // 0x54

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_DebugState()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_GET_DEBUGSTATE_OFFSET))(this);
	}

	::System::Void set_DebugState(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_SET_DEBUGSTATE_OFFSET))(this, value);
	}

	::System::Void Method_1_E39CF2B836B1C440(::Class_1_14E02E1F6D70E487_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_5*))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_E39CF2B836B1C440_OFFSET))(this, a1);
	}

	::System::Void Method_1_703299C3DD1F5B47(::Class_1_14E02E1F6D70E487_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_5*))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_703299C3DD1F5B47_OFFSET))(this, a1);
	}

	::System::Void Method_1_1A6E343D342D69AF(::Class_1_14E02E1F6D70E487_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_5*))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_1A6E343D342D69AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4835D1CBEED047B(::Class_1_14E02E1F6D70E487_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_5*))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_F4835D1CBEED047B_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_5CA2AF0D24D1DCAA(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_5CA2AF0D24D1DCAA_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_2D857960348D8239()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_2D857960348D8239_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_AC8FED96A4FA7F66(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_AC8FED96A4FA7F66_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_12C7BCAF571F0978()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_12C7BCAF571F0978_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_6FCDE4DB27EDEA53()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_6FCDE4DB27EDEA53_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_93D050EF99EC4D7D()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_93D050EF99EC4D7D_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_F777E2887C21937E()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_F777E2887C21937E_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_41FF931D39D0E06F()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_41FF931D39D0E06F_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BF49A14094DB94AB()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_BF49A14094DB94AB_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_DEA99971B2F44BCB(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_DEA99971B2F44BCB_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_DE2473C3425C1AAC()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_DE2473C3425C1AAC_OFFSET))(this);
	}

	::System::Void __ShowEquipOrb_b__24_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC___SHOWEQUIPORB_B__24_0_OFFSET))(this);
	}

	::System::Void __ShowCatchUpRewardDialog_b__27_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC___SHOWCATCHUPREWARDDIALOG_B__27_0_OFFSET))(this);
	}

	::System::Void __ShowBossSuccDialog_b__29_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC___SHOWBOSSSUCCDIALOG_B__29_0_OFFSET))(this);
	}

	::System::Void __ShowBattleSuccToast_b__30_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC___SHOWBATTLESUCCTOAST_B__30_0_OFFSET))(this);
	}
};
