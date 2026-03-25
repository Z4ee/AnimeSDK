#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RELICRECOMMENDSUITDATA_GETMATCHPERCENT_OFFSET UNITYSDK_OFFSET(0xA2AD1C0)
#define RPG_CLIENT_RELICRECOMMENDSUITDATA_ISMATCH_OFFSET UNITYSDK_OFFSET(0xA2ACC80)
#define RPG_CLIENT_RELICRECOMMENDSUITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2AB890)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicRecommendSuitData_TypeDefinitionIndex = 54361;

	class RelicRecommendSuitData : public ::System::Object
	{
	public:
		::System::UInt32 SetID2; // 0x10
		::System::UInt32 Percent; // 0x14
		::System::UInt32 SetID1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDSUITDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::UInt32 setID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDSUITDATA_ISMATCH_OFFSET))(this, setID);
		}

		::System::UInt32 GetMatchPercent(::System::UInt32 setID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDSUITDATA_GETMATCHPERCENT_OFFSET))(this, setID);
		}
	};
}
