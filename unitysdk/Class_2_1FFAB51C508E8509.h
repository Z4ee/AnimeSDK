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

#define CLASS_2_1FFAB51C508E8509_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F3EB90)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_0742B6775750851D_OFFSET UNITYSDK_OFFSET(0x16F40090)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_125EBF3466E4530A_OFFSET UNITYSDK_OFFSET(0x16F40510)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_261C2B64774FC8E4_OFFSET UNITYSDK_OFFSET(0x16F3FEE0)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x16F3EC80)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_4919B89B94C0D6A5_OFFSET UNITYSDK_OFFSET(0x16F40320)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_5C0C256643E989F8_OFFSET UNITYSDK_OFFSET(0x16F3EB10)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_5FE08FC6FFC33008_OFFSET UNITYSDK_OFFSET(0x16F3FBD0)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x16F3FD30)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_9C45022812211693_OFFSET UNITYSDK_OFFSET(0x16F3FB00)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_C0E1A11BAA953771_OFFSET UNITYSDK_OFFSET(0x16F40200)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x16F3F610)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_D34432C0B65E6441_OFFSET UNITYSDK_OFFSET(0x16F3FCD0)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x16F3F3E0)
#define CLASS_2_1FFAB51C508E8509_METHOD_2_EB522918F22FFA3B_OFFSET UNITYSDK_OFFSET(0x16F3FE10)
#define CLASS_2_1FFAB51C508E8509_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x16F3FB70)
#define CLASS_2_1FFAB51C508E8509_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F3ED50)
#define CLASS_2_1FFAB51C508E8509_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16F3FA00)
#define CLASS_2_1FFAB51C508E8509_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x16F3ED00)
#define CLASS_2_1FFAB51C508E8509_TICK_OFFSET UNITYSDK_OFFSET(0x16F3FA50)
#define CLASS_2_1FFAB51C508E8509__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3E8F0)
#define CLASS_2_1FFAB51C508E8509___PROMISEFULLKEEPTIMEOUT_B__19_0_OFFSET UNITYSDK_OFFSET(0x16F406F0)
#define CLASS_2_1FFAB51C508E8509___STARTFULLWITHTEXT_B__14_0_OFFSET UNITYSDK_OFFSET(0x16F405D0)

inline static constexpr unsigned int Class_2_1FFAB51C508E8509_TypeDefinitionIndex = 55700;

class Class_2_1FFAB51C508E8509 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::PlayScreenTransfer* Field_2_2; // 0x20
	::System::Exception* Field_2_3; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x30
	::Class_1_23F67DD15593C8D6* Field_2_5; // 0x38
	::RPG::Client::Promises::Promise* Field_2_6; // 0x40
	::RPG::Client::Promises::Promise* Field_2_7; // 0x48
	::RPG::Client::Promises::Promise* Field_2_8; // 0x50
	::RPG::Client::Promises::Promise* Field_2_9; // 0x58
	::System::Boolean Field_2_10; // 0x60
	::System::Boolean Field_2_11; // 0x61
	::RPG::GameCore::ScreenTransferReason Field_2_12; // 0x64

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayScreenTransfer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayScreenTransfer*))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* SetNextTask(::Class_1_5F51D4049EA87B7B* a1)
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID, ::Class_1_5F51D4049EA87B7B*))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_SETNEXTTASK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_TICK_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::ScreenTransferReason Method_2_5C0C256643E989F8(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::ScreenTransferReason(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_5C0C256643E989F8_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FE08FC6FFC33008(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_5FE08FC6FFC33008_OFFSET))(this, a1);
	}

	::System::Void Method_2_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_2_EB522918F22FFA3B(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_EB522918F22FFA3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D34432C0B65E6441(::RPG::Client::Promises::Promise* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_D34432C0B65E6441_OFFSET))(this, a1);
	}

	::System::Void Method_2_261C2B64774FC8E4(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_261C2B64774FC8E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_9C45022812211693(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_9C45022812211693_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_2B66C008535F8B01_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_0742B6775750851D()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_0742B6775750851D_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_C0E1A11BAA953771()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_C0E1A11BAA953771_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_4919B89B94C0D6A5()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_4919B89B94C0D6A5_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_125EBF3466E4530A()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509_METHOD_2_125EBF3466E4530A_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* __StartFullWithText_b__14_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509___STARTFULLWITHTEXT_B__14_0_OFFSET))(this);
	}

	::System::Void __PromiseFullKeepTimeout_b__19_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FFAB51C508E8509___PROMISEFULLKEEPTIMEOUT_B__19_0_OFFSET))(this);
	}
};
