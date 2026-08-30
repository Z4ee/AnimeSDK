#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSROBOTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1AC977E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSROBOTDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1AC977D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSROBOTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AC977B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSROBOTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AC977C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSROBOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC97750)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersRobotData_TypeDefinitionIndex = 78559;

	class TeamTowersRobotData : public ::System::Object
	{
	public:
		::System::String* _HeadIconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _Desc_k__BackingField; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSROBOTDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSROBOTDATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSROBOTDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSROBOTDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSROBOTDATA_GET_DESC_OFFSET))(this);
		}
	};
}
