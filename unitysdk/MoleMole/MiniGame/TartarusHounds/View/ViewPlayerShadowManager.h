#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C791B68CB2A5BF5;
class Class_1_517618AF9F81A011;
class Class_1_79AA2B696DC59679;
namespace MoleMole { class TextureSheetData; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityPlayer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x10BC9AC0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x10BC96E0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_OPEN_OFFSET UNITYSDK_OFFSET(0x10BC9970)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_SETTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x10BC9D80)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x10BC9C10)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC9F30)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ViewPlayerShadowManager_TypeDefinitionIndex = 43648;

	class ViewPlayerShadowManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_79AA2B696DC59679*>* ctrls; // 0x10
		::System::Int32 maxShadow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer* parentCtrl, ::UnityEngine::Transform* oriTrans, ::Class_1_0C791B68CB2A5BF5* resourceProxy, ::Class_1_517618AF9F81A011* logicGame, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gos, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer*, ::UnityEngine::Transform*, ::Class_1_0C791B68CB2A5BF5*, ::Class_1_517618AF9F81A011*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_INIT_OFFSET))(this, parentCtrl, oriTrans, resourceProxy, logicGame, gos, startIndex);
		}

		::System::Void Open()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_OPEN_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_CLOSE_OFFSET))(this);
		}

		::System::Void Update(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_UPDATE_OFFSET))(this, dt);
		}

		::System::Void SetTextureSheetData(::MoleMole::TextureSheetData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_SETTEXTURESHEETDATA_OFFSET))(this, data);
		}
	};
}
