#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::TartarusHounds::View { class SandBlockView; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME_GRIDPAGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x10D5A190)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME_GRIDPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D5A230)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ViewEntityGame_GridPage_TypeDefinitionIndex = 74712;

	class ViewEntityGame_GridPage : public ::System::Object
	{
	public:
		::UnityEngine::Transform* pageRoot; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::MiniGame::TartarusHounds::View::ViewEntityBlock*>* pageGrids; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::MiniGame::TartarusHounds::View::SandBlockView*>* levelGapGrids; // 0x20
		::System::Int32 levelId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME_GRIDPAGE__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYGAME_GRIDPAGE_CLEAR_OFFSET))(this);
		}
	};
}
