#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingGridOffset; }

#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD8610)
#define RPG_CLIENT_CHENLINGBATTLE_HANDCARD___C__DISPLAYCLASS3_0__ISINEFFECTGRID_B__0_OFFSET UNITYSDK_OFFSET(0x1AFD8B90)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int HandCard___c__DisplayClass3_0_TypeDefinitionIndex = 72452;

	class HandCard___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Int32 offsetX; // 0x10
		::System::Int32 offsetY; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsInEffectGrid_b__0(::RPG::GameCore::ChenLingGridOffset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingGridOffset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_HANDCARD___C__DISPLAYCLASS3_0__ISINEFFECTGRID_B__0_OFFSET))(this, a1);
		}
	};
}
