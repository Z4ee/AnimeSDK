#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateHouguDataItem; }

#define RPG_CLIENT_FATEHOUGUINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA352880)
#define RPG_CLIENT_FATEHOUGUINFO___C__DISPLAYCLASS5_0__REMOVEHOUGU_B__0_OFFSET UNITYSDK_OFFSET(0xA3528B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguInfo___c__DisplayClass5_0_TypeDefinitionIndex = 58947;

	class FateHouguInfo___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 uniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveHougu_b__0(::RPG::Client::FateHouguDataItem* hougu)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateHouguDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO___C__DISPLAYCLASS5_0__REMOVEHOUGU_B__0_OFFSET))(this, hougu);
		}
	};
}
