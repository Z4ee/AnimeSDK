#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvNpcSearchProp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_68095187325161DE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16867120)
#define CLASS_2_68095187325161DE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x168671C0)
#define CLASS_2_68095187325161DE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16867210)
#define CLASS_2_68095187325161DE_TICK_OFFSET UNITYSDK_OFFSET(0x16867160)
#define CLASS_2_68095187325161DE__CTOR_OFFSET UNITYSDK_OFFSET(0x16867110)

inline static constexpr unsigned int Class_2_68095187325161DE_TypeDefinitionIndex = 52715;

class Class_2_68095187325161DE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvNpcSearchProp* IGHAHBNLIJA; // 0x18
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcSearchProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcSearchProp*))((::PBYTE)hIl2Cpp + CLASS_2_68095187325161DE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68095187325161DE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_68095187325161DE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68095187325161DE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68095187325161DE_ONTASKRESET_OFFSET))(this);
	}
};
