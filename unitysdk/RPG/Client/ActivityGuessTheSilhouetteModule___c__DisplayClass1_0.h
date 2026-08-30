#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityGuessTheSilhouetteData; }

#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC535E20)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS1_0__GETACTIVITYGUESSTHESILHOUETTEDISPLAYDATA_B__0_OFFSET UNITYSDK_OFFSET(0xC535E30)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityGuessTheSilhouetteModule___c__DisplayClass1_0_TypeDefinitionIndex = 61614;

	class ActivityGuessTheSilhouetteModule___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetActivityGuessTheSilhouetteDisplayData_b__0(::RPG::Client::ActivityGuessTheSilhouetteData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS1_0__GETACTIVITYGUESSTHESILHOUETTEDISPLAYDATA_B__0_OFFSET))(this, a1);
		}
	};
}
