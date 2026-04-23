#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlayerReturnRecommendType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PlayerReturnRecommendConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9C521B0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9C52180)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9C48B30)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x9C48700)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9C40250)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9C40150)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnRecommendData_TypeDefinitionIndex = 57082;

	class ActivityPlayerReturnRecommendData : public ::System::Object
	{
	public:
		::RPG::GameCore::PlayerReturnRecommendConfigRow* Row; // 0x10
		::System::UInt32 RecommendID; // 0x18

		::System::Void _ctor(::System::UInt32 recommendID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNRECOMMENDDATA__CTOR_OFFSET))(this, recommendID);
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
