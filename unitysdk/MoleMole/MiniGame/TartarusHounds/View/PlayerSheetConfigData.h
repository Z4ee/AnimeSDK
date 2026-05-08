#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/Direction.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/HoundPlayerMainStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1175BBF0)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int PlayerSheetConfigData_TypeDefinitionIndex = 49914;

	class PlayerSheetConfigData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::MiniGame::TartarusHounds::Direction, ::System::Collections::Generic::List_1<::System::String*>*>* subDict; // 0x10
		::System::Boolean onlyHorizontal; // 0x18
		::System::Boolean needSkipToNext; // 0x19
		::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus nextStatus; // 0x1C
		::System::Boolean isEndLoop; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_PLAYERSHEETCONFIGDATA__CTOR_OFFSET))(this);
		}
	};
}
