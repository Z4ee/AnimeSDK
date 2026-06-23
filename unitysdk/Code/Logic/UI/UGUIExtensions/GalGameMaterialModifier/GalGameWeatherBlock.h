#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C3928EA7A52D68C3.h"
#include "unitysdk/Enum_3_EB156F7324B25C9E.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameMaterialState; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEWEATHERBLOCK_METHOD_1_227EC764FA155615_OFFSET UNITYSDK_OFFSET(0x1A24E870)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEWEATHERBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A24E860)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameWeatherBlock_TypeDefinitionIndex = 57604;

	class GalGameWeatherBlock : public ::System::Object
	{
	public:
		::Enum_3_C3928EA7A52D68C3 weatherType; // 0x10
		::Il2CppArray<::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialState*>* states; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEWEATHERBLOCK__CTOR_OFFSET))(this);
		}

		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialState* Method_1_227EC764FA155615(::Enum_3_EB156F7324B25C9E a1)
		{
			return ((::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialState*(*)(::PVOID, ::Enum_3_EB156F7324B25C9E))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEWEATHERBLOCK_METHOD_1_227EC764FA155615_OFFSET))(this, a1);
		}
	};
}
