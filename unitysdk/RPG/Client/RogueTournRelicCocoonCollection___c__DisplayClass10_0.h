#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournRelicCocoonData; }

#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7B50D0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__DISPLAYCLASS10_0__GETCOCOONDATABYID_B__0_OFFSET UNITYSDK_OFFSET(0x1C7B5E90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRelicCocoonCollection___c__DisplayClass10_0_TypeDefinitionIndex = 67766;

	class RogueTournRelicCocoonCollection___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 cocoonId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCocoonDataByID_b__0(::RPG::Client::RogueTournRelicCocoonData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournRelicCocoonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__DISPLAYCLASS10_0__GETCOCOONDATABYID_B__0_OFFSET))(this, a1);
		}
	};
}
