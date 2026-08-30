#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"

class Class_1_4CFEF021C34E7902;
class Class_1_65F865B949733340;
class Class_1_B87B938F2BCBD84D_3;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::ActivityIdleLive { class PendingEquipData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { class Object; }

#define CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_285337D3C1CF4702_OFFSET UNITYSDK_OFFSET(0x15806870)
#define CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_2BC55A66CB2B0118_1_OFFSET UNITYSDK_OFFSET(0x15806820)
#define CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x158067D0)
#define CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x158066A0)
#define CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_87ABDF76B9D06C76_OFFSET UNITYSDK_OFFSET(0x15806450)
#define CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_C445993D022B1BA1_OFFSET UNITYSDK_OFFSET(0x15806700)
#define CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_DE7035732E1EE275_OFFSET UNITYSDK_OFFSET(0x15806340)
#define CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x158061B0)
#define CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_FA656FDDBAF8003E_OFFSET UNITYSDK_OFFSET(0x15806040)
#define CLASS_2_E0EE55EDF5B4AB6C_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x15806760)
#define CLASS_2_E0EE55EDF5B4AB6C__CTOR_OFFSET UNITYSDK_OFFSET(0x15805F70)
#define CLASS_2_E0EE55EDF5B4AB6C__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x158069C0)
#define CLASS_2_E0EE55EDF5B4AB6C__TRYFETCHEQUIPTOSELECT_B__8_0_OFFSET UNITYSDK_OFFSET(0x15806AB0)
#define CLASS_2_E0EE55EDF5B4AB6C__TRYFETCHEQUIPTOSELECT_B__8_1_OFFSET UNITYSDK_OFFSET(0x15806D00)
#define CLASS_2_E0EE55EDF5B4AB6C___REQUESTGETPENDINGEQUIP_B__14_0_OFFSET UNITYSDK_OFFSET(0x15806D60)

inline static constexpr unsigned int Class_2_E0EE55EDF5B4AB6C_TypeDefinitionIndex = 74990;

class Class_2_E0EE55EDF5B4AB6C : public ::RPG::Client::BaseGameFlowContext
{
public:
	::Class_1_65F865B949733340* EPAAHFFBKFG; // 0x20
	::Class_1_4CFEF021C34E7902* HEMMHLHDGBO; // 0x28
	::RPG::Client::Promises::Promise* BBEFPKDHLBK; // 0x30
	::RPG::Client::Promises::Promise_1<::Class_1_B87B938F2BCBD84D_3*>* EHDMEHABELJ; // 0x38
	::System::Boolean DMIHAJMPOOG; // 0x40

	::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_E0EE55EDF5B4AB6C* Method_2_FA656FDDBAF8003E(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::Class_2_E0EE55EDF5B4AB6C*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_FA656FDDBAF8003E_OFFSET))(a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_DE7035732E1EE275()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_DE7035732E1EE275_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_C445993D022B1BA1(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_C445993D022B1BA1_OFFSET))(this, a1);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Void Method_2_2BC55A66CB2B0118_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_2BC55A66CB2B0118_1_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise_1<::Class_1_B87B938F2BCBD84D_3*>* Method_2_87ABDF76B9D06C76()
	{
		return ((::RPG::Client::Promises::Promise_1<::Class_1_B87B938F2BCBD84D_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_87ABDF76B9D06C76_OFFSET))(this);
	}

	::System::Void Method_2_285337D3C1CF4702(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C_METHOD_2_285337D3C1CF4702_OFFSET))(this, a1, a2);
	}

	::System::Void _OnDestroyed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C__ONDESTROYED_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _TryFetchEquipToSelect_b__8_0(::Class_1_B87B938F2BCBD84D_3* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_B87B938F2BCBD84D_3*))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C__TRYFETCHEQUIPTOSELECT_B__8_0_OFFSET))(this, a1);
	}

	::System::Void _TryFetchEquipToSelect_b__8_1(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C__TRYFETCHEQUIPTOSELECT_B__8_1_OFFSET))(this, a1);
	}

	::System::Void __RequestGetPendingEquip_b__14_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0EE55EDF5B4AB6C___REQUESTGETPENDINGEQUIP_B__14_0_OFFSET))(this);
	}
};
