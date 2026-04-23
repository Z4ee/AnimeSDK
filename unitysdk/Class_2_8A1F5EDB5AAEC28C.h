#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"

class Class_1_40526AF9C8E77A0E;
class Class_1_4B24D105CCEA2C22;
class Class_1_A810E08D2BDEB9C4_2;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::ActivityIdleLive { class PendingEquipData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { class Object; }

#define CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_285337D3C1CF4702_OFFSET UNITYSDK_OFFSET(0x12488280)
#define CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_2BC55A66CB2B0118_1_OFFSET UNITYSDK_OFFSET(0x12488230)
#define CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x124881E0)
#define CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x124880B0)
#define CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_59646316BC2281C2_OFFSET UNITYSDK_OFFSET(0x12487E50)
#define CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_C445993D022B1BA1_OFFSET UNITYSDK_OFFSET(0x12488110)
#define CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_DE7035732E1EE275_OFFSET UNITYSDK_OFFSET(0x12487D50)
#define CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x12487BF0)
#define CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_FA656FDDBAF8003E_OFFSET UNITYSDK_OFFSET(0x12487A80)
#define CLASS_2_8A1F5EDB5AAEC28C_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x12488170)
#define CLASS_2_8A1F5EDB5AAEC28C__CTOR_OFFSET UNITYSDK_OFFSET(0x124879B0)
#define CLASS_2_8A1F5EDB5AAEC28C__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x124883D0)
#define CLASS_2_8A1F5EDB5AAEC28C__TRYFETCHEQUIPTOSELECT_B__8_0_OFFSET UNITYSDK_OFFSET(0x124884A0)
#define CLASS_2_8A1F5EDB5AAEC28C__TRYFETCHEQUIPTOSELECT_B__8_1_OFFSET UNITYSDK_OFFSET(0x124886B0)
#define CLASS_2_8A1F5EDB5AAEC28C___IFIXBASEPROXY__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x124887C0)
#define CLASS_2_8A1F5EDB5AAEC28C___REQUESTGETPENDINGEQUIP_B__14_0_OFFSET UNITYSDK_OFFSET(0x12488710)

inline static constexpr unsigned int Class_2_8A1F5EDB5AAEC28C_TypeDefinitionIndex = 69348;

class Class_2_8A1F5EDB5AAEC28C : public ::RPG::Client::BaseGameFlowContext
{
public:
	::Class_1_40526AF9C8E77A0E* Field_2_1; // 0x20
	::RPG::Client::Promises::Promise* Field_2_3; // 0x28
	::RPG::Client::Promises::Promise_1<::Class_1_A810E08D2BDEB9C4_2*>* Field_2_2; // 0x30
	::Class_1_4B24D105CCEA2C22* Field_2_0; // 0x38
	::System::Boolean Field_2_4; // 0x40

	::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_8A1F5EDB5AAEC28C* Method_2_FA656FDDBAF8003E(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::Class_2_8A1F5EDB5AAEC28C*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_FA656FDDBAF8003E_OFFSET))(a1);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_DE7035732E1EE275()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_DE7035732E1EE275_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_2_C445993D022B1BA1(::RPG::Client::ActivityIdleLive::PendingEquipData* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::PendingEquipData*))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_C445993D022B1BA1_OFFSET))(this, a1);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Void Method_2_2BC55A66CB2B0118_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_2BC55A66CB2B0118_1_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise_1<::Class_1_A810E08D2BDEB9C4_2*>* Method_2_59646316BC2281C2()
	{
		return ((::RPG::Client::Promises::Promise_1<::Class_1_A810E08D2BDEB9C4_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_59646316BC2281C2_OFFSET))(this);
	}

	::System::Void Method_2_285337D3C1CF4702(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C_METHOD_2_285337D3C1CF4702_OFFSET))(this, a1, a2);
	}

	::System::Void _OnDestroyed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C__ONDESTROYED_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _TryFetchEquipToSelect_b__8_0(::Class_1_A810E08D2BDEB9C4_2* rsp)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_A810E08D2BDEB9C4_2*))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C__TRYFETCHEQUIPTOSELECT_B__8_0_OFFSET))(this, rsp);
	}

	::System::Void _TryFetchEquipToSelect_b__8_1(::System::Exception* ex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C__TRYFETCHEQUIPTOSELECT_B__8_1_OFFSET))(this, ex);
	}

	::System::Void __RequestGetPendingEquip_b__14_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C___REQUESTGETPENDINGEQUIP_B__14_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDestroyed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A1F5EDB5AAEC28C___IFIXBASEPROXY__ONDESTROYED_OFFSET))(this);
	}
};
