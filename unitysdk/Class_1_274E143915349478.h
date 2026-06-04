#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_487;
class Class_1_43BD383C98B4C0C5_118;
namespace RPG::GameCore { class AISwitchDecisionGroupConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_274E143915349478_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B4F5B0)
#define CLASS_1_274E143915349478_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x13B4FF10)
#define CLASS_1_274E143915349478_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x13B4FF90)
#define CLASS_1_274E143915349478_METHOD_1_B34A6620985286D8_OFFSET UNITYSDK_OFFSET(0x13B50250)
#define CLASS_1_274E143915349478_METHOD_1_B48F10722F3EAFFE_OFFSET UNITYSDK_OFFSET(0x13B4FC40)
#define CLASS_1_274E143915349478_METHOD_1_D46328A33D694803_OFFSET UNITYSDK_OFFSET(0x13B4F7A0)
#define CLASS_1_274E143915349478_METHOD_1_E67FA6A042436B76_OFFSET UNITYSDK_OFFSET(0x13B4F8E0)
#define CLASS_1_274E143915349478_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x13B50070)
#define CLASS_1_274E143915349478_METHOD_1_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x13B50160)
#define CLASS_1_274E143915349478__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4F3E0)

inline static constexpr unsigned int Class_1_274E143915349478_TypeDefinitionIndex = 50833;

class Class_1_274E143915349478 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_487* Field_1_0; // 0x10
	::RPG::GameCore::AISwitchDecisionGroupConfig* Field_1_1; // 0x18
	::Il2CppArray<::Class_0_16E4307DCC419505_487*>* Field_1_2; // 0x20
	::RPG::GameCore::TaskContext* Field_1_3; // 0x28
	::Class_0_16E4307DCC419505_487* Field_1_4; // 0x30
	::Class_1_43BD383C98B4C0C5_118* Field_1_5; // 0x38
	::Class_0_16E4307DCC419505_487* Field_1_6; // 0x40

	::System::Void _ctor(::RPG::GameCore::AISwitchDecisionGroupConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AISwitchDecisionGroupConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_D46328A33D694803()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_D46328A33D694803_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_487* Method_1_B48F10722F3EAFFE(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_487*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_B48F10722F3EAFFE_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_1_E67FA6A042436B76()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_E67FA6A042436B76_OFFSET))(this);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}

	::RPG::GameCore::TaskState Method_1_B34A6620985286D8()
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_274E143915349478_METHOD_1_B34A6620985286D8_OFFSET))(this);
	}
};
