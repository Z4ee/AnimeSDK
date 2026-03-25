#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_385;
class Class_1_43BD383C98B4C0C5_104;
namespace RPG::GameCore { class AIStepperDecisionGroupConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_A20A8CD62AE17D85_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB27AF80)
#define CLASS_1_A20A8CD62AE17D85_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xB27B390)
#define CLASS_1_A20A8CD62AE17D85_METHOD_1_461FC188460DEE92_OFFSET UNITYSDK_OFFSET(0xB27B0E0)
#define CLASS_1_A20A8CD62AE17D85_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0xB27B310)
#define CLASS_1_A20A8CD62AE17D85_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xB27B4F0)
#define CLASS_1_A20A8CD62AE17D85_METHOD_1_B34A6620985286D8_OFFSET UNITYSDK_OFFSET(0xB27B720)
#define CLASS_1_A20A8CD62AE17D85_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB27AAB0)
#define CLASS_1_A20A8CD62AE17D85_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xB27B6C0)
#define CLASS_1_A20A8CD62AE17D85_METHOD_1_F54DE4640CE99063_OFFSET UNITYSDK_OFFSET(0xB27AF20)
#define CLASS_1_A20A8CD62AE17D85_METHOD_1_F968DCE1B5106D1F_OFFSET UNITYSDK_OFFSET(0xB27AB00)
#define CLASS_1_A20A8CD62AE17D85_METHOD_1_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0xB27B5D0)
#define CLASS_1_A20A8CD62AE17D85__CTOR_OFFSET UNITYSDK_OFFSET(0xB27A8C0)

inline static constexpr unsigned int Class_1_A20A8CD62AE17D85_TypeDefinitionIndex = 43468;

class Class_1_A20A8CD62AE17D85 : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_104* Field_1_6; // 0x10
	::RPG::GameCore::AIStepperDecisionGroupConfig* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_385* Field_1_0; // 0x20
	::Il2CppArray<::Class_0_16E4307DCC419505_385*>* Field_1_2; // 0x28
	::System::Int32 Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x34
	::System::Int32 Field_1_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::AIStepperDecisionGroupConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIStepperDecisionGroupConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A20A8CD62AE17D85__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_F968DCE1B5106D1F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A20A8CD62AE17D85_METHOD_1_F968DCE1B5106D1F_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A20A8CD62AE17D85_DISPOSE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_385* Method_1_461FC188460DEE92(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_385*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A20A8CD62AE17D85_METHOD_1_461FC188460DEE92_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A20A8CD62AE17D85_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A20A8CD62AE17D85_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A20A8CD62AE17D85_METHOD_1_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A20A8CD62AE17D85_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A20A8CD62AE17D85_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F54DE4640CE99063(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A20A8CD62AE17D85_METHOD_1_F54DE4640CE99063_OFFSET))(this, a1);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A20A8CD62AE17D85_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}

	::RPG::GameCore::TaskState Method_1_B34A6620985286D8()
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A20A8CD62AE17D85_METHOD_1_B34A6620985286D8_OFFSET))(this);
	}
};
