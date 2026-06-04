#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipSelectUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_640;
class Class_1_FD33BD99AA9127F3;
namespace RPG::Client { class UIController; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_972966B706F13319_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x13FF57D0)
#define CLASS_1_972966B706F13319_METHOD_1_7586C4E80C71E4F1_1_OFFSET UNITYSDK_OFFSET(0x13FF5640)
#define CLASS_1_972966B706F13319_METHOD_1_7586C4E80C71E4F1_OFFSET UNITYSDK_OFFSET(0x13FF54B0)
#define CLASS_1_972966B706F13319_METHOD_1_7587292F058BC3BD_OFFSET UNITYSDK_OFFSET(0x13FF53F0)
#define CLASS_1_972966B706F13319_METHOD_1_7AFB82D82238EB17_OFFSET UNITYSDK_OFFSET(0x13FF4720)
#define CLASS_1_972966B706F13319_METHOD_1_C19C3AF236B6D4D8_OFFSET UNITYSDK_OFFSET(0x13FF4BD0)
#define CLASS_1_972966B706F13319__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF58B0)
#define CLASS_1_972966B706F13319___TRYEXITEQUIPGOTDIALOG_B__7_0_OFFSET UNITYSDK_OFFSET(0x13FF58C0)
#define CLASS_1_972966B706F13319___TRYEXITEQUIPSELECTDIALOG_B__8_0_OFFSET UNITYSDK_OFFSET(0x13FF58F0)

inline static constexpr unsigned int Class_1_972966B706F13319_TypeDefinitionIndex = 70102;

class Class_1_972966B706F13319 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* Field_1_0; // 0x10
	::RPG::Client::UIController* Field_1_1; // 0x18
	::RPG::Client::UIController* Field_1_2; // 0x20
	::RPG::Client::Promises::Promise* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_972966B706F13319__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7AFB82D82238EB17(::Class_1_FD33BD99AA9127F3* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a4, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD33BD99AA9127F3*, ::System::UInt32, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + CLASS_1_972966B706F13319_METHOD_1_7AFB82D82238EB17_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::ActivityIdleLive::EquipSelectUiData Method_1_C19C3AF236B6D4D8(::Class_0_16E4307DCC419505_640* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a4, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a5)
	{
		return ((::RPG::Client::ActivityIdleLive::EquipSelectUiData(*)(::PVOID, ::Class_0_16E4307DCC419505_640*, ::System::UInt32, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + CLASS_1_972966B706F13319_METHOD_1_C19C3AF236B6D4D8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::Client::Promises::IPromise* Method_1_7587292F058BC3BD(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_972966B706F13319_METHOD_1_7587292F058BC3BD_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_7586C4E80C71E4F1(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_972966B706F13319_METHOD_1_7586C4E80C71E4F1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_7586C4E80C71E4F1_1(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_972966B706F13319_METHOD_1_7586C4E80C71E4F1_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_972966B706F13319_METHOD_1_4A41C63BFE58D26F_OFFSET))(this);
	}

	::System::Void __TryExitEquipGotDialog_b__7_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_972966B706F13319___TRYEXITEQUIPGOTDIALOG_B__7_0_OFFSET))(this);
	}

	::System::Void __TryExitEquipSelectDialog_b__8_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_972966B706F13319___TRYEXITEQUIPSELECTDIALOG_B__8_0_OFFSET))(this);
	}
};
