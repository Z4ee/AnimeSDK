#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UIMonopolyWaitMainPage; }

#define CLASS_2_E532346413C9047E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18927B50)
#define CLASS_2_E532346413C9047E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18927820)
#define CLASS_2_E532346413C9047E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18927AC0)
#define CLASS_2_E532346413C9047E_TICK_OFFSET UNITYSDK_OFFSET(0x18927870)
#define CLASS_2_E532346413C9047E__CTOR_OFFSET UNITYSDK_OFFSET(0x18927810)

inline static constexpr unsigned int Class_2_E532346413C9047E_TypeDefinitionIndex = 58984;

class Class_2_E532346413C9047E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::UIMonopolyWaitMainPage* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UIMonopolyWaitMainPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UIMonopolyWaitMainPage*))((::PBYTE)hIl2Cpp + CLASS_2_E532346413C9047E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E532346413C9047E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E532346413C9047E_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E532346413C9047E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E532346413C9047E_DISPOSE_OFFSET))(this);
	}
};
