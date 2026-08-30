#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_10;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BE764BAB439B58AC_GET_DEBUGSTATE_OFFSET UNITYSDK_OFFSET(0x1AA64AF0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_18B8B3C7AE5E95BB_OFFSET UNITYSDK_OFFSET(0x1AA64C30)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_1B1F361718F73A20_OFFSET UNITYSDK_OFFSET(0x1AA65BF0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_240CE54A2093CC15_OFFSET UNITYSDK_OFFSET(0x1AA65EC0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_39825F7B9A5124F8_OFFSET UNITYSDK_OFFSET(0x1AA652A0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_4581E6F285FC1202_OFFSET UNITYSDK_OFFSET(0x1AA65420)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_6BE33309F5C49CC7_OFFSET UNITYSDK_OFFSET(0x1AA65700)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_6FCDE4DB27EDEA53_OFFSET UNITYSDK_OFFSET(0x1AA659F0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_B27A4756A951DBDD_OFFSET UNITYSDK_OFFSET(0x1AA66210)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_B66743395D9743AC_OFFSET UNITYSDK_OFFSET(0x1AA65CC0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_BF49A14094DB94AB_OFFSET UNITYSDK_OFFSET(0x1AA65BA0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_CCAFBB327280DC21_OFFSET UNITYSDK_OFFSET(0x1AA653B0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_DE2473C3425C1AAC_OFFSET UNITYSDK_OFFSET(0x1AA660F0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_E0CB7EF718DB0DB7_OFFSET UNITYSDK_OFFSET(0x1AA65D70)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_EF2B018840867312_OFFSET UNITYSDK_OFFSET(0x1AA64BC0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_F55DD84C7E4B28F2_OFFSET UNITYSDK_OFFSET(0x1AA65130)
#define CLASS_1_BE764BAB439B58AC_SET_DEBUGSTATE_OFFSET UNITYSDK_OFFSET(0x1AA64B00)
#define CLASS_1_BE764BAB439B58AC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA64B10)
#define CLASS_1_BE764BAB439B58AC___SHOWBATTLESUCCTOAST_B__30_0_OFFSET UNITYSDK_OFFSET(0x1AA66BF0)
#define CLASS_1_BE764BAB439B58AC___SHOWBOSSSUCCDIALOG_B__29_0_OFFSET UNITYSDK_OFFSET(0x1AA66BC0)
#define CLASS_1_BE764BAB439B58AC___SHOWCATCHUPREWARDDIALOG_B__27_0_OFFSET UNITYSDK_OFFSET(0x1AA66B90)
#define CLASS_1_BE764BAB439B58AC___SHOWEQUIPORB_B__24_0_OFFSET UNITYSDK_OFFSET(0x1AA66B60)

inline static constexpr unsigned int Class_1_BE764BAB439B58AC_TypeDefinitionIndex = 74963;

class Class_1_BE764BAB439B58AC : public ::System::Object
{
public:
	// static const ::System::Int32 ENEDNPEBCJK = 0x5; // 0x0
	::RPG::Client::Promises::Promise* BLOOOMDHGFG; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* EGKCFNBCICI; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* BDFPNINIPKE; // 0x20
	::RPG::Client::Promises::Promise* DPGLAJCOOCH; // 0x28
	::System::Collections::Generic::List_1<::System::UInt32>* FEKELAENMNH; // 0x30
	::RPG::Client::Promises::Promise* GLJPMGNOKNI; // 0x38
	::RPG::Client::Promises::Promise* AFGBNAAFJFO; // 0x40
	::System::UInt32 LPFLIFFMJEL; // 0x48
	::System::Boolean FJHCJAKGLGK; // 0x4C
	::System::UInt32 IJHAJEABAJF; // 0x50
	::System::UInt32 _DebugState_k__BackingField; // 0x54

	::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_DebugState()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_GET_DEBUGSTATE_OFFSET))(this);
	}

	::System::Void set_DebugState(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_SET_DEBUGSTATE_OFFSET))(this, a1);
	}

	::System::Void Method_1_EF2B018840867312(::Class_1_BB4B99DE4C2501EC_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_10*))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_EF2B018840867312_OFFSET))(this, a1);
	}

	::System::Void Method_1_18B8B3C7AE5E95BB(::Class_1_BB4B99DE4C2501EC_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_10*))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_18B8B3C7AE5E95BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_F55DD84C7E4B28F2(::Class_1_BB4B99DE4C2501EC_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_10*))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_F55DD84C7E4B28F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_39825F7B9A5124F8(::Class_1_BB4B99DE4C2501EC_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_10*))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_39825F7B9A5124F8_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_CCAFBB327280DC21(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_CCAFBB327280DC21_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_6BE33309F5C49CC7()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_6BE33309F5C49CC7_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_4581E6F285FC1202(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_4581E6F285FC1202_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_E0CB7EF718DB0DB7()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_E0CB7EF718DB0DB7_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_6FCDE4DB27EDEA53()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_6FCDE4DB27EDEA53_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_1B1F361718F73A20()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_1B1F361718F73A20_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_B66743395D9743AC()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_B66743395D9743AC_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_240CE54A2093CC15()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_240CE54A2093CC15_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_BF49A14094DB94AB()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_BF49A14094DB94AB_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_B27A4756A951DBDD(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_B27A4756A951DBDD_OFFSET))(this, a1);
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
