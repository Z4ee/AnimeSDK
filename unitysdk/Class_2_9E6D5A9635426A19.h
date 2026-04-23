#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DarkTeamDestroyCheck; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9E6D5A9635426A19_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FF1C60)
#define CLASS_2_9E6D5A9635426A19_METHOD_2_8A76897D6A693475_OFFSET UNITYSDK_OFFSET(0x8FF1D00)
#define CLASS_2_9E6D5A9635426A19_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8FF1CA0)
#define CLASS_2_9E6D5A9635426A19_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8FF1DB0)
#define CLASS_2_9E6D5A9635426A19_TICK_OFFSET UNITYSDK_OFFSET(0x8FF1E00)
#define CLASS_2_9E6D5A9635426A19__CTOR_OFFSET UNITYSDK_OFFSET(0x8FF1C50)

inline static constexpr unsigned int Class_2_9E6D5A9635426A19_TypeDefinitionIndex = 53548;

class Class_2_9E6D5A9635426A19 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DarkTeamDestroyCheck* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DarkTeamDestroyCheck* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DarkTeamDestroyCheck*))((::PBYTE)hIl2Cpp + CLASS_2_9E6D5A9635426A19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E6D5A9635426A19_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E6D5A9635426A19_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E6D5A9635426A19_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9E6D5A9635426A19_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8A76897D6A693475()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E6D5A9635426A19_METHOD_2_8A76897D6A693475_OFFSET))(this);
	}
};
