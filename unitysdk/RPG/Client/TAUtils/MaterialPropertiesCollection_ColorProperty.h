#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/MaterialPropertiesCollection_Property_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORPROPERTY_METHOD_3_3B01BE9C2045A2D8_OFFSET UNITYSDK_OFFSET(0xA534E70)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xA532D90)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_ColorProperty_TypeDefinitionIndex = 60339;

	class MaterialPropertiesCollection_ColorProperty : public ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property_1<::UnityEngine::Color>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_3B01BE9C2045A2D8(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORPROPERTY_METHOD_3_3B01BE9C2045A2D8_OFFSET))(this, a1);
		}
	};
}
