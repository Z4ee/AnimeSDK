#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChasePuzzleArea; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_PROP_CHASEPUZZLEAREA___C__DISPLAYCLASS6_0__CREATECUSTOMTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x16E064E0)
#define RPG_CLIENT_PROP_CHASEPUZZLEAREA___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E05E60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChasePuzzleArea___c__DisplayClass6_0_TypeDefinitionIndex = 74266;

	class ChasePuzzleArea___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChasePuzzleArea* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateCustomTrigger_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHASEPUZZLEAREA___C__DISPLAYCLASS6_0__CREATECUSTOMTRIGGER_B__0_OFFSET))(this, a1);
		}
	};
}
