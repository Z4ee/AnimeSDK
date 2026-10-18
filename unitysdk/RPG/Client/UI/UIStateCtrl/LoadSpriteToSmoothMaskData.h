#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WeakAssetReference.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE33FF50)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int LoadSpriteToSmoothMaskData_TypeDefinitionIndex = 74051;

	class LoadSpriteToSmoothMaskData : public ::System::Object
	{
	public:
		::RPG::Client::WeakAssetReference SpriteReference; // 0x10
		::UnityEngine::UI::SmoothMask* SmoothMask; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_LOADSPRITETOSMOOTHMASKDATA__CTOR_OFFSET))(this);
		}
	};
}
