#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1249;
class Class_1_4CFEF021C34E7902;
class Class_1_A0F414D2CF643E56_4;
namespace RPG::Client::ActivityIdleLive { class PendingEquipData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_65F865B949733340_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A80B3C0)
#define CLASS_1_65F865B949733340_METHOD_1_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x1A80C040)
#define CLASS_1_65F865B949733340_METHOD_1_45F0369A056A5CE7_OFFSET UNITYSDK_OFFSET(0x1A80C090)
#define CLASS_1_65F865B949733340_METHOD_1_48A487831183C387_OFFSET UNITYSDK_OFFSET(0x1A80B600)
#define CLASS_1_65F865B949733340_METHOD_1_4A311791F860C4DA_OFFSET UNITYSDK_OFFSET(0x1A80B4F0)
#define CLASS_1_65F865B949733340_METHOD_1_4A83280585CF476A_OFFSET UNITYSDK_OFFSET(0x1A80CA10)
#define CLASS_1_65F865B949733340_METHOD_1_4ACBF2CD52C843B7_OFFSET UNITYSDK_OFFSET(0x1A80BD80)
#define CLASS_1_65F865B949733340_METHOD_1_4D606E0EBD8E195C_OFFSET UNITYSDK_OFFSET(0x1A80C2E0)
#define CLASS_1_65F865B949733340_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x1A80BD30)
#define CLASS_1_65F865B949733340_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1A80B2D0)
#define CLASS_1_65F865B949733340_METHOD_1_B09E78EE7EE4F8FA_1_OFFSET UNITYSDK_OFFSET(0x1A80C6F0)
#define CLASS_1_65F865B949733340_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1A80BC10)
#define CLASS_1_65F865B949733340_METHOD_1_D3129FE8DF635B48_1_OFFSET UNITYSDK_OFFSET(0x1A80C400)
#define CLASS_1_65F865B949733340_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1A80B920)
#define CLASS_1_65F865B949733340_METHOD_1_F6B87239D7DDC69F_OFFSET UNITYSDK_OFFSET(0x1A80C810)
#define CLASS_1_65F865B949733340_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A80B480)
#define CLASS_1_65F865B949733340__CTOR_OFFSET UNITYSDK_OFFSET(0x1A80CD10)
#define CLASS_1_65F865B949733340__REQUESTKEEPOLDEQUIP_B__18_0_OFFSET UNITYSDK_OFFSET(0x1A80CDE0)
#define CLASS_1_65F865B949733340__REQUESTREPLACEOLDEQUIP_B__25_0_OFFSET UNITYSDK_OFFSET(0x1A80CFF0)
#define CLASS_1_65F865B949733340___DOKEEPOLDEQUIP_B__20_0_OFFSET UNITYSDK_OFFSET(0x1A80CE40)
#define CLASS_1_65F865B949733340___REQUESTDISCARDNEWEQUIP_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A80D050)

inline static constexpr unsigned int Class_1_65F865B949733340_TypeDefinitionIndex = 75015;

class Class_1_65F865B949733340 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1249* COOFMBLDBHM; // 0x10
	::RPG::Client::Promises::Promise_1<::RPG::Client::ActivityIdleLive::PendingEquipData*>* KLGMDEBCFIL; // 0x18
	::Class_1_A0F414D2CF643E56_4* CAAKPOLLAHI; // 0x20
	::RPG::Client::ActivityIdleLive::PendingEquipData* BCOOHEGFGJA; // 0x28
	::Class_1_4CFEF021C34E7902* HEMMHLHDGBO; // 0x30
	::RPG::Client::ActivityIdleLive::PendingEquipData* MOOMGCPHJNJ; // 0x38
	::Class_0_16E4307DCC419505_1249* DLDIPJMHJJJ; // 0x40
	::RPG::Client::Promises::Promise* FNDDOLJANFF; // 0x48
	::Class_0_16E4307DCC419505_1249* JLEFHBGCHCE; // 0x50
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal OMMLIKIKGDF; // 0x58
	::RPG::Client::ActivityIdleLive::IdleLiveDecimal MLPODLMJAHB; // 0x70
	::System::Boolean KDHHECNDEAI; // 0x88
	::System::Boolean LKPOADAAPIN; // 0x89
	::System::Boolean LAJOMDINKMO; // 0x8A

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

	::System::Void Method_1_4D606E0EBD8E195C(::Class_1_A0F414D2CF643E56_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0F414D2CF643E56_4*))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_4D606E0EBD8E195C_OFFSET))(this, a1);
	}

	::System::Void Method_1_45F0369A056A5CE7(::Class_1_A0F414D2CF643E56_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0F414D2CF643E56_4*))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_45F0369A056A5CE7_OFFSET))(this, a1);
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

	::RPG::Client::Promises::IPromise_1<::RPG::Client::ActivityIdleLive::PendingEquipData*>* Method_1_4ACBF2CD52C843B7(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ActivityIdleLive::PendingEquipData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_65F865B949733340_METHOD_1_4ACBF2CD52C843B7_OFFSET))(this, a1);
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
