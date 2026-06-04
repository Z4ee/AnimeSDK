#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AvatarIntensityEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_421896CC40502588_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8D5710)
#define CLASS_2_421896CC40502588_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA8D50C0)
#define CLASS_2_421896CC40502588_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA8D5660)
#define CLASS_2_421896CC40502588_TICK_OFFSET UNITYSDK_OFFSET(0xA8D56B0)
#define CLASS_2_421896CC40502588__CTOR_OFFSET UNITYSDK_OFFSET(0xA8D50B0)

inline static constexpr unsigned int Class_2_421896CC40502588_TypeDefinitionIndex = 52609;

class Class_2_421896CC40502588 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AvatarIntensityEffect* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AvatarIntensityEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AvatarIntensityEffect*))((::PBYTE)hIl2Cpp + CLASS_2_421896CC40502588__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_421896CC40502588_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_421896CC40502588_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_421896CC40502588_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_421896CC40502588_DISPOSE_OFFSET))(this);
	}
};
