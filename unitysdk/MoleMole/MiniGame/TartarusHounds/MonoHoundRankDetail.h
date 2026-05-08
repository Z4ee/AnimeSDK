#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL_INITNAMEVIEW_OFFSET UNITYSDK_OFFSET(0x1781C500)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1781CAD0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL_SWITCHACCOUNTNAMEINFO_OFFSET UNITYSDK_OFFSET(0x1781C480)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1781CDA0)

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int MonoHoundRankDetail_TypeDefinitionIndex = 67850;

	class MonoHoundRankDetail : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Extension::UILocalizationText* nameText; // 0x18
		::UnityEngine::UI::Image* pcIcon; // 0x20
		::UnityEngine::UI::Extension::UILocalizationText* consoleNameText; // 0x28
		::UnityEngine::UI::Image* consoleIcon; // 0x30
		::UnityEngine::UI::Extension::UILocalizationText* timeText; // 0x38
		::UnityEngine::GameObject* myRim; // 0x40
		::System::Boolean Field_5_6; // 0x48
		::UnityEngine::UI::Extension::UILocalizationText* Field_5_7; // 0x50
		::System::String* Field_5_8; // 0x58
		::System::String* Field_5_9; // 0x60
		::System::Boolean Field_5_10; // 0x68
		::Foundation::AssetRequestHandle Field_5_11; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL__CTOR_OFFSET))(this);
		}

		::System::Void SwitchAccountNameInfo(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL_SWITCHACCOUNTNAMEINFO_OFFSET))(this, a1);
		}

		::System::Void InitNameView(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL_INITNAMEVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL_ONDESTROY_OFFSET))(this);
		}
	};
}
