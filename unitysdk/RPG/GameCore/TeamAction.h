#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamActionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TEAMACTION_METHOD_3_0AC4A24F3EF167BD_OFFSET UNITYSDK_OFFSET(0x17887540)
#define RPG_GAMECORE_TEAMACTION_METHOD_3_A563CFCC4154A67C_OFFSET UNITYSDK_OFFSET(0x17895590)
#define RPG_GAMECORE_TEAMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17887510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamAction_TypeDefinitionIndex = 21369;

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

		static ::System::Void Method_3_A563CFCC4154A67C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMACTION_METHOD_3_A563CFCC4154A67C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0AC4A24F3EF167BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMACTION_METHOD_3_0AC4A24F3EF167BD_OFFSET))(a1, a2);
		}
	};
}
