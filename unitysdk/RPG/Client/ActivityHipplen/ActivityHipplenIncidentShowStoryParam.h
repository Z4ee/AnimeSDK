#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWSTORYPARAM_GET_DIALOGID_OFFSET UNITYSDK_OFFSET(0x9AECF60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWSTORYPARAM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9AECF50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWSTORYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9AECF70)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentShowStoryParam_TypeDefinitionIndex = 69615;

	class ActivityHipplenIncidentShowStoryParam : public ::System::Object
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x10
		::System::UInt32 _DialogID_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* imagePath, ::System::UInt32 dialogID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWSTORYPARAM__CTOR_OFFSET))(this, imagePath, dialogID);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWSTORYPARAM_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::UInt32 get_DialogID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWSTORYPARAM_GET_DIALOGID_OFFSET))(this);
		}
	};
}
