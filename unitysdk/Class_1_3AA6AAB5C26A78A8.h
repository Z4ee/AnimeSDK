#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipSelectUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
class Class_1_A0F414D2CF643E56;
namespace RPG::Client { class UIController; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3AA6AAB5C26A78A8_METHOD_1_2A1AF75775404B26_OFFSET UNITYSDK_OFFSET(0xB79B060)
#define CLASS_1_3AA6AAB5C26A78A8_METHOD_1_7586C4E80C71E4F1_OFFSET UNITYSDK_OFFSET(0xB79B0C0)
#define CLASS_1_3AA6AAB5C26A78A8_METHOD_1_7AFB82D82238EB17_OFFSET UNITYSDK_OFFSET(0xB799C60)
#define CLASS_1_3AA6AAB5C26A78A8_METHOD_1_8C09240D7B272DF9_OFFSET UNITYSDK_OFFSET(0xB79A4D0)
#define CLASS_1_3AA6AAB5C26A78A8_METHOD_1_D45D133A1AABAB22_OFFSET UNITYSDK_OFFSET(0xB79AB20)
#define CLASS_1_3AA6AAB5C26A78A8_METHOD_1_FF05AC0AB0D75A04_OFFSET UNITYSDK_OFFSET(0xB79B240)
#define CLASS_1_3AA6AAB5C26A78A8__CTOR_OFFSET UNITYSDK_OFFSET(0xB79B390)
#define CLASS_1_3AA6AAB5C26A78A8___TRYEXITEQUIPGOTDIALOG_B__7_0_OFFSET UNITYSDK_OFFSET(0xB79B3A0)

inline static constexpr unsigned int Class_1_3AA6AAB5C26A78A8_TypeDefinitionIndex = 69291;

class Class_1_3AA6AAB5C26A78A8 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* Field_1_2; // 0x10
	::RPG::Client::ActivityIdleLive::SpecialEquip* Field_1_1; // 0x18
	::RPG::Client::UIController* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AA6AAB5C26A78A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7AFB82D82238EB17(::Class_1_A0F414D2CF643E56* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a4, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0F414D2CF643E56*, ::System::UInt32, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + CLASS_1_3AA6AAB5C26A78A8_METHOD_1_7AFB82D82238EB17_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::ActivityIdleLive::EquipSelectUiData Method_1_8C09240D7B272DF9(::Class_0_16E4307DCC419505_617* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a4, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a5)
	{
		return ((::RPG::Client::ActivityIdleLive::EquipSelectUiData(*)(::PVOID, ::Class_0_16E4307DCC419505_617*, ::System::UInt32, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + CLASS_1_3AA6AAB5C26A78A8_METHOD_1_8C09240D7B272DF9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_D45D133A1AABAB22(::RPG::Client::ActivityIdleLive::SpecialEquip* a1, ::RPG::Client::ActivityIdleLive::SpecialEquip* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_3AA6AAB5C26A78A8_METHOD_1_D45D133A1AABAB22_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_2A1AF75775404B26(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3AA6AAB5C26A78A8_METHOD_1_2A1AF75775404B26_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_7586C4E80C71E4F1(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3AA6AAB5C26A78A8_METHOD_1_7586C4E80C71E4F1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FF05AC0AB0D75A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AA6AAB5C26A78A8_METHOD_1_FF05AC0AB0D75A04_OFFSET))(this);
	}

	::System::Void __TryExitEquipGotDialog_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AA6AAB5C26A78A8___TRYEXITEQUIPGOTDIALOG_B__7_0_OFFSET))(this);
	}
};
