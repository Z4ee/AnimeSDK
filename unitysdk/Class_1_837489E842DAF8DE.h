#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipSelectUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
class Class_1_A0F414D2CF643E56;
namespace RPG::Client { class UIController; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_837489E842DAF8DE_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x95EC930)
#define CLASS_1_837489E842DAF8DE_METHOD_1_621851E018876B4E_OFFSET UNITYSDK_OFFSET(0x95EBDC0)
#define CLASS_1_837489E842DAF8DE_METHOD_1_7586C4E80C71E4F1_1_OFFSET UNITYSDK_OFFSET(0x95EC7B0)
#define CLASS_1_837489E842DAF8DE_METHOD_1_7586C4E80C71E4F1_OFFSET UNITYSDK_OFFSET(0x95EC630)
#define CLASS_1_837489E842DAF8DE_METHOD_1_7587292F058BC3BD_OFFSET UNITYSDK_OFFSET(0x95EC570)
#define CLASS_1_837489E842DAF8DE_METHOD_1_7AFB82D82238EB17_OFFSET UNITYSDK_OFFSET(0x95EB8E0)
#define CLASS_1_837489E842DAF8DE__CTOR_OFFSET UNITYSDK_OFFSET(0x95ECA10)
#define CLASS_1_837489E842DAF8DE___TRYEXITEQUIPGOTDIALOG_B__7_0_OFFSET UNITYSDK_OFFSET(0x95ECA20)
#define CLASS_1_837489E842DAF8DE___TRYEXITEQUIPSELECTDIALOG_B__8_0_OFFSET UNITYSDK_OFFSET(0x95ECA50)

inline static constexpr unsigned int Class_1_837489E842DAF8DE_TypeDefinitionIndex = 69290;

class Class_1_837489E842DAF8DE : public ::System::Object
{
public:
	::RPG::Client::UIController* Field_1_1; // 0x10
	::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* Field_1_2; // 0x18
	::RPG::Client::UIController* Field_1_0; // 0x20
	::RPG::Client::Promises::Promise* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_837489E842DAF8DE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7AFB82D82238EB17(::Class_1_A0F414D2CF643E56* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a4, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0F414D2CF643E56*, ::System::UInt32, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + CLASS_1_837489E842DAF8DE_METHOD_1_7AFB82D82238EB17_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::ActivityIdleLive::EquipSelectUiData Method_1_621851E018876B4E(::Class_0_16E4307DCC419505_617* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a4, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a5)
	{
		return ((::RPG::Client::ActivityIdleLive::EquipSelectUiData(*)(::PVOID, ::Class_0_16E4307DCC419505_617*, ::System::UInt32, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + CLASS_1_837489E842DAF8DE_METHOD_1_621851E018876B4E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::Promises::IPromise* Method_1_7587292F058BC3BD(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_837489E842DAF8DE_METHOD_1_7587292F058BC3BD_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_7586C4E80C71E4F1(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_837489E842DAF8DE_METHOD_1_7586C4E80C71E4F1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_7586C4E80C71E4F1_1(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_837489E842DAF8DE_METHOD_1_7586C4E80C71E4F1_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_837489E842DAF8DE_METHOD_1_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void __TryExitEquipGotDialog_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_837489E842DAF8DE___TRYEXITEQUIPGOTDIALOG_B__7_0_OFFSET))(this);
	}

	::System::Void __TryExitEquipSelectDialog_b__8_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_837489E842DAF8DE___TRYEXITEQUIPSELECTDIALOG_B__8_0_OFFSET))(this);
	}
};
