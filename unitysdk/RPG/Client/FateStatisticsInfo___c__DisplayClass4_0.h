#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_FATESTATISTICSINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96A0480)
#define RPG_CLIENT_FATESTATISTICSINFO___C__DISPLAYCLASS4_0___SYNCDIFFICULTYINFO_B__3_OFFSET UNITYSDK_OFFSET(0x96A07B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsInfo___c__DisplayClass4_0_TypeDefinitionIndex = 52050;

	class FateStatisticsInfo___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 difficulty; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::String* __SyncDifficultyInfo_b__3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO___C__DISPLAYCLASS4_0___SYNCDIFFICULTYINFO_B__3_OFFSET))(this);
		}
	};
}
