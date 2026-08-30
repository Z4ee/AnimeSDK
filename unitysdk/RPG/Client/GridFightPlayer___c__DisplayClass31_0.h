#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightPlayer; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightUnlockTraitMember; }

#define RPG_CLIENT_GRIDFIGHTPLAYER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA505E0)
#define RPG_CLIENT_GRIDFIGHTPLAYER___C__DISPLAYCLASS31_0__ISTRAITTRACKROLE_B__0_OFFSET UNITYSDK_OFFSET(0x1CA54020)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPlayer___c__DisplayClass31_0_TypeDefinitionIndex = 65134;

	class GridFightPlayer___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10
		::RPG::Client::GridFightPlayer* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsTraitTrackRole_b__0(::RPG::Client::GridFightUnlockTraitMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightUnlockTraitMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__DISPLAYCLASS31_0__ISTRAITTRACKROLE_B__0_OFFSET))(this, a1);
		}
	};
}
