#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_95EEF67A826E14FF;
namespace RPG::Client { class BattleBuffToastNotify; }
namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_17C3D6CDBC61BCB6_METHOD_1_1C1CFD4227920833_OFFSET UNITYSDK_OFFSET(0x952D9C0)
#define CLASS_1_17C3D6CDBC61BCB6_METHOD_1_8E655D00ABDBE5D0_OFFSET UNITYSDK_OFFSET(0x952D630)
#define CLASS_1_17C3D6CDBC61BCB6_METHOD_1_A9394A74D8235113_OFFSET UNITYSDK_OFFSET(0x952D340)
#define CLASS_1_17C3D6CDBC61BCB6_METHOD_1_E572A84574CA3775_OFFSET UNITYSDK_OFFSET(0x952DA80)
#define CLASS_1_17C3D6CDBC61BCB6__CTOR_OFFSET UNITYSDK_OFFSET(0x952DB10)

inline static constexpr unsigned int Class_1_17C3D6CDBC61BCB6_TypeDefinitionIndex = 65943;

class Class_1_17C3D6CDBC61BCB6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17C3D6CDBC61BCB6__CTOR_OFFSET))(this);
	}

	::Class_1_95EEF67A826E14FF* Method_1_A9394A74D8235113(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_95EEF67A826E14FF*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_17C3D6CDBC61BCB6_METHOD_1_A9394A74D8235113_OFFSET))(this, a1);
	}

	::Class_1_95EEF67A826E14FF* Method_1_E572A84574CA3775(::RPG::Client::BattleBuffToastNotify* a1)
	{
		return ((::Class_1_95EEF67A826E14FF*(*)(::PVOID, ::RPG::Client::BattleBuffToastNotify*))((::PBYTE)hIl2Cpp + CLASS_1_17C3D6CDBC61BCB6_METHOD_1_E572A84574CA3775_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1C1CFD4227920833(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_17C3D6CDBC61BCB6_METHOD_1_1C1CFD4227920833_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Object*>* Method_1_8E655D00ABDBE5D0(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::StatusRow* a2)
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + CLASS_1_17C3D6CDBC61BCB6_METHOD_1_8E655D00ABDBE5D0_OFFSET))(this, a1, a2);
	}
};
