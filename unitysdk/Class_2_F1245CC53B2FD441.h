#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowBossHPValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F1245CC53B2FD441_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5B6BB0)
#define CLASS_2_F1245CC53B2FD441_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE5B6BF0)
#define CLASS_2_F1245CC53B2FD441_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE5B6C70)
#define CLASS_2_F1245CC53B2FD441_TICK_OFFSET UNITYSDK_OFFSET(0xE5B6CC0)
#define CLASS_2_F1245CC53B2FD441__CTOR_OFFSET UNITYSDK_OFFSET(0xE5B6BA0)

inline static constexpr unsigned int Class_2_F1245CC53B2FD441_TypeDefinitionIndex = 56635;

class Class_2_F1245CC53B2FD441 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowBossHPValue* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBossHPValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBossHPValue*))((::PBYTE)hIl2Cpp + CLASS_2_F1245CC53B2FD441__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1245CC53B2FD441_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1245CC53B2FD441_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1245CC53B2FD441_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F1245CC53B2FD441_TICK_OFFSET))(this, a1);
	}
};
