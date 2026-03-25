#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityTelevisionData; }

#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x90167B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__DISPLAYCLASS11_0__GETALLTELEVISIONDATABYSEASON_B__0_OFFSET UNITYSDK_OFFSET(0x9019EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionModule___c__DisplayClass11_0_TypeDefinitionIndex = 50335;

	class ActivityTelevisionModule___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::UInt32 season; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllTelevisionDataBySeason_b__0(::RPG::Client::ActivityTelevisionData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityTelevisionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONMODULE___C__DISPLAYCLASS11_0__GETALLTELEVISIONDATABYSEASON_B__0_OFFSET))(this, data);
		}
	};
}
