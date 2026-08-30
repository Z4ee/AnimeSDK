#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_F1C3EBA366E084A2;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_FearEscape; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AAA0C5731CB4A4AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185E8610)
#define CLASS_3_AAA0C5731CB4A4AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x185E8660)
#define CLASS_3_AAA0C5731CB4A4AE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x185E87B0)
#define CLASS_3_AAA0C5731CB4A4AE_TICK_OFFSET UNITYSDK_OFFSET(0x185E8750)
#define CLASS_3_AAA0C5731CB4A4AE__CTOR_OFFSET UNITYSDK_OFFSET(0x185E84C0)

inline static constexpr unsigned int Class_3_AAA0C5731CB4A4AE_TypeDefinitionIndex = 52491;

class Class_3_AAA0C5731CB4A4AE : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_FearEscape*>
{
public:
	::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x28
	::Class_2_F1C3EBA366E084A2* KDKKFJKEIAA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_FearEscape* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_FearEscape*))((::PBYTE)hIl2Cpp + CLASS_3_AAA0C5731CB4A4AE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAA0C5731CB4A4AE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAA0C5731CB4A4AE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AAA0C5731CB4A4AE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AAA0C5731CB4A4AE_ONTASKRESET_OFFSET))(this);
	}
};
