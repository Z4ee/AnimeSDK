#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityGuessTheSilhouetteModule; }
namespace RPG::Client { class ActivityGuessTheSilhouetteRedDotFilter; }
namespace RPG::Client { class MainMissionData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEREDDOTFILTER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B798A10)
#define RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEREDDOTFILTER___C__DISPLAYCLASS6_0__UPDATECANTAKEREWARDREDDOT_B__0_OFFSET UNITYSDK_OFFSET(0x1B799910)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityGuessTheSilhouetteRedDotFilter___c__DisplayClass6_0_TypeDefinitionIndex = 66822;

	class ActivityGuessTheSilhouetteRedDotFilter___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityGuessTheSilhouetteModule* module; // 0x10
		::RPG::Client::ActivityGuessTheSilhouetteRedDotFilter* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEREDDOTFILTER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateCanTakeRewardRedDot_b__0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYGUESSTHESILHOUETTEREDDOTFILTER___C__DISPLAYCLASS6_0__UPDATECANTAKEREWARDREDDOT_B__0_OFFSET))(this, a1);
		}
	};
}
