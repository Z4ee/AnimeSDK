#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetTriggeredFormationAssetAutoCenter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F57A1800D9A9E561_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FCE850)
#define CLASS_2_F57A1800D9A9E561_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8FCE890)
#define CLASS_2_F57A1800D9A9E561_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8FCE980)
#define CLASS_2_F57A1800D9A9E561_TICK_OFFSET UNITYSDK_OFFSET(0x8FCE9D0)
#define CLASS_2_F57A1800D9A9E561__CTOR_OFFSET UNITYSDK_OFFSET(0x8FCE840)

inline static constexpr unsigned int Class_2_F57A1800D9A9E561_TypeDefinitionIndex = 44514;

class Class_2_F57A1800D9A9E561 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetTriggeredFormationAssetAutoCenter* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTriggeredFormationAssetAutoCenter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTriggeredFormationAssetAutoCenter*))((::PBYTE)hIl2Cpp + CLASS_2_F57A1800D9A9E561__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F57A1800D9A9E561_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F57A1800D9A9E561_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F57A1800D9A9E561_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F57A1800D9A9E561_TICK_OFFSET))(this, a1);
	}
};
