#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/MaterialPropertiesCollection_Property_1.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_TEXTUREPROPERTY_METHOD_3_3B01BE9C2045A2D8_OFFSET UNITYSDK_OFFSET(0xB272360)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_TEXTUREPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xB270B50)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_TextureProperty_TypeDefinitionIndex = 67759;

	class MaterialPropertiesCollection_TextureProperty : public ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property_1<::UnityEngine::Texture*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_TEXTUREPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_3B01BE9C2045A2D8(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_TEXTUREPROPERTY_METHOD_3_3B01BE9C2045A2D8_OFFSET))(this, a1);
		}
	};
}
