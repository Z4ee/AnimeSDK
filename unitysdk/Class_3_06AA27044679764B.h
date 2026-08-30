#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyShieldMax; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_3_06AA27044679764B_METHOD_3_1C632574571D8130_OFFSET UNITYSDK_OFFSET(0x11B7C0E0)
#define CLASS_3_06AA27044679764B_METHOD_3_42341A39904FF9B5_OFFSET UNITYSDK_OFFSET(0x11B7C480)
#define CLASS_3_06AA27044679764B_METHOD_3_6EAF1929F9123E5A_OFFSET UNITYSDK_OFFSET(0x11B7C260)
#define CLASS_3_06AA27044679764B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11B7BD60)
#define CLASS_3_06AA27044679764B__CTOR_OFFSET UNITYSDK_OFFSET(0x11B7BD10)

inline static constexpr unsigned int Class_3_06AA27044679764B_TypeDefinitionIndex = 55412;

class Class_3_06AA27044679764B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ModifyShieldMax*>
{
public:
	::RPG::GameCore::GameEntity* NAFJJEABEMI; // 0x28
	::RPG::GameCore::StringHash PBCKLHILNAD; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyShieldMax* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyShieldMax*))((::PBYTE)hIl2Cpp + CLASS_3_06AA27044679764B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_06AA27044679764B_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_1C632574571D8130(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_06AA27044679764B_METHOD_3_1C632574571D8130_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6EAF1929F9123E5A(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_06AA27044679764B_METHOD_3_6EAF1929F9123E5A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_42341A39904FF9B5(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_06AA27044679764B_METHOD_3_42341A39904FF9B5_OFFSET))(this, a1);
	}
};
