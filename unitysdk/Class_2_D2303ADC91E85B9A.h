#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetMonsterStanceVulnerable; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D2303ADC91E85B9A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113A62D0)
#define CLASS_2_D2303ADC91E85B9A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x113A6310)
#define CLASS_2_D2303ADC91E85B9A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x113A6580)
#define CLASS_2_D2303ADC91E85B9A_TICK_OFFSET UNITYSDK_OFFSET(0x113A65D0)
#define CLASS_2_D2303ADC91E85B9A__CTOR_OFFSET UNITYSDK_OFFSET(0x113A62C0)

inline static constexpr unsigned int Class_2_D2303ADC91E85B9A_TypeDefinitionIndex = 45354;

class Class_2_D2303ADC91E85B9A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetMonsterStanceVulnerable* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterStanceVulnerable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterStanceVulnerable*))((::PBYTE)hIl2Cpp + CLASS_2_D2303ADC91E85B9A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2303ADC91E85B9A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2303ADC91E85B9A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2303ADC91E85B9A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D2303ADC91E85B9A_TICK_OFFSET))(this, a1);
	}
};
