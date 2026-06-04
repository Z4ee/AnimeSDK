#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameTrait; }
namespace RPG::Client { class GridFightProjection; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS9_2__CTOR_OFFSET UNITYSDK_OFFSET(0xBB89D50)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS9_2__ONMEMBERSCHANGEDEVENTHANDLER_B__2_OFFSET UNITYSDK_OFFSET(0xBB8C9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c__DisplayClass9_2_TypeDefinitionIndex = 61158;

	class GridFightGameTrait___c__DisplayClass9_2 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightProjection* proj; // 0x10
		::RPG::Client::GridFightGameTrait* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS9_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnMembersChangedEventHandler_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS9_2__ONMEMBERSCHANGEDEVENTHANDLER_B__2_OFFSET))(this);
		}
	};
}
