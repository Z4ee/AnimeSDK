#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class CheckIsMagicRogueAutoDressOpen; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A039196385F1D3A2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11EFBB70)
#define CLASS_2_A039196385F1D3A2_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x11EFBFB0)
#define CLASS_2_A039196385F1D3A2_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11EFBED0)
#define CLASS_2_A039196385F1D3A2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11EFBCD0)
#define CLASS_2_A039196385F1D3A2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11EFC090)
#define CLASS_2_A039196385F1D3A2_TICK_OFFSET UNITYSDK_OFFSET(0x11EFC170)
#define CLASS_2_A039196385F1D3A2__CTOR_OFFSET UNITYSDK_OFFSET(0x11EFBA80)

inline static constexpr unsigned int Class_2_A039196385F1D3A2_TypeDefinitionIndex = 58167;

class Class_2_A039196385F1D3A2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* JBHLMPCBOII; // 0x18
	::Class_3_07C3C4D2990C49EE* LMNNMNBEMKC; // 0x20
	::RPG::GameCore::CheckIsMagicRogueAutoDressOpen* OFKGLJOAMLD; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30

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
