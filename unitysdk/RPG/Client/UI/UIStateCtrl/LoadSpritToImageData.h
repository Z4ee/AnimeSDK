#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WeakAssetReference.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITTOIMAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE2040)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int LoadSpritToImageData_TypeDefinitionIndex = 70653;

	class LoadSpritToImageData : public ::System::Object
	{
	public:
		::RPG::Client::WeakAssetReference SpriteReference; // 0x10
		::UnityEngine::UI::Image* Image; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITTOIMAGEDATA__CTOR_OFFSET))(this);
		}
	};
}
