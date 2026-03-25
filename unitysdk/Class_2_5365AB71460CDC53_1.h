#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_2_5365AB71460CDC53_1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xD17D750)
#define CLASS_2_5365AB71460CDC53_1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xD17D700)
#define CLASS_2_5365AB71460CDC53_1_METHOD_2_B5728DBC6FF4A218_OFFSET UNITYSDK_OFFSET(0xD17D690)
#define CLASS_2_5365AB71460CDC53_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD17D7A0)

inline static constexpr unsigned int Class_2_5365AB71460CDC53_1_TypeDefinitionIndex = 45500;

class Class_2_5365AB71460CDC53_1 : public ::Class_1_9988289E7F8AA214
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_1; // 0x20
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5365AB71460CDC53_1__CTOR_OFFSET))(this);
	}

	::Class_2_5365AB71460CDC53_1* Method_2_B5728DBC6FF4A218(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a3)
	{
		return ((::Class_2_5365AB71460CDC53_1*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + CLASS_2_5365AB71460CDC53_1_METHOD_2_B5728DBC6FF4A218_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5365AB71460CDC53_1_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5365AB71460CDC53_1_GETEVENTTYPE_OFFSET))(this);
	}
};
