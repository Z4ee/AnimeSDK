#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowBattleEventTips; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4B12DF909ABFF25F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x178C7AF0)
#define CLASS_2_4B12DF909ABFF25F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x178C7B30)
#define CLASS_2_4B12DF909ABFF25F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x178C7B90)
#define CLASS_2_4B12DF909ABFF25F_TICK_OFFSET UNITYSDK_OFFSET(0x178C7BE0)
#define CLASS_2_4B12DF909ABFF25F__CTOR_OFFSET UNITYSDK_OFFSET(0x178C7AE0)

inline static constexpr unsigned int Class_2_4B12DF909ABFF25F_TypeDefinitionIndex = 56630;

class Class_2_4B12DF909ABFF25F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ShowBattleEventTips* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleEventTips* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleEventTips*))((::PBYTE)hIl2Cpp + CLASS_2_4B12DF909ABFF25F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B12DF909ABFF25F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B12DF909ABFF25F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B12DF909ABFF25F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4B12DF909ABFF25F_TICK_OFFSET))(this, a1);
	}
};
