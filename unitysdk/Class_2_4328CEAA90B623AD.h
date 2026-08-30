#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class RoadRashGameModifier_AddUltimateEnergy; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_4328CEAA90B623AD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0BC960)
#define CLASS_2_4328CEAA90B623AD_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xC0BCC30)
#define CLASS_2_4328CEAA90B623AD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0BC9A0)
#define CLASS_2_4328CEAA90B623AD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC0BC9F0)
#define CLASS_2_4328CEAA90B623AD_TICK_OFFSET UNITYSDK_OFFSET(0xC0BCA30)
#define CLASS_2_4328CEAA90B623AD__CTOR_OFFSET UNITYSDK_OFFSET(0xC0BC950)

inline static constexpr unsigned int Class_2_4328CEAA90B623AD_TypeDefinitionIndex = 58566;

class Class_2_4328CEAA90B623AD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::RoadRashGameModifier_AddUltimateEnergy* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergy*))((::PBYTE)hIl2Cpp + CLASS_2_4328CEAA90B623AD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4328CEAA90B623AD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4328CEAA90B623AD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4328CEAA90B623AD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4328CEAA90B623AD_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4328CEAA90B623AD_GETCONFIG_OFFSET))(this);
	}
};
