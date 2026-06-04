#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetEffectAnimSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F94C658DA9FD0105_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1457A3F0)
#define CLASS_2_F94C658DA9FD0105_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1457A430)
#define CLASS_2_F94C658DA9FD0105_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1457A6B0)
#define CLASS_2_F94C658DA9FD0105_TICK_OFFSET UNITYSDK_OFFSET(0x1457A700)
#define CLASS_2_F94C658DA9FD0105__CTOR_OFFSET UNITYSDK_OFFSET(0x1457A3E0)

inline static constexpr unsigned int Class_2_F94C658DA9FD0105_TypeDefinitionIndex = 51825;

class Class_2_F94C658DA9FD0105 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetEffectAnimSpeed* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectAnimSpeed* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectAnimSpeed*))((::PBYTE)hIl2Cpp + CLASS_2_F94C658DA9FD0105__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F94C658DA9FD0105_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F94C658DA9FD0105_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F94C658DA9FD0105_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F94C658DA9FD0105_TICK_OFFSET))(this, a1);
	}
};
