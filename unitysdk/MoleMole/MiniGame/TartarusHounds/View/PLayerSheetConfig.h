#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/HoundPlayerAddedTextureStatus.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/HoundPlayerMainStatus.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::MiniGame::TartarusHounds::View { class PlayerExtraSheetConfigData; }
namespace MoleMole::MiniGame::TartarusHounds::View { class PlayerSheetConfigData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x161F76A0)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int PLayerSheetConfig_TypeDefinitionIndex = 69793;

	class PLayerSheetConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerSheetConfigData*>* playerSheetConfig; // 0x58
		::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::HoundPlayerAddedTextureStatus, ::MoleMole::MiniGame::TartarusHounds::View::PlayerExtraSheetConfigData*>* playerAddedSheetConfig; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIG__CTOR_OFFSET))(this);
		}
	};
}
