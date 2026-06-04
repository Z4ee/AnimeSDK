#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowUltraSkillAlternative; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_47DFEC9BD42C894E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA565C80)
#define CLASS_2_47DFEC9BD42C894E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA565CC0)
#define CLASS_2_47DFEC9BD42C894E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA565D40)
#define CLASS_2_47DFEC9BD42C894E_TICK_OFFSET UNITYSDK_OFFSET(0xA565D90)
#define CLASS_2_47DFEC9BD42C894E__CTOR_OFFSET UNITYSDK_OFFSET(0xA565C70)

inline static constexpr unsigned int Class_2_47DFEC9BD42C894E_TypeDefinitionIndex = 52714;

class Class_2_47DFEC9BD42C894E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShowUltraSkillAlternative* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowUltraSkillAlternative* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowUltraSkillAlternative*))((::PBYTE)hIl2Cpp + CLASS_2_47DFEC9BD42C894E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47DFEC9BD42C894E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47DFEC9BD42C894E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_47DFEC9BD42C894E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_47DFEC9BD42C894E_TICK_OFFSET))(this, a1);
	}
};
