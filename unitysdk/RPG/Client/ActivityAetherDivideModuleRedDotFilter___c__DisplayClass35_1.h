#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityAetherDivideData; }
namespace RPG::Client { class ActivityAetherDivideModuleRedDotFilter; }

#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER___C__DISPLAYCLASS35_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD0EAB0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER___C__DISPLAYCLASS35_1___RECONSTRUCTTYPEGROUPIDLIST_B__1_OFFSET UNITYSDK_OFFSET(0x1AD0F030)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityAetherDivideModuleRedDotFilter___c__DisplayClass35_1_TypeDefinitionIndex = 66819;

	class ActivityAetherDivideModuleRedDotFilter___c__DisplayClass35_1 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAetherDivideModuleRedDotFilter* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER___C__DISPLAYCLASS35_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __ReConstructTypeGroupIdList_b__1(::RPG::Client::ActivityAetherDivideData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityAetherDivideData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER___C__DISPLAYCLASS35_1___RECONSTRUCTTYPEGROUPIDLIST_B__1_OFFSET))(this, a1);
		}
	};
}
