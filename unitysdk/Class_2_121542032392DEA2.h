#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"

class Class_1_23F67DD15593C8D6;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_121542032392DEA2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B40C20)
#define CLASS_2_121542032392DEA2_METHOD_2_124784A23C76D006_OFFSET UNITYSDK_OFFSET(0x11B42050)
#define CLASS_2_121542032392DEA2_METHOD_2_125EBF3466E4530A_OFFSET UNITYSDK_OFFSET(0x11B42380)
#define CLASS_2_121542032392DEA2_METHOD_2_27EC2C099D14356D_OFFSET UNITYSDK_OFFSET(0x11B41D60)
#define CLASS_2_121542032392DEA2_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x11B40CD0)
#define CLASS_2_121542032392DEA2_METHOD_2_4919B89B94C0D6A5_OFFSET UNITYSDK_OFFSET(0x11B421A0)
#define CLASS_2_121542032392DEA2_METHOD_2_5C0C256643E989F8_OFFSET UNITYSDK_OFFSET(0x11B40BA0)
#define CLASS_2_121542032392DEA2_METHOD_2_5D8835C71D12CDE3_OFFSET UNITYSDK_OFFSET(0x11B41EC0)
#define CLASS_2_121542032392DEA2_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x11B41550)
#define CLASS_2_121542032392DEA2_METHOD_2_9C45022812211693_OFFSET UNITYSDK_OFFSET(0x11B419A0)
#define CLASS_2_121542032392DEA2_METHOD_2_B814C01CE22BB331_OFFSET UNITYSDK_OFFSET(0x11B41A70)
#define CLASS_2_121542032392DEA2_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x11B41BD0)
#define CLASS_2_121542032392DEA2_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x11B41380)
#define CLASS_2_121542032392DEA2_METHOD_2_D34432C0B65E6441_OFFSET UNITYSDK_OFFSET(0x11B41B70)
#define CLASS_2_121542032392DEA2_METHOD_2_EB522918F22FFA3B_OFFSET UNITYSDK_OFFSET(0x11B41C90)
#define CLASS_2_121542032392DEA2_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x11B41A10)
#define CLASS_2_121542032392DEA2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B40DA0)
#define CLASS_2_121542032392DEA2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11B418A0)
#define CLASS_2_121542032392DEA2_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x11B40D50)
#define CLASS_2_121542032392DEA2_TICK_OFFSET UNITYSDK_OFFSET(0x11B418F0)
#define CLASS_2_121542032392DEA2__CTOR_OFFSET UNITYSDK_OFFSET(0x11B40A10)
#define CLASS_2_121542032392DEA2___PROMISEFULLKEEPTIMEOUT_B__19_0_OFFSET UNITYSDK_OFFSET(0x11B425A0)
#define CLASS_2_121542032392DEA2___STARTFULLWITHTEXT_B__14_0_OFFSET UNITYSDK_OFFSET(0x11B42440)

inline static constexpr unsigned int Class_2_121542032392DEA2_TypeDefinitionIndex = 53751;

class Class_2_121542032392DEA2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	::RPG::Client::Promises::Promise* Field_2_10; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::RPG::Client::Promises::Promise* Field_2_9; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x30
	::RPG::GameCore::PlayScreenTransfer* Field_2_0; // 0x38
	::RPG::Client::Promises::Promise* Field_2_11; // 0x40
	::RPG::Client::Promises::Promise* Field_2_8; // 0x48
	::Class_1_23F67DD15593C8D6* Field_2_7; // 0x50
	::System::Exception* Field_2_5; // 0x58
	::RPG::GameCore::ScreenTransferReason Field_2_12; // 0x60
	::System::Boolean Field_2_3; // 0x64
	::System::Boolean Field_2_6; // 0x65

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayScreenTransfer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayScreenTransfer*))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_TICK_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::ScreenTransferReason Method_2_5C0C256643E989F8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::ScreenTransferReason(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_5C0C256643E989F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_B814C01CE22BB331(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_B814C01CE22BB331_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_2_EB522918F22FFA3B(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_EB522918F22FFA3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D34432C0B65E6441(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_D34432C0B65E6441_OFFSET))(this, a1);
	}

	::System::Void Method_2_27EC2C099D14356D(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_27EC2C099D14356D_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_9C45022812211693(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_9C45022812211693_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_2B66C008535F8B01_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_5D8835C71D12CDE3()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_5D8835C71D12CDE3_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_124784A23C76D006()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_124784A23C76D006_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_4919B89B94C0D6A5()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_4919B89B94C0D6A5_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_125EBF3466E4530A()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2_METHOD_2_125EBF3466E4530A_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __StartFullWithText_b__14_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2___STARTFULLWITHTEXT_B__14_0_OFFSET))(this);
	}

	::System::Void __PromiseFullKeepTimeout_b__19_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_121542032392DEA2___PROMISEFULLKEEPTIMEOUT_B__19_0_OFFSET))(this);
	}
};
