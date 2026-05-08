#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"

namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_RESOURCEEXPORTINGMODULE_SAVETOSCENE_OFFSET UNITYSDK_OFFSET(0x1C55BA00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_RESOURCEEXPORTINGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C55BD80)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int ResourceExportingModule_TypeDefinitionIndex = 37435;

	class ResourceExportingModule : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_RESOURCEEXPORTINGMODULE__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* SaveToScene(::UnityEngine::Transform* parent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_RESOURCEEXPORTINGMODULE_SAVETOSCENE_OFFSET))(this, parent);
		}
	};
}
