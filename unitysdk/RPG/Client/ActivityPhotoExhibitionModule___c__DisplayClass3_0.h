#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPhotoExhibitionGroupData; }

#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F93D80)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__DISPLAYCLASS3_0__GETGROUPDATA_B__0_OFFSET UNITYSDK_OFFSET(0x8F94D90)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPhotoExhibitionModule___c__DisplayClass3_0_TypeDefinitionIndex = 50089;

	class ActivityPhotoExhibitionModule___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetGroupData_b__0(::RPG::Client::ActivityPhotoExhibitionGroupData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPhotoExhibitionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__DISPLAYCLASS3_0__GETGROUPDATA_B__0_OFFSET))(this, x);
		}
	};
}
