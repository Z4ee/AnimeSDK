#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_GUESSTHESILHOUETTEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x18FC4F40)
#define RPG_CLIENT_GUESSTHESILHOUETTEACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET UNITYSDK_OFFSET(0x18FC4F00)
#define RPG_CLIENT_GUESSTHESILHOUETTEACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC4EF0)
#define RPG_CLIENT_GUESSTHESILHOUETTEACTIVITYDATA__ISCUSTOMREDDOTSHOW_OFFSET UNITYSDK_OFFSET(0x18FC4FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GuessTheSilhouetteActivityData_TypeDefinitionIndex = 58888;

	class GuessTheSilhouetteActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GUESSTHESILHOUETTEACTIVITYDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateFullCompleteStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GUESSTHESILHOUETTEACTIVITYDATA_UPDATEFULLCOMPLETESTATUS_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GUESSTHESILHOUETTEACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsCustomRedDotShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GUESSTHESILHOUETTEACTIVITYDATA__ISCUSTOMREDDOTSHOW_OFFSET))(this);
		}
	};
}
