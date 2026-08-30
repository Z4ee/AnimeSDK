#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelGraphConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELJSONTABLE_GETLEVELGRAPHCONFIGBYSTAGEID_OFFSET UNITYSDK_OFFSET(0x1DD29100)
#define RPG_GAMECORE_LEVELJSONTABLE_GETLEVELGRAPHPERFORMANCEGENDERINFO_OFFSET UNITYSDK_OFFSET(0x1DD29220)
#define RPG_GAMECORE_LEVELJSONTABLE_LOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x1DD28FE0)
#define RPG_GAMECORE_LEVELJSONTABLE_LOADLEVELGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0x1DD29060)
#define RPG_GAMECORE_LEVELJSONTABLE_UNLOADALLCONFIG_OFFSET UNITYSDK_OFFSET(0x1DD29020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelJsonTable_TypeDefinitionIndex = 56699;

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

		static ::RPG::GameCore::LevelGraphConfig* LoadLevelGraphConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELJSONTABLE_LOADLEVELGRAPHCONFIG_OFFSET))(a1);
		}

		static ::RPG::GameCore::LevelGraphConfig* GetLevelGraphConfigByStageID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELJSONTABLE_GETLEVELGRAPHCONFIGBYSTAGEID_OFFSET))(a1);
		}

		static ::System::String* GetLevelGraphPerformanceGenderInfo(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELJSONTABLE_GETLEVELGRAPHPERFORMANCEGENDERINFO_OFFSET))(a1);
		}
	};
}
