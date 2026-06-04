#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournHex; }
namespace RPG::Client { class RogueTournHexData; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC845B00)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS25_0__ISHEXBUILDREFRECOMMEND_B__0_OFFSET UNITYSDK_OFFSET(0xC846C60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentViewModel___c__DisplayClass25_0_TypeDefinitionIndex = 68092;

	class RogueTournPersonaHexEquipmentViewModel___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournHex* hex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsHexBuildRefRecommend_b__0(::RPG::Client::RogueTournHexData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__DISPLAYCLASS25_0__ISHEXBUILDREFRECOMMEND_B__0_OFFSET))(this, a1);
		}
	};
}
