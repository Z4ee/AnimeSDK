#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class CheckIsMagicRogueAutoDressOpen; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A039196385F1D3A2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10611E60)
#define CLASS_2_A039196385F1D3A2_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x106121D0)
#define CLASS_2_A039196385F1D3A2_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x106120F0)
#define CLASS_2_A039196385F1D3A2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10611EF0)
#define CLASS_2_A039196385F1D3A2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x106122B0)
#define CLASS_2_A039196385F1D3A2_TICK_OFFSET UNITYSDK_OFFSET(0x10612390)
#define CLASS_2_A039196385F1D3A2__CTOR_OFFSET UNITYSDK_OFFSET(0x10611D70)

inline static constexpr unsigned int Class_2_A039196385F1D3A2_TypeDefinitionIndex = 54213;

class Class_2_A039196385F1D3A2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::CheckIsMagicRogueAutoDressOpen* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}
};
