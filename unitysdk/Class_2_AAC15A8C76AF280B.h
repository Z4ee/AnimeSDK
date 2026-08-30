#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DispelStatus; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AAC15A8C76AF280B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BCD7B0)
#define CLASS_2_AAC15A8C76AF280B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BCD860)
#define CLASS_2_AAC15A8C76AF280B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18BCE660)
#define CLASS_2_AAC15A8C76AF280B_TICK_OFFSET UNITYSDK_OFFSET(0x18BCE6B0)
#define CLASS_2_AAC15A8C76AF280B__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCD6B0)

inline static constexpr unsigned int Class_2_AAC15A8C76AF280B_TypeDefinitionIndex = 55212;

class Class_2_AAC15A8C76AF280B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* FABICEFOKHC; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* BNLAOKGEFLK; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::RPG::GameCore::DispelStatus* OFKGLJOAMLD; // 0x30
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DispelStatus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DispelStatus*))((::PBYTE)hIl2Cpp + CLASS_2_AAC15A8C76AF280B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAC15A8C76AF280B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAC15A8C76AF280B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAC15A8C76AF280B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AAC15A8C76AF280B_TICK_OFFSET))(this, a1);
	}
};
