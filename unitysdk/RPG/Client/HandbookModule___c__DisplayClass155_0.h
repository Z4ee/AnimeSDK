#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HandbookModule; }

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS155_0__ADDGRIDFIGHTSCOREREWARDDATATIMER_B__0_OFFSET UNITYSDK_OFFSET(0xD3AEFF0)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS155_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD3AC1D0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass155_0_TypeDefinitionIndex = 65697;

	class HandbookModule___c__DisplayClass155_0 : public ::System::Object
	{
	public:
		::RPG::Client::HandbookModule* __4__this; // 0x10
		::System::Int64 endTimeStamp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS155_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddGridFightScoreRewardDataTimer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS155_0__ADDGRIDFIGHTSCOREREWARDDATATIMER_B__0_OFFSET))(this);
		}
	};
}
