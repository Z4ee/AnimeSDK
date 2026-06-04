#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1143;
class Class_1_4CFEF021C34E7902;
class Class_1_FD33BD99AA9127F3;
namespace RPG::Client::ActivityIdleLive { class PendingEquipData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_65F865B949733340_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1379E830)
#define CLASS_1_65F865B949733340_METHOD_1_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x1379F3F0)
#define CLASS_1_65F865B949733340_METHOD_1_3F348DF9DB1ACA5A_OFFSET UNITYSDK_OFFSET(0x1379F190)
#define CLASS_1_65F865B949733340_METHOD_1_48A487831183C387_OFFSET UNITYSDK_OFFSET(0x1379EA70)
#define CLASS_1_65F865B949733340_METHOD_1_4A311791F860C4DA_OFFSET UNITYSDK_OFFSET(0x1379E960)
#define CLASS_1_65F865B949733340_METHOD_1_4A83280585CF476A_OFFSET UNITYSDK_OFFSET(0x1379FE40)
#define CLASS_1_65F865B949733340_METHOD_1_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0x1379F770)
#define CLASS_1_65F865B949733340_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x1379F140)
#define CLASS_1_65F865B949733340_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1379E740)
#define CLASS_1_65F865B949733340_METHOD_1_998E02F9D6277E03_OFFSET UNITYSDK_OFFSET(0x1379F440)
#define CLASS_1_65F865B949733340_METHOD_1_B09E78EE7EE4F8FA_1_OFFSET UNITYSDK_OFFSET(0x1379FB80)
#define CLASS_1_65F865B949733340_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1379F020)
#define CLASS_1_65F865B949733340_METHOD_1_D3129FE8DF635B48_1_OFFSET UNITYSDK_OFFSET(0x1379F890)
#define CLASS_1_65F865B949733340_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1379ED30)
#define CLASS_1_65F865B949733340_METHOD_1_F6B87239D7DDC69F_OFFSET UNITYSDK_OFFSET(0x1379FCA0)
#define CLASS_1_65F865B949733340_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1379E8F0)
#define CLASS_1_65F865B949733340__CTOR_OFFSET UNITYSDK_OFFSET(0x137A00E0)
#define CLASS_1_65F865B949733340__REQUESTKEEPOLDEQUIP_B__18_0_OFFSET UNITYSDK_OFFSET(0x137A01B0)
#define CLASS_1_65F865B949733340__REQUESTREPLACEOLDEQUIP_B__25_0_OFFSET UNITYSDK_OFFSET(0x137A0360)
#define CLASS_1_65F865B949733340___DOKEEPOLDEQUIP_B__20_0_OFFSET UNITYSDK_OFFSET(0x137A0210)
#define CLASS_1_65F865B949733340___REQUESTDISCARDNEWEQUIP_B__28_0_OFFSET UNITYSDK_OFFSET(0x137A03C0)

inline static constexpr unsigned int Class_1_65F865B949733340_TypeDefinitionIndex = 70186;

class Class_1_65F865B949733340 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1143* Field_1_0; // 0x10
	::RPG::Client::ActivityIdleLive::PendingEquipData* Field_1_1; // 0x18
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Field_1_2; // 0x20
	::RPG::Client::Promises::Promise_1<::RPG::Client::ActivityIdleLive::PendingEquipData*>* Field_1_3; // 0x38
	::Class_1_4CFEF021C34E7902* Field_1_4; // 0x40
	::Class_0_16E4307DCC419505_1143* Field_1_5; // 0x48
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Field_1_6; // 0x50
	::RPG::Client::Promises::Promise* Field_1_7; // 0x68
	::RPG::Client::ActivityIdleLive::PendingEquipData* Field_1_8; // 0x70
	::Class_0_16E4307DCC419505_1143* Field_1_9; // 0x78
	::Class_1_FD33BD99AA9127F3* Field_1_10; // 0x80
	::System::Boolean Field_1_11; // 0x88
	::System::Boolean Field_1_12; // 0x89
	::System::Boolean Field_1_13; // 0x8A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_DISPOSE_OFFSET))(this);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_4A311791F860C4DA(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_4A311791F860C4DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Void Method_1_48A487831183C387(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_48A487831183C387_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D606E0EBD8E195C(::Class_1_FD33BD99AA9127F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD33BD99AA9127F3*))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_4D606E0EBD8E195C_OFFSET))(this, a1);
	}

	::System::Void Method_1_998E02F9D6277E03(::Class_1_FD33BD99AA9127F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD33BD99AA9127F3*))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_998E02F9D6277E03_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_D3129FE8DF635B48_1_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_B09E78EE7EE4F8FA_1_OFFSET))(this);
	}

	::System::Void Method_1_F6B87239D7DDC69F(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_F6B87239D7DDC69F_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::ActivityIdleLive::PendingEquipData*>* Method_1_3F348DF9DB1ACA5A(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ActivityIdleLive::PendingEquipData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_3F348DF9DB1ACA5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4A83280585CF476A(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_4A83280585CF476A_OFFSET))(this, a1, a2);
	}

	::System::Void _RequestKeepOldEquip_b__18_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340__REQUESTKEEPOLDEQUIP_B__18_0_OFFSET))(this, a1);
	}

	::System::Void __DoKeepOldEquip_b__20_0(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340___DOKEEPOLDEQUIP_B__20_0_OFFSET))(this, a1);
	}

	::System::Void _RequestReplaceOldEquip_b__25_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340__REQUESTREPLACEOLDEQUIP_B__25_0_OFFSET))(this, a1);
	}

	::System::Void __RequestDiscardNewEquip_b__28_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340___REQUESTDISCARDNEWEQUIP_B__28_0_OFFSET))(this);
	}
};
