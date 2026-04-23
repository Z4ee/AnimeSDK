#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HandbookGrowthGuideEquipmentDataItem; }

#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E61F0)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__DISPLAYCLASS3_0__GETRECOMMENDPERCENTAGEBYGUIDEID_B__0_OFFSET UNITYSDK_OFFSET(0xA5E6200)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__DISPLAYCLASS3_0__GETRECOMMENDPERCENTAGEBYGUIDEID_B__1_OFFSET UNITYSDK_OFFSET(0xA5E6220)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideData___c__DisplayClass3_0_TypeDefinitionIndex = 60415;

	class HandbookGrowthGuideData___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 guideID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRecommendPercentageByGuideID_b__0(::RPG::Client::HandbookGrowthGuideEquipmentDataItem* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideEquipmentDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__DISPLAYCLASS3_0__GETRECOMMENDPERCENTAGEBYGUIDEID_B__0_OFFSET))(this, item);
		}

		::System::Boolean _GetRecommendPercentageByGuideID_b__1(::RPG::Client::HandbookGrowthGuideEquipmentDataItem* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::HandbookGrowthGuideEquipmentDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__DISPLAYCLASS3_0__GETRECOMMENDPERCENTAGEBYGUIDEID_B__1_OFFSET))(this, item);
		}
	};
}
