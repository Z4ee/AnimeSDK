#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GetWormCompassResult; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4A058F68D5B2A14B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB92B9E0)
#define CLASS_2_4A058F68D5B2A14B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB92B3E0)
#define CLASS_2_4A058F68D5B2A14B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB92B930)
#define CLASS_2_4A058F68D5B2A14B_TICK_OFFSET UNITYSDK_OFFSET(0xB92B980)
#define CLASS_2_4A058F68D5B2A14B__CTOR_OFFSET UNITYSDK_OFFSET(0xB92B3D0)

inline static constexpr unsigned int Class_2_4A058F68D5B2A14B_TypeDefinitionIndex = 58288;

class Class_2_4A058F68D5B2A14B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::GetWormCompassResult* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GetWormCompassResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GetWormCompassResult*))((::PBYTE)hIl2Cpp + CLASS_2_4A058F68D5B2A14B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A058F68D5B2A14B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A058F68D5B2A14B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4A058F68D5B2A14B_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A058F68D5B2A14B_DISPOSE_OFFSET))(this);
	}
};
