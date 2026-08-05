#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0D4B4448C1FD8536.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEFILTERMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19F84B90)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameFilterMaterial_TypeDefinitionIndex = 52321;

	class GalGameFilterMaterial : public ::System::Object
	{
	public:
		::Enum_3_0D4B4448C1FD8536 filterType; // 0x10
		::UnityEngine::Material* material; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEFILTERMATERIAL__CTOR_OFFSET))(this);
		}
	};
}
