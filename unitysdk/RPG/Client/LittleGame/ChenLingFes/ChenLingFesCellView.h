#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesView.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESCELLVIEW_SETLOCKHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xBDD44D0)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESCELLVIEW_SETPLACEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xBDD4630)
#define RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESCELLVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD4730)

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesCellView_TypeDefinitionIndex = 72306;

	class ChenLingFesCellView : public ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesView
	{
	public:
		::UnityEngine::GameObject* EnterEffect; // 0x58
		::UnityEngine::Renderer* MaskRenderer; // 0x60
		::UnityEngine::Texture* HighlightTexture; // 0x68
		::UnityEngine::GameObject* HighlightEffect; // 0x70
		::UnityEngine::Texture* DarkTexture; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESCELLVIEW__CTOR_OFFSET))(this);
		}

		::System::Void SetLockHighlight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESCELLVIEW_SETLOCKHIGHLIGHT_OFFSET))(this, a1);
		}

		::System::Void SetPlaceHighlight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLINGFES_CHENLINGFESCELLVIEW_SETPLACEHIGHLIGHT_OFFSET))(this, a1);
		}
	};
}
