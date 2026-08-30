#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class MapEntityDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VerifyInteractingEntity; }

#define CLASS_2_FC312EF30A168511_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE2E95E0)
#define CLASS_2_FC312EF30A168511_METHOD_2_6726481B3FB7D0B8_OFFSET UNITYSDK_OFFSET(0xE2E9A20)
#define CLASS_2_FC312EF30A168511_METHOD_2_F2ECC934D853018A_OFFSET UNITYSDK_OFFSET(0xE2E9970)
#define CLASS_2_FC312EF30A168511_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE2E9620)
#define CLASS_2_FC312EF30A168511_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE2E9B50)
#define CLASS_2_FC312EF30A168511_TICK_OFFSET UNITYSDK_OFFSET(0xE2E9BA0)
#define CLASS_2_FC312EF30A168511__CTOR_OFFSET UNITYSDK_OFFSET(0xE2E95D0)

inline static constexpr unsigned int Class_2_FC312EF30A168511_TypeDefinitionIndex = 58994;

class Class_2_FC312EF30A168511 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::VerifyInteractingEntity* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VerifyInteractingEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VerifyInteractingEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FC312EF30A168511__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC312EF30A168511_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC312EF30A168511_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC312EF30A168511_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC312EF30A168511_TICK_OFFSET))(this, a1);
	}

	::RPG::Client::MapEntityDef* Method_2_F2ECC934D853018A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::Client::MapEntityDef*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_FC312EF30A168511_METHOD_2_F2ECC934D853018A_OFFSET))(this, a1);
	}

	::System::Void Method_2_6726481B3FB7D0B8(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_2_FC312EF30A168511_METHOD_2_6726481B3FB7D0B8_OFFSET))(this, a1);
	}
};
