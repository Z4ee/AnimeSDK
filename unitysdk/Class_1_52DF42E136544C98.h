#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierHintType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifierHint; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_52DF42E136544C98_METHOD_1_53701A90DF3011E8_OFFSET UNITYSDK_OFFSET(0xA7073F0)
#define CLASS_1_52DF42E136544C98_METHOD_1_B751F95C5831C42B_OFFSET UNITYSDK_OFFSET(0xA707580)
#define CLASS_1_52DF42E136544C98__CTOR_OFFSET UNITYSDK_OFFSET(0xA7073E0)

inline static constexpr unsigned int Class_1_52DF42E136544C98_TypeDefinitionIndex = 66675;

class Class_1_52DF42E136544C98 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedModifierInstance* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_1; // 0x18
	::Il2CppArray<::RPG::GameCore::DynamicFloat*>* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::RPG::GameCore::ModifierHintType Field_1_4; // 0x2C
	::System::Int32 Field_1_5; // 0x30
	::RPG::Client::TextID Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52DF42E136544C98__CTOR_OFFSET))(this);
	}

	static ::Class_1_52DF42E136544C98* Method_1_53701A90DF3011E8(::RPG::GameCore::ModifierHint* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::Class_1_52DF42E136544C98*(*)(::RPG::GameCore::ModifierHint*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_52DF42E136544C98_METHOD_1_53701A90DF3011E8_OFFSET))(a1, a2);
	}

	static ::Class_1_52DF42E136544C98* Method_1_B751F95C5831C42B(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::Class_1_52DF42E136544C98*(*)(::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_1_52DF42E136544C98_METHOD_1_B751F95C5831C42B_OFFSET))(a1);
	}
};
