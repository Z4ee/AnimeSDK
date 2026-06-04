#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWSTORYPARAM_GET_DIALOGID_OFFSET UNITYSDK_OFFSET(0xB0D13F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWSTORYPARAM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB0D13E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWSTORYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D1400)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentShowStoryParam_TypeDefinitionIndex = 70427;

	class ActivityHipplenIncidentShowStoryParam : public ::System::Object
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x10
		::System::UInt32 _DialogID_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWSTORYPARAM__CTOR_OFFSET))(this, a1, a2);
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
