#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowMiniGameFuncBtnEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_62BB3F3AE83AA43C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98D1840)
#define CLASS_2_62BB3F3AE83AA43C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x98D1890)
#define CLASS_2_62BB3F3AE83AA43C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x98D1940)
#define CLASS_2_62BB3F3AE83AA43C_TICK_OFFSET UNITYSDK_OFFSET(0x98D1990)
#define CLASS_2_62BB3F3AE83AA43C__CTOR_OFFSET UNITYSDK_OFFSET(0x98D1830)

inline static constexpr unsigned int Class_2_62BB3F3AE83AA43C_TypeDefinitionIndex = 49130;

class Class_2_62BB3F3AE83AA43C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowMiniGameFuncBtnEffect* Field_2_0; // 0x18

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
