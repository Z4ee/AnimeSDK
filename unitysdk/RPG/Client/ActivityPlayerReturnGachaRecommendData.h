#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPlayerReturnRecommendData.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class BaseGachaPoolData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA_GETUPAVATARID_OFFSET UNITYSDK_OFFSET(0x1B8609E0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA_GET_GACHAID_OFFSET UNITYSDK_OFFSET(0x1B860AE0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA_GET_GACHAPOOLDATA_OFFSET UNITYSDK_OFFSET(0x1B860900)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1B860B30)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1B860BC0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B860820)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B85DD80)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnGachaRecommendData_TypeDefinitionIndex = 61968;

	class ActivityPlayerReturnGachaRecommendData : public ::RPG::Client::ActivityPlayerReturnRecommendData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA_ISAVAILABLE_OFFSET))(this);
		}

		::System::UInt32 GetUpAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA_GETUPAVATARID_OFFSET))(this);
		}

		::System::UInt32 get_GachaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA_GET_GACHAID_OFFSET))(this);
		}

		::RPG::Client::BaseGachaPoolData* get_GachaPoolData()
		{
			return ((::RPG::Client::BaseGachaPoolData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA_GET_GACHAPOOLDATA_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNGACHARECOMMENDDATA_GET_TITLE_OFFSET))(this);
		}
	};
}
