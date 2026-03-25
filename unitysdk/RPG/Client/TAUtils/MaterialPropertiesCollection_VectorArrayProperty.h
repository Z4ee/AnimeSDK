#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/MaterialPropertiesCollection_Property_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORARRAYPROPERTY_METHOD_3_64C8CF167B1D4401_OFFSET UNITYSDK_OFFSET(0xA535260)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORARRAYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xA533380)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_VectorArrayProperty_TypeDefinitionIndex = 60345;

	class MaterialPropertiesCollection_VectorArrayProperty : public ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property_1<::Il2CppArray<::UnityEngine::Vector4>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORARRAYPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_64C8CF167B1D4401(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORARRAYPROPERTY_METHOD_3_64C8CF167B1D4401_OFFSET))(this, a1);
		}
	};
}
