#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Texture2D; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMELUTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1306A990)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameLutParams_TypeDefinitionIndex = 42221;

	class GalGameLutParams : public ::System::Object
	{
	public:
		::System::Boolean useLookupTable; // 0x10
		::UnityEngine::Texture2D* lookupTable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMELUTPARAMS__CTOR_OFFSET))(this);
		}
	};
}
