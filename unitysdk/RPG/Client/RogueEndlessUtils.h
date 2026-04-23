#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUEENDLESSUTILS_GETRECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0xB02FAA0)
#define RPG_CLIENT_ROGUEENDLESSUTILS_ISAREAAVAILABLEREWARD_OFFSET UNITYSDK_OFFSET(0xB0315D0)
#define RPG_CLIENT_ROGUEENDLESSUTILS_ISAREASEEN_OFFSET UNITYSDK_OFFSET(0xB02DF00)
#define RPG_CLIENT_ROGUEENDLESSUTILS_RECORDAREASEEN_OFFSET UNITYSDK_OFFSET(0xB031500)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessUtils_TypeDefinitionIndex = 62151;

	class RogueEndlessUtils : public ::System::Object
	{
	public:
		static ::System::Void RecordAreaSeen(::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSUTILS_RECORDAREASEEN_OFFSET))(areaID);
		}

		static ::System::Boolean IsAreaSeen(::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSUTILS_ISAREASEEN_OFFSET))(areaID);
		}

		static ::System::Boolean IsAreaAvailableReward(::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSUTILS_ISAREAAVAILABLEREWARD_OFFSET))(areaID);
		}

		static ::System::UInt32 GetRecommendLevel(::System::UInt32 areaID, ::System::Nullable_1<::System::UInt32> worldLevel)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSUTILS_GETRECOMMENDLEVEL_OFFSET))(areaID, worldLevel);
		}
	};
}
