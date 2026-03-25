#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/MaterialPropertiesCollection_Property_1.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERIDPROPERTY_METHOD_3_3B01BE9C2045A2D8_OFFSET UNITYSDK_OFFSET(0xA534D10)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERIDPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xA5331A0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_BufferIDProperty_TypeDefinitionIndex = 60343;

	class MaterialPropertiesCollection_BufferIDProperty : public ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property_1<::System::UInt64>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERIDPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_3B01BE9C2045A2D8(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERIDPROPERTY_METHOD_3_3B01BE9C2045A2D8_OFFSET))(this, a1);
		}
	};
}
