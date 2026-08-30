#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityTelevisionData; }

#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1963F9B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__DISPLAYCLASS25_0__GETTELEVISIONDATABYMAPPINGINFOID_B__0_OFFSET UNITYSDK_OFFSET(0x19641320)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionModule___c__DisplayClass25_0_TypeDefinitionIndex = 62086;

	class ActivityTelevisionModule___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::UInt32 mappingInfoID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTelevisionDataByMappingInfoID_b__0(::RPG::Client::ActivityTelevisionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityTelevisionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__DISPLAYCLASS25_0__GETTELEVISIONDATABYMAPPINGINFOID_B__0_OFFSET))(this, a1);
		}
	};
}
