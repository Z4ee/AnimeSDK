#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_5;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BE764BAB439B58AC_GET_DEBUGSTATE_OFFSET UNITYSDK_OFFSET(0x13D36600)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_1B1F361718F73A20_OFFSET UNITYSDK_OFFSET(0x13D37940)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_240CE54A2093CC15_OFFSET UNITYSDK_OFFSET(0x13D37C70)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_4581E6F285FC1202_OFFSET UNITYSDK_OFFSET(0x13D37170)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_6BE33309F5C49CC7_OFFSET UNITYSDK_OFFSET(0x13D37450)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_6FCDE4DB27EDEA53_OFFSET UNITYSDK_OFFSET(0x13D37740)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_8E888ABCB71BA51F_OFFSET UNITYSDK_OFFSET(0x13D37AC0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_9A125A6C1830DF6E_OFFSET UNITYSDK_OFFSET(0x13D37FC0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_B66743395D9743AC_OFFSET UNITYSDK_OFFSET(0x13D37A10)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_BF49A14094DB94AB_OFFSET UNITYSDK_OFFSET(0x13D378F0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_CCAFBB327280DC21_OFFSET UNITYSDK_OFFSET(0x13D36F10)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_DA42B87A2F252530_OFFSET UNITYSDK_OFFSET(0x13D36890)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_DE2473C3425C1AAC_OFFSET UNITYSDK_OFFSET(0x13D37EA0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_E9F40A839A95DC1B_OFFSET UNITYSDK_OFFSET(0x13D366D0)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_F4835D1CBEED047B_OFFSET UNITYSDK_OFFSET(0x13D36E00)
#define CLASS_1_BE764BAB439B58AC_METHOD_1_F55DD84C7E4B28F2_OFFSET UNITYSDK_OFFSET(0x13D36C50)
#define CLASS_1_BE764BAB439B58AC_SET_DEBUGSTATE_OFFSET UNITYSDK_OFFSET(0x13D36610)
#define CLASS_1_BE764BAB439B58AC__CTOR_OFFSET UNITYSDK_OFFSET(0x13D36620)
#define CLASS_1_BE764BAB439B58AC___SHOWBATTLESUCCTOAST_B__30_0_OFFSET UNITYSDK_OFFSET(0x13D388B0)
#define CLASS_1_BE764BAB439B58AC___SHOWBOSSSUCCDIALOG_B__29_0_OFFSET UNITYSDK_OFFSET(0x13D38880)
#define CLASS_1_BE764BAB439B58AC___SHOWCATCHUPREWARDDIALOG_B__27_0_OFFSET UNITYSDK_OFFSET(0x13D38850)
#define CLASS_1_BE764BAB439B58AC___SHOWEQUIPORB_B__24_0_OFFSET UNITYSDK_OFFSET(0x13D38820)

inline static constexpr unsigned int Class_1_BE764BAB439B58AC_TypeDefinitionIndex = 70134;

class Class_1_BE764BAB439B58AC : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x5; // 0x0
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Field_1_1; // 0x10
	::RPG::Client::Promises::Promise* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_3; // 0x20
	::RPG::Client::Promises::Promise* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Field_1_5; // 0x30
	::RPG::Client::Promises::Promise* Field_1_6; // 0x38
	::RPG::Client::Promises::Promise* Field_1_7; // 0x40
	::System::UInt32 Field_1_8; // 0x48
	::System::UInt32 _DebugState_k__BackingField; // 0x4C
	::System::UInt32 Field_1_10; // 0x50
	::System::Boolean Field_1_11; // 0x54

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

	::System::Void Method_1_E9F40A839A95DC1B(::Class_1_BB4B99DE4C2501EC_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_5*))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_E9F40A839A95DC1B_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA42B87A2F252530(::Class_1_BB4B99DE4C2501EC_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_5*))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_DA42B87A2F252530_OFFSET))(this, a1);
	}

	::System::Void Method_1_F55DD84C7E4B28F2(::Class_1_BB4B99DE4C2501EC_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_5*))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_F55DD84C7E4B28F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4835D1CBEED047B(::Class_1_BB4B99DE4C2501EC_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_5*))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_F4835D1CBEED047B_OFFSET))(this, a1);
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

	::RPG::Client::Promises::IPromise* Method_1_8E888ABCB71BA51F()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_8E888ABCB71BA51F_OFFSET))(this);
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

	::RPG::Client::Promises::IPromise* Method_1_9A125A6C1830DF6E(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE764BAB439B58AC_METHOD_1_9A125A6C1830DF6E_OFFSET))(this, a1);
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
