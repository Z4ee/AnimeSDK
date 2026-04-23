#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1093;
class Class_1_4B24D105CCEA2C22;
class Class_1_A0F414D2CF643E56;
namespace RPG::Client::ActivityIdleLive { class PendingEquipData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_40526AF9C8E77A0E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12AC1140)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_0865E94460F11643_1_OFFSET UNITYSDK_OFFSET(0x12AC2400)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x12AC18F0)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x12AC1C80)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_3F348DF9DB1ACA5A_OFFSET UNITYSDK_OFFSET(0x12AC1A30)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12AC1090)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_472EBD1C5B8718BA_OFFSET UNITYSDK_OFFSET(0x12AC1CD0)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_48A487831183C387_OFFSET UNITYSDK_OFFSET(0x12AC1340)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_4A311791F860C4DA_OFFSET UNITYSDK_OFFSET(0x12AC1240)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_4A83280585CF476A_OFFSET UNITYSDK_OFFSET(0x12AC2670)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0x12AC2000)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_9C098719D7C455B6_OFFSET UNITYSDK_OFFSET(0x12AC24F0)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x12AC19E0)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_D3129FE8DF635B48_1_OFFSET UNITYSDK_OFFSET(0x12AC2120)
#define CLASS_1_40526AF9C8E77A0E_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x12AC1610)
#define CLASS_1_40526AF9C8E77A0E_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x12AC11D0)
#define CLASS_1_40526AF9C8E77A0E__CTOR_OFFSET UNITYSDK_OFFSET(0x12AC2930)
#define CLASS_1_40526AF9C8E77A0E__REQUESTKEEPOLDEQUIP_B__18_0_OFFSET UNITYSDK_OFFSET(0x12AC2A00)
#define CLASS_1_40526AF9C8E77A0E__REQUESTREPLACEOLDEQUIP_B__25_0_OFFSET UNITYSDK_OFFSET(0x12AC2B90)
#define CLASS_1_40526AF9C8E77A0E___DOKEEPOLDEQUIP_B__20_0_OFFSET UNITYSDK_OFFSET(0x12AC2A60)
#define CLASS_1_40526AF9C8E77A0E___REQUESTDISCARDNEWEQUIP_B__28_0_OFFSET UNITYSDK_OFFSET(0x12AC2BF0)

inline static constexpr unsigned int Class_1_40526AF9C8E77A0E_TypeDefinitionIndex = 69374;

class Class_1_40526AF9C8E77A0E : public ::System::Object
{
public:
	::Class_1_A0F414D2CF643E56* Field_1_6; // 0x10
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Field_1_4; // 0x18
	::Class_0_16E4307DCC419505_1093* Field_1_2; // 0x30
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Field_1_3; // 0x38
	::RPG::Client::ActivityIdleLive::PendingEquipData* Field_1_7; // 0x50
	::RPG::Client::Promises::Promise* Field_1_10; // 0x58
	::RPG::Client::ActivityIdleLive::PendingEquipData* Field_1_8; // 0x60
	::Class_1_4B24D105CCEA2C22* Field_1_11; // 0x68
	::Class_0_16E4307DCC419505_1093* Field_1_0; // 0x70
	::Class_0_16E4307DCC419505_1093* Field_1_1; // 0x78
	::RPG::Client::Promises::Promise_1<::RPG::Client::ActivityIdleLive::PendingEquipData*>* Field_1_9; // 0x80
	::System::Boolean Field_1_5; // 0x88
	::System::Boolean Field_1_13; // 0x89
	::System::Boolean Field_1_12; // 0x8A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_DISPOSE_OFFSET))(this);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_4A311791F860C4DA(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_4A311791F860C4DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Void Method_1_48A487831183C387(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_48A487831183C387_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D606E0EBD8E195C(::Class_1_A0F414D2CF643E56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0F414D2CF643E56*))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_4D606E0EBD8E195C_OFFSET))(this, a1);
	}

	::System::Void Method_1_472EBD1C5B8718BA(::Class_1_A0F414D2CF643E56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0F414D2CF643E56*))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_472EBD1C5B8718BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_D3129FE8DF635B48_1_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_0865E94460F11643_1_OFFSET))(this);
	}

	::System::Void Method_1_9C098719D7C455B6(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_9C098719D7C455B6_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::ActivityIdleLive::PendingEquipData*>* Method_1_3F348DF9DB1ACA5A(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ActivityIdleLive::PendingEquipData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_3F348DF9DB1ACA5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A83280585CF476A(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E_METHOD_1_4A83280585CF476A_OFFSET))(this, a1, a2);
	}

	::System::Void _RequestKeepOldEquip_b__18_0(::System::Boolean isOk)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E__REQUESTKEEPOLDEQUIP_B__18_0_OFFSET))(this, isOk);
	}

	::System::Void __DoKeepOldEquip_b__20_0(::RPG::Client::ActivityIdleLive::PendingEquipData* pendingEquip)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E___DOKEEPOLDEQUIP_B__20_0_OFFSET))(this, pendingEquip);
	}

	::System::Void _RequestReplaceOldEquip_b__25_0(::System::Boolean isOk)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E__REQUESTREPLACEOLDEQUIP_B__25_0_OFFSET))(this, isOk);
	}

	::System::Void __RequestDiscardNewEquip_b__28_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40526AF9C8E77A0E___REQUESTDISCARDNEWEQUIP_B__28_0_OFFSET))(this);
	}
};
