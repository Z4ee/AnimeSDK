#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateHouguDataItem; }

#define RPG_CLIENT_FATEHOUGUINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCF53E70)
#define RPG_CLIENT_FATEHOUGUINFO___C__DISPLAYCLASS5_0__REMOVEHOUGU_B__0_OFFSET UNITYSDK_OFFSET(0xCF53F00)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguInfo___c__DisplayClass5_0_TypeDefinitionIndex = 64143;

	class FateHouguInfo___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 uniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveHougu_b__0(::RPG::Client::FateHouguDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateHouguDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHOUGUINFO___C__DISPLAYCLASS5_0__REMOVEHOUGU_B__0_OFFSET))(this, a1);
		}
	};
}
