#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityGuessTheSilhouetteData; }

#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F0BEE0)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS2_0__GETACTIVITYGUESSTHESILHOUETTEDATABYMAINMISSIONID_B__0_OFFSET UNITYSDK_OFFSET(0x8F0F840)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityGuessTheSilhouetteModule___c__DisplayClass2_0_TypeDefinitionIndex = 49917;

	class ActivityGuessTheSilhouetteModule___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 mainMissionId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetActivityGuessTheSilhouetteDataByMainMissionId_b__0(::RPG::Client::ActivityGuessTheSilhouetteData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityGuessTheSilhouetteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEMODULE___C__DISPLAYCLASS2_0__GETACTIVITYGUESSTHESILHOUETTEDATABYMAINMISSIONID_B__0_OFFSET))(this, item);
		}
	};
}
