#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_260;
namespace RPG::GameCore { class LittleGameAbilityPixAirFireLaser; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_EA0F7265104B9E26_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE499100)
#define CLASS_2_EA0F7265104B9E26_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xE499A30)
#define CLASS_2_EA0F7265104B9E26_METHOD_2_2757AE2486125A62_OFFSET UNITYSDK_OFFSET(0xE499530)
#define CLASS_2_EA0F7265104B9E26_METHOD_2_C38F03C1E988B48E_OFFSET UNITYSDK_OFFSET(0xE4993E0)
#define CLASS_2_EA0F7265104B9E26_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE499140)
#define CLASS_2_EA0F7265104B9E26_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE499980)
#define CLASS_2_EA0F7265104B9E26_TICK_OFFSET UNITYSDK_OFFSET(0xE4999D0)
#define CLASS_2_EA0F7265104B9E26__CTOR_OFFSET UNITYSDK_OFFSET(0xE4990F0)
#define CLASS_2_EA0F7265104B9E26___IFIXBASEPROXY_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xE499A70)

inline static constexpr unsigned int Class_2_EA0F7265104B9E26_TypeDefinitionIndex = 54386;

class Class_2_EA0F7265104B9E26 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::LittleGameAbilityPixAirFireLaser* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameAbilityPixAirFireLaser* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameAbilityPixAirFireLaser*))((::PBYTE)hIl2Cpp + CLASS_2_EA0F7265104B9E26__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA0F7265104B9E26_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA0F7265104B9E26_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_2757AE2486125A62(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EA0F7265104B9E26_METHOD_2_2757AE2486125A62_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA0F7265104B9E26_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EA0F7265104B9E26_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA0F7265104B9E26_GETCONFIG_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_C38F03C1E988B48E(::Class_0_16E4307DCC419505_260* a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_260*))((::PBYTE)hIl2Cpp + CLASS_2_EA0F7265104B9E26_METHOD_2_C38F03C1E988B48E_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* __iFixBaseProxy_GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EA0F7265104B9E26___IFIXBASEPROXY_GETCONFIG_OFFSET))(this);
	}
};
