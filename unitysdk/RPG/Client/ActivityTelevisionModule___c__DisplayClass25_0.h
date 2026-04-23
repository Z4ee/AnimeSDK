#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityTelevisionData; }

#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9C75550)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__DISPLAYCLASS25_0__GETTELEVISIONDATABYMAPPINGINFOID_B__0_OFFSET UNITYSDK_OFFSET(0x9C770E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionModule___c__DisplayClass25_0_TypeDefinitionIndex = 57195;

	class ActivityTelevisionModule___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::UInt32 mappingInfoID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTelevisionDataByMappingInfoID_b__0(::RPG::Client::ActivityTelevisionData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityTelevisionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__DISPLAYCLASS25_0__GETTELEVISIONDATABYMAPPINGINFOID_B__0_OFFSET))(this, data);
		}
	};
}
