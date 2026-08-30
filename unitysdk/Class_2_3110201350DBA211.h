#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdventurePlayVO; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3110201350DBA211_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180DDE80)
#define CLASS_2_3110201350DBA211_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x180DDEC0)
#define CLASS_2_3110201350DBA211_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x180DE150)
#define CLASS_2_3110201350DBA211_TICK_OFFSET UNITYSDK_OFFSET(0x180DE1A0)
#define CLASS_2_3110201350DBA211__CTOR_OFFSET UNITYSDK_OFFSET(0x180DDE70)

inline static constexpr unsigned int Class_2_3110201350DBA211_TypeDefinitionIndex = 58062;

class Class_2_3110201350DBA211 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdventurePlayVO* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventurePlayVO* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventurePlayVO*))((::PBYTE)hIl2Cpp + CLASS_2_3110201350DBA211__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3110201350DBA211_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3110201350DBA211_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3110201350DBA211_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3110201350DBA211_TICK_OFFSET))(this, a1);
	}
};
