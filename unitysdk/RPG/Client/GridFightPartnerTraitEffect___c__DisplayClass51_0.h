#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE92C40)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__DISPLAYCLASS51_0___GETCURROLEOPTIONSFROMTEAM_B__0_OFFSET UNITYSDK_OFFSET(0x1AE930D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPartnerTraitEffect___c__DisplayClass51_0_TypeDefinitionIndex = 62482;

	class GridFightPartnerTraitEffect___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::UInt32 excludeRoleID; // 0x10
		::System::UInt32 partnerTraitID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetCurRoleOptionsFromTeam_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__DISPLAYCLASS51_0___GETCURROLEOPTIONSFROMTEAM_B__0_OFFSET))(this, a1);
		}
	};
}
