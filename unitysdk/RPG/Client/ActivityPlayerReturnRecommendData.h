#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlayerReturnRecommendType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlayerReturnRecommendConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xC67E370)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xC67E300)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC673A90)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0xC673540)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0xC67E2C0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC66A020)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnRecommendData_TypeDefinitionIndex = 61970;

	class ActivityPlayerReturnRecommendData : public ::System::Object
	{
	public:
		::RPG::GameCore::PlayerReturnRecommendConfigRow* Row; // 0x10
		::System::UInt32 RecommendID; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_ISAVAILABLE_OFFSET))(this);
		}

		::RPG::GameCore::PlayerReturnRecommendType get_Type()
		{
			return ((::RPG::GameCore::PlayerReturnRecommendType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::UInt32 get_Weight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_GET_WEIGHT_OFFSET))(this);
		}
	};
}
