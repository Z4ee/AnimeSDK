#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournRelicCocoonData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA3CD240)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__DISPLAYCLASS18_0___CHECKISCOCOONDATAAVAILABLE_B__0_OFFSET UNITYSDK_OFFSET(0xA3CD330)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRelicCocoonCollection___c__DisplayClass18_0_TypeDefinitionIndex = 55275;

	class RogueTournRelicCocoonCollection___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::Client::RogueTournRelicCocoonData*>* __9__0; // 0x10
		::RPG::Client::RogueTournRelicCocoonData* cocoonData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckIsCocoonDataAvailable_b__0(::RPG::Client::RogueTournRelicCocoonData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournRelicCocoonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__DISPLAYCLASS18_0___CHECKISCOCOONDATAAVAILABLE_B__0_OFFSET))(this, item);
		}
	};
}
