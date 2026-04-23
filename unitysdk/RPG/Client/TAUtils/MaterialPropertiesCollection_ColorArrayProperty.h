#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/MaterialPropertiesCollection_Property_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORARRAYPROPERTY_METHOD_3_64C8CF167B1D4401_OFFSET UNITYSDK_OFFSET(0xB271F60)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORARRAYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xB2710A0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_ColorArrayProperty_TypeDefinitionIndex = 67764;

	class MaterialPropertiesCollection_ColorArrayProperty : public ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property_1<::Il2CppArray<::UnityEngine::Color>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORARRAYPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_64C8CF167B1D4401(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORARRAYPROPERTY_METHOD_3_64C8CF167B1D4401_OFFSET))(this, a1);
		}
	};
}
