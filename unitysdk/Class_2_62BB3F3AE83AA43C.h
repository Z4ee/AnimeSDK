#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowMiniGameFuncBtnEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_62BB3F3AE83AA43C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1723E0A0)
#define CLASS_2_62BB3F3AE83AA43C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1723E0F0)
#define CLASS_2_62BB3F3AE83AA43C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1723E180)
#define CLASS_2_62BB3F3AE83AA43C_TICK_OFFSET UNITYSDK_OFFSET(0x1723E1D0)
#define CLASS_2_62BB3F3AE83AA43C__CTOR_OFFSET UNITYSDK_OFFSET(0x1723E090)

inline static constexpr unsigned int Class_2_62BB3F3AE83AA43C_TypeDefinitionIndex = 53535;

class Class_2_62BB3F3AE83AA43C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowMiniGameFuncBtnEffect* OFKGLJOAMLD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMiniGameFuncBtnEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMiniGameFuncBtnEffect*))((::PBYTE)hIl2Cpp + CLASS_2_62BB3F3AE83AA43C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62BB3F3AE83AA43C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62BB3F3AE83AA43C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62BB3F3AE83AA43C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_62BB3F3AE83AA43C_TICK_OFFSET))(this, a1);
	}
};
