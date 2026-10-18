#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AddEntityToTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_37E77B7257295F5E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB875F80)
#define CLASS_2_37E77B7257295F5E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB875FC0)
#define CLASS_2_37E77B7257295F5E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8761F0)
#define CLASS_2_37E77B7257295F5E_TICK_OFFSET UNITYSDK_OFFSET(0xB876240)
#define CLASS_2_37E77B7257295F5E__CTOR_OFFSET UNITYSDK_OFFSET(0xB875F70)

inline static constexpr unsigned int Class_2_37E77B7257295F5E_TypeDefinitionIndex = 54811;

class Class_2_37E77B7257295F5E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AddEntityToTeamFormation* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddEntityToTeamFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddEntityToTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_2_37E77B7257295F5E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37E77B7257295F5E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37E77B7257295F5E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37E77B7257295F5E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37E77B7257295F5E_TICK_OFFSET))(this, a1);
	}
};
