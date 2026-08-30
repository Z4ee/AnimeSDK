#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/MaterialPropertiesCollection_Property_1.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_FLOATARRAYPROPERTY_METHOD_3_64C8CF167B1D4401_OFFSET UNITYSDK_OFFSET(0xE14ED20)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_FLOATARRAYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xE14CAF0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_FloatArrayProperty_TypeDefinitionIndex = 73518;

	class MaterialPropertiesCollection_FloatArrayProperty : public ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property_1<::Il2CppArray<::System::Single>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_FLOATARRAYPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_64C8CF167B1D4401(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_FLOATARRAYPROPERTY_METHOD_3_64C8CF167B1D4401_OFFSET))(this, a1);
		}
	};
}
