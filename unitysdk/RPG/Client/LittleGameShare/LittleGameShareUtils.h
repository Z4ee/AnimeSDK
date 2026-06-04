#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameType.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESHAREUTILS_EVALUATEOPERATION_OFFSET UNITYSDK_OFFSET(0x18B8D820)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESHAREUTILS_GETGAMECONFIGPATH_1_OFFSET UNITYSDK_OFFSET(0x18B8D770)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESHAREUTILS_GETGAMECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x18B75050)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameShareUtils_TypeDefinitionIndex = 34837;

	class LittleGameShareUtils : public ::System::Object
	{
	public:
		static ::System::String* GetGameConfigPath(::RPG::GameCore::LittleGameType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::LittleGameType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESHAREUTILS_GETGAMECONFIGPATH_OFFSET))(a1);
		}

		static ::System::String* GetGameConfigPath_1(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESHAREUTILS_GETGAMECONFIGPATH_1_OFFSET))(a1);
		}

		static ::System::Boolean EvaluateOperation(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::LogicOperationType a3)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Boolean, ::RPG::GameCore::LogicOperationType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESHAREUTILS_EVALUATEOPERATION_OFFSET))(a1, a2, a3);
		}
	};
}
