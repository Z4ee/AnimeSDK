#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/MaterialPropertiesCollection_Property_1.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERPROPERTY_METHOD_3_3B01BE9C2045A2D8_OFFSET UNITYSDK_OFFSET(0xC9BFA50)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xC9BD6E0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_BufferProperty_TypeDefinitionIndex = 68718;

	class MaterialPropertiesCollection_BufferProperty : public ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property_1<::UnityEngine::ComputeBuffer*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_3B01BE9C2045A2D8(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERPROPERTY_METHOD_3_3B01BE9C2045A2D8_OFFSET))(this, a1);
		}
	};
}
