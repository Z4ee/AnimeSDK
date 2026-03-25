#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESHAREUTILS_GETGAMECONFIGPATH_1_OFFSET UNITYSDK_OFFSET(0x16753200)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESHAREUTILS_GETGAMECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x16753170)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameShareUtils_TypeDefinitionIndex = 28823;

	class LittleGameShareUtils : public ::System::Object
	{
	public:
		static ::System::String* GetGameConfigPath(::RPG::GameCore::LittleGameType gameType)
		{
			return ((::System::String*(*)(::RPG::GameCore::LittleGameType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESHAREUTILS_GETGAMECONFIGPATH_OFFSET))(gameType);
		}

		static ::System::String* GetGameConfigPath_1(::System::String* gameTypeName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESHAREUTILS_GETGAMECONFIGPATH_1_OFFSET))(gameTypeName);
		}
	};
}
