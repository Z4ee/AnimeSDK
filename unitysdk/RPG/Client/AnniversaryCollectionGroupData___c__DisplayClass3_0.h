#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AnniversaryCollectionPanelData; }

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D2AF00)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA___C__DISPLAYCLASS3_0__GETPANELDATABYID_B__0_OFFSET UNITYSDK_OFFSET(0x9D2B210)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionGroupData___c__DisplayClass3_0_TypeDefinitionIndex = 57572;

	class AnniversaryCollectionGroupData___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPanelDataByID_b__0(::RPG::Client::AnniversaryCollectionPanelData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONGROUPDATA___C__DISPLAYCLASS3_0__GETPANELDATABYID_B__0_OFFSET))(this, data);
		}
	};
}
