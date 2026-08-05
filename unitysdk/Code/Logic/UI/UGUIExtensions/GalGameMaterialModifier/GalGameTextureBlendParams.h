#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C9C7B99E2075DA03.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Texture2D; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMETEXTUREBLENDPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1948F190)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameTextureBlendParams_TypeDefinitionIndex = 52375;

	class GalGameTextureBlendParams : public ::System::Object
	{
	public:
		::System::Boolean useTextureBlend; // 0x10
		::UnityEngine::Color textureColor; // 0x14
		::UnityEngine::Texture2D* textureBlendTex; // 0x28
		::Enum_3_C9C7B99E2075DA03 textureBlendMode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMETEXTUREBLENDPARAMS__CTOR_OFFSET))(this);
		}
	};
}
