#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GETNODEICON_OFFSET UNITYSDK_OFFSET(0x1B91C9B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1B91C920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B91C910)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B91C930)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_NODEICON_OFFSET UNITYSDK_OFFSET(0x1B91C900)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B91C940)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBossData_TypeDefinitionIndex = 74845;

	class IdleLiveBossData : public ::System::Object
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x10
		::System::String* _NodeIcon_k__BackingField; // 0x18
		::RPG::Client::TextID _Desc_k__BackingField; // 0x20
		::RPG::Client::TextID _Name_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_NodeIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_NODEICON_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* GetNodeIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GETNODEICON_OFFSET))(this);
		}
	};
}
