#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/MaterialPropertiesCollection_Property_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_MATRIXARRAYPROPERTY_METHOD_3_64C8CF167B1D4401_OFFSET UNITYSDK_OFFSET(0xE14EE80)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_MATRIXARRAYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xE14CF10)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_MatrixArrayProperty_TypeDefinitionIndex = 73521;

	class MaterialPropertiesCollection_MatrixArrayProperty : public ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property_1<::Il2CppArray<::UnityEngine::Matrix4x4>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_MATRIXARRAYPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_64C8CF167B1D4401(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_MATRIXARRAYPROPERTY_METHOD_3_64C8CF167B1D4401_OFFSET))(this, a1);
		}
	};
}
