#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class MapEntityDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VerifyInteractingEntity; }

#define CLASS_2_FC312EF30A168511_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8843EB0)
#define CLASS_2_FC312EF30A168511_METHOD_2_10F9C5E2469C8988_OFFSET UNITYSDK_OFFSET(0x8844290)
#define CLASS_2_FC312EF30A168511_METHOD_2_F2ECC934D853018A_OFFSET UNITYSDK_OFFSET(0x88441E0)
#define CLASS_2_FC312EF30A168511_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8843EF0)
#define CLASS_2_FC312EF30A168511_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x88443C0)
#define CLASS_2_FC312EF30A168511_TICK_OFFSET UNITYSDK_OFFSET(0x8844410)
#define CLASS_2_FC312EF30A168511__CTOR_OFFSET UNITYSDK_OFFSET(0x8843EA0)

inline static constexpr unsigned int Class_2_FC312EF30A168511_TypeDefinitionIndex = 47517;

class Class_2_FC312EF30A168511 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::VerifyInteractingEntity* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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

	::System::Void Method_2_10F9C5E2469C8988(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_2_FC312EF30A168511_METHOD_2_10F9C5E2469C8988_OFFSET))(this, a1);
	}
};
