#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamActionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TEAMACTION_METHOD_3_16BCFFDAA32329EC_OFFSET UNITYSDK_OFFSET(0x1908FF70)
#define RPG_GAMECORE_TEAMACTION_METHOD_3_446FB9923CAD2F4E_OFFSET UNITYSDK_OFFSET(0x19090000)
#define RPG_GAMECORE_TEAMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1908FFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamAction_TypeDefinitionIndex = 22086;

	class TeamAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ActionName; // 0x18
		::System::Boolean Activated; // 0x20
		::System::Boolean RemoveWhenCasterDead; // 0x21
		::RPG::GameCore::TeamActionType Type; // 0x24
		::RPG::GameCore::PredicateConfig* ActorPredicate; // 0x28
		::RPG::GameCore::PredicateConfig* TargetPredicate; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_16BCFFDAA32329EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMACTION_METHOD_3_16BCFFDAA32329EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_446FB9923CAD2F4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMACTION_METHOD_3_446FB9923CAD2F4E_OFFSET))(a1, a2);
		}
	};
}
