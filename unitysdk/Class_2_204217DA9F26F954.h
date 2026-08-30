#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class RoadRashGameModifier_PlayerUltimateQTE; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_204217DA9F26F954_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D472A0)
#define CLASS_2_204217DA9F26F954_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x17D47E60)
#define CLASS_2_204217DA9F26F954_METHOD_2_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x17D47EA0)
#define CLASS_2_204217DA9F26F954_METHOD_2_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x17D47DE0)
#define CLASS_2_204217DA9F26F954_METHOD_2_499E04DDEB14CC7B_OFFSET UNITYSDK_OFFSET(0x17D47540)
#define CLASS_2_204217DA9F26F954_METHOD_2_BC12CEC70676129A_OFFSET UNITYSDK_OFFSET(0x17D473E0)
#define CLASS_2_204217DA9F26F954_METHOD_2_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0x17D47B70)
#define CLASS_2_204217DA9F26F954_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x17D47C70)
#define CLASS_2_204217DA9F26F954_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D472E0)
#define CLASS_2_204217DA9F26F954_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17D47900)
#define CLASS_2_204217DA9F26F954_TICK_OFFSET UNITYSDK_OFFSET(0x17D47960)
#define CLASS_2_204217DA9F26F954__CTOR_OFFSET UNITYSDK_OFFSET(0x17D47280)

inline static constexpr unsigned int Class_2_204217DA9F26F954_TypeDefinitionIndex = 58578;

class Class_2_204217DA9F26F954 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE* OFKGLJOAMLD; // 0x20
	::System::Single BPAIDCADMDO; // 0x28
	::System::Single CHOHLHGCKNF; // 0x2C
	::System::Int32 BKPDHAJKFCE; // 0x30
	::System::Single EKINFIKNFOM; // 0x34
	::System::Single DFLCFKMHNEP; // 0x38
	::System::Single EHNAKFFHPLA; // 0x3C
	::System::Boolean IGEEODNKPGD; // 0x40
	::System::Boolean KDADBKCLLMJ; // 0x41
	::System::Boolean NHPMGCIEECA; // 0x42

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE*))((::PBYTE)hIl2Cpp + CLASS_2_204217DA9F26F954__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_204217DA9F26F954_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_204217DA9F26F954_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_204217DA9F26F954_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_204217DA9F26F954_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_204217DA9F26F954_GETCONFIG_OFFSET))(this);
	}

	::System::Single Method_2_BC12CEC70676129A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_204217DA9F26F954_METHOD_2_BC12CEC70676129A_OFFSET))(this);
	}

	::System::Void Method_2_499E04DDEB14CC7B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_204217DA9F26F954_METHOD_2_499E04DDEB14CC7B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1F5A654A67BB61C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_204217DA9F26F954_METHOD_2_D1F5A654A67BB61C_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_204217DA9F26F954_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_2_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_204217DA9F26F954_METHOD_2_43A478BA01FE29B7_OFFSET))(this);
	}

	::System::Void Method_2_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_204217DA9F26F954_METHOD_2_25EC451C0EA68F53_OFFSET))(this);
	}
};
