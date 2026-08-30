#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFormationRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B6320)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS2_0___FORMATIONHASAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0xD1B8080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationFilter___c__DisplayClass2_0_TypeDefinitionIndex = 64754;

	class GridFightGameFormationFilter___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __FormationHasAvatar_b__0(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER___C__DISPLAYCLASS2_0___FORMATIONHASAVATAR_B__0_OFFSET))(this, a1);
		}
	};
}
