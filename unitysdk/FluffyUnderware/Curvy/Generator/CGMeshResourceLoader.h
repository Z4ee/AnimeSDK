#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCELOADER_CREATE_OFFSET UNITYSDK_OFFSET(0x1FA4F930)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCELOADER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1FA4F9C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCELOADER_INITIALIZEONLOAD_OFFSET UNITYSDK_OFFSET(0x1FA4F8C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA4F920)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGMeshResourceLoader_TypeDefinitionIndex = 39457;

	class CGMeshResourceLoader : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCELOADER__CTOR_OFFSET))(this);
		}

		static ::System::Void InitializeOnLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCELOADER_INITIALIZEONLOAD_OFFSET))();
		}

		::UnityEngine::Component* Create(::FluffyUnderware::Curvy::Generator::CGModule* cgModule, ::System::String* context)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCELOADER_CREATE_OFFSET))(this, cgModule, context);
		}

		::System::Void Destroy(::FluffyUnderware::Curvy::Generator::CGModule* cgModule, ::UnityEngine::Component* obj, ::System::String* context, ::System::Boolean kill)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*, ::UnityEngine::Component*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMESHRESOURCELOADER_DESTROY_OFFSET))(this, cgModule, obj, context, kill);
		}
	};
}
