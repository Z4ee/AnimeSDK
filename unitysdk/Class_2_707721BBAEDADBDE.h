#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AddGlobalDynamicOffsetIgnoreEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_707721BBAEDADBDE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CA8CA0)
#define CLASS_2_707721BBAEDADBDE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CA8CE0)
#define CLASS_2_707721BBAEDADBDE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CA8F70)
#define CLASS_2_707721BBAEDADBDE_TICK_OFFSET UNITYSDK_OFFSET(0x15CA8FC0)
#define CLASS_2_707721BBAEDADBDE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CA8C90)

inline static constexpr unsigned int Class_2_707721BBAEDADBDE_TypeDefinitionIndex = 58012;

class Class_2_707721BBAEDADBDE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddGlobalDynamicOffsetIgnoreEntity*))((::PBYTE)hIl2Cpp + CLASS_2_707721BBAEDADBDE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_707721BBAEDADBDE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_707721BBAEDADBDE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_707721BBAEDADBDE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_707721BBAEDADBDE_TICK_OFFSET))(this, a1);
	}
};
