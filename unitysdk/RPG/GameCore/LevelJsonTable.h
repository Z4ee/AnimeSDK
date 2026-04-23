#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelGraphConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELJSONTABLE_GETLEVELGRAPHCONFIGBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xB6DD220)
#define RPG_GAMECORE_LEVELJSONTABLE_GETLEVELGRAPHPERFORMANCEGENDERINFO_OFFSET UNITYSDK_OFFSET(0xB6DD340)
#define RPG_GAMECORE_LEVELJSONTABLE_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xB6DD100)
#define RPG_GAMECORE_LEVELJSONTABLE_LOADLEVELGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0xB6DD180)
#define RPG_GAMECORE_LEVELJSONTABLE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0xB6DD140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelJsonTable_TypeDefinitionIndex = 52093;

	class LevelJsonTable : public ::System::Object
	{
	public:
		static ::System::Void LoadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELJSONTABLE_LOADALLCONFIG_OFFSET))();
		}

		static ::System::Void UnloadAllConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELJSONTABLE_UNLOADALLCONFIG_OFFSET))();
		}

		static ::RPG::GameCore::LevelGraphConfig* LoadLevelGraphConfig(::System::String* sPath)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELJSONTABLE_LOADLEVELGRAPHCONFIG_OFFSET))(sPath);
		}

		static ::RPG::GameCore::LevelGraphConfig* GetLevelGraphConfigByStageID(::System::UInt32 stageID)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELJSONTABLE_GETLEVELGRAPHCONFIGBYSTAGEID_OFFSET))(stageID);
		}

		static ::System::String* GetLevelGraphPerformanceGenderInfo(::System::String* sPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELJSONTABLE_GETLEVELGRAPHPERFORMANCEGENDERINFO_OFFSET))(sPath);
		}
	};
}
