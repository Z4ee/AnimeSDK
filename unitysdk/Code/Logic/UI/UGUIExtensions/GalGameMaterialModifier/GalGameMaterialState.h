#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EB156F7324B25C9E.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameFogParams; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameLutParams; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameTextureBlendParams; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x155851B0)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameMaterialState_TypeDefinitionIndex = 41708;

	class GalGameMaterialState : public ::System::Object
	{
	public:
		::Enum_3_EB156F7324B25C9E timeOfDay; // 0x10
		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameFogParams* fog; // 0x18
		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameLutParams* lut; // 0x20
		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameTextureBlendParams* textureBlend; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALSTATE__CTOR_OFFSET))(this);
		}
	};
}
