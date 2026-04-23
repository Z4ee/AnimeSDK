#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityAetherDivideData; }
namespace RPG::Client { class ActivityAetherDivideModuleRedDotFilter; }

#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA7300)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER___C__DISPLAYCLASS35_0___RECONSTRUCTTYPEGROUPIDLIST_B__0_OFFSET UNITYSDK_OFFSET(0x9AA7810)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityAetherDivideModuleRedDotFilter___c__DisplayClass35_0_TypeDefinitionIndex = 61528;

	class ActivityAetherDivideModuleRedDotFilter___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAetherDivideModuleRedDotFilter* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ReConstructTypeGroupIdList_b__0(::RPG::Client::ActivityAetherDivideData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityAetherDivideData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER___C__DISPLAYCLASS35_0___RECONSTRUCTTYPEGROUPIDLIST_B__0_OFFSET))(this, item);
		}
	};
}
