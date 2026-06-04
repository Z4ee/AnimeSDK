#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ScreenTransferActionState.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"

class Class_0_16E4307DCC419505_406;
class Class_1_23F67DD15593C8D6;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayFullScreenTransfer; }
namespace RPG::GameCore { class ScreenTransferBaseAction; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FF5B251C0F03CC8B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB01D060)
#define CLASS_2_FF5B251C0F03CC8B_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB01D290)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB01E550)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_27EC2C099D14356D_OFFSET UNITYSDK_OFFSET(0xB01FCF0)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_32D4A70A38448E14_OFFSET UNITYSDK_OFFSET(0xB01DC20)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_36E52709A7D46AC2_OFFSET UNITYSDK_OFFSET(0xB01FA00)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_5C0C256643E989F8_OFFSET UNITYSDK_OFFSET(0xB01CC20)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0xB01EDF0)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0xB01F170)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_70F996834AEFED46_OFFSET UNITYSDK_OFFSET(0xB01E930)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_7E1BADD1D133FA1C_1_OFFSET UNITYSDK_OFFSET(0xB01D0B0)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0xB01CEF0)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_7FD7D34994C88765_OFFSET UNITYSDK_OFFSET(0xB01CCA0)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_AD4C034BC86ADE53_OFFSET UNITYSDK_OFFSET(0xB01F540)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_B7E6ED31D1624EEC_OFFSET UNITYSDK_OFFSET(0xB01DA60)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_D2DB41A02B318F87_OFFSET UNITYSDK_OFFSET(0xB01EEB0)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_D34432C0B65E6441_OFFSET UNITYSDK_OFFSET(0xB01DD50)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_D5387FAF23786253_OFFSET UNITYSDK_OFFSET(0xB01E5E0)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_DCC0CC5DBC127BF8_OFFSET UNITYSDK_OFFSET(0xB01D9B0)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_EB522918F22FFA3B_OFFSET UNITYSDK_OFFSET(0xB01CE20)
#define CLASS_2_FF5B251C0F03CC8B_METHOD_2_EE07004C8154E49B_OFFSET UNITYSDK_OFFSET(0xB01F870)
#define CLASS_2_FF5B251C0F03CC8B_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB01DDB0)
#define CLASS_2_FF5B251C0F03CC8B_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB01D2A0)
#define CLASS_2_FF5B251C0F03CC8B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB01E090)
#define CLASS_2_FF5B251C0F03CC8B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB01D230)
#define CLASS_2_FF5B251C0F03CC8B_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xB01E040)
#define CLASS_2_FF5B251C0F03CC8B_TICK_OFFSET UNITYSDK_OFFSET(0xB01DFB0)
#define CLASS_2_FF5B251C0F03CC8B__CTOR_OFFSET UNITYSDK_OFFSET(0xB01CB70)
#define CLASS_2_FF5B251C0F03CC8B__ONTASKBEGIN_B__11_0_OFFSET UNITYSDK_OFFSET(0xB01FE30)
#define CLASS_2_FF5B251C0F03CC8B___ONSCREENTRANSFERTEXTEND_B__15_0_OFFSET UNITYSDK_OFFSET(0xB01FFA0)
#define CLASS_2_FF5B251C0F03CC8B___PROMISEKEEPTIMEOUT_B__19_0_OFFSET UNITYSDK_OFFSET(0xB020000)

inline static constexpr unsigned int Class_2_FF5B251C0F03CC8B_TypeDefinitionIndex = 54461;

class Class_2_FF5B251C0F03CC8B : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::Client::Promises::Promise* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_406*>* Field_2_2; // 0x20
	::Class_1_23F67DD15593C8D6* Field_2_3; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x30
	::RPG::Client::Promises::Promise* Field_2_5; // 0x38
	::System::Exception* Field_2_6; // 0x40
	::RPG::Client::Promises::Promise* Field_2_7; // 0x48
	::RPG::GameCore::TaskContext* Field_2_8; // 0x50
	::RPG::Client::Promises::Promise* Field_2_9; // 0x58
	::RPG::GameCore::PlayFullScreenTransfer* Field_2_10; // 0x60
	::RPG::Client::Promises::Promise* Field_2_11; // 0x68
	::System::Int32 Field_2_12; // 0x70
	::System::UInt32 Field_2_13; // 0x74
	::RPG::GameCore::ScreenTransferReason Field_2_14; // 0x78
	::System::Boolean Field_2_15; // 0x7C
	::System::Boolean Field_2_16; // 0x7D
	::System::Boolean Field_2_17; // 0x7E
	::RPG::GameCore::ScreenTransferActionState Field_2_18; // 0x80

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayFullScreenTransfer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayFullScreenTransfer*))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7FD7D34994C88765()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_7FD7D34994C88765_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::System::Void Method_2_7E1BADD1D133FA1C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_7E1BADD1D133FA1C_1_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::ScreenTransferReason Method_2_5C0C256643E989F8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::ScreenTransferReason(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_5C0C256643E989F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2DB41A02B318F87(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_D2DB41A02B318F87_OFFSET))(this, a1);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_D5387FAF23786253()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_D5387FAF23786253_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_AD4C034BC86ADE53()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_AD4C034BC86ADE53_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_B7E6ED31D1624EEC()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_B7E6ED31D1624EEC_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_32D4A70A38448E14()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_32D4A70A38448E14_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_DCC0CC5DBC127BF8()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_DCC0CC5DBC127BF8_OFFSET))(this);
	}

	::System::Boolean Method_2_EE07004C8154E49B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_EE07004C8154E49B_OFFSET))(this);
	}

	::System::Void Method_2_70F996834AEFED46(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_70F996834AEFED46_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_406* Method_2_36E52709A7D46AC2(::RPG::GameCore::ScreenTransferBaseAction* a1)
	{
		return ((::Class_0_16E4307DCC419505_406*(*)(::PVOID, ::RPG::GameCore::ScreenTransferBaseAction*))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_36E52709A7D46AC2_OFFSET))(this, a1);
	}

	::System::Void Method_2_EB522918F22FFA3B(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_EB522918F22FFA3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D34432C0B65E6441(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_D34432C0B65E6441_OFFSET))(this, a1);
	}

	::System::Void Method_2_27EC2C099D14356D(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B_METHOD_2_27EC2C099D14356D_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* _OnTaskBegin_b__11_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B__ONTASKBEGIN_B__11_0_OFFSET))(this);
	}

	::System::Void __OnScreenTransferTextEnd_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B___ONSCREENTRANSFERTEXTEND_B__15_0_OFFSET))(this);
	}

	::System::Void __PromiseKeepTimeout_b__19_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF5B251C0F03CC8B___PROMISEKEEPTIMEOUT_B__19_0_OFFSET))(this);
	}
};
