#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_230F5EDDB35DAEBA;
class Class_2_A59080F652920B7A;
namespace RPG::Client { class RoadRashGameAbility_FireProjectileCast; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E3CA4FD54504918E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD74B460)
#define CLASS_2_E3CA4FD54504918E_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xD74B4F0)
#define CLASS_2_E3CA4FD54504918E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD74AFE0)
#define CLASS_2_E3CA4FD54504918E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD74B4A0)
#define CLASS_2_E3CA4FD54504918E_TICK_OFFSET UNITYSDK_OFFSET(0xD74B240)
#define CLASS_2_E3CA4FD54504918E__CTOR_OFFSET UNITYSDK_OFFSET(0xD74AFD0)

inline static constexpr unsigned int Class_2_E3CA4FD54504918E_TypeDefinitionIndex = 58404;

class Class_2_E3CA4FD54504918E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_2_A59080F652920B7A* LPCDHEMDNEL; // 0x20
	::Class_2_230F5EDDB35DAEBA* CFKHNPGEAJA; // 0x28
	::RPG::Client::RoadRashGameAbility_FireProjectileCast* OFKGLJOAMLD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_FireProjectileCast* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_FireProjectileCast*))((::PBYTE)hIl2Cpp + CLASS_2_E3CA4FD54504918E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3CA4FD54504918E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E3CA4FD54504918E_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3CA4FD54504918E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3CA4FD54504918E_ONTASKRESET_OFFSET))(this);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3CA4FD54504918E_GETCONFIG_OFFSET))(this);
	}
};
