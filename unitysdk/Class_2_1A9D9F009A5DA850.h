#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class MatchThreeV2ChangePropContainerVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1A9D9F009A5DA850_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15387F70)
#define CLASS_2_1A9D9F009A5DA850_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15387FB0)
#define CLASS_2_1A9D9F009A5DA850_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15388030)
#define CLASS_2_1A9D9F009A5DA850_TICK_OFFSET UNITYSDK_OFFSET(0x15388070)
#define CLASS_2_1A9D9F009A5DA850__CTOR_OFFSET UNITYSDK_OFFSET(0x15387F60)

inline static constexpr unsigned int Class_2_1A9D9F009A5DA850_TypeDefinitionIndex = 58361;

class Class_2_1A9D9F009A5DA850 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::Client::MatchThreeV2ChangePropContainerVisible* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::MatchThreeV2ChangePropContainerVisible* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::MatchThreeV2ChangePropContainerVisible*))((::PBYTE)hIl2Cpp + CLASS_2_1A9D9F009A5DA850__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A9D9F009A5DA850_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A9D9F009A5DA850_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A9D9F009A5DA850_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1A9D9F009A5DA850_TICK_OFFSET))(this, a1);
	}
};
