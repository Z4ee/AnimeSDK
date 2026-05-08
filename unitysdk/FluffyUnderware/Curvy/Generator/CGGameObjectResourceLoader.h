#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCELOADER_CREATE_OFFSET UNITYSDK_OFFSET(0x1B9205C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCELOADER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B920950)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCELOADER_INITIALIZEONLOAD_OFFSET UNITYSDK_OFFSET(0x1B920550)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9205B0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGGameObjectResourceLoader_TypeDefinitionIndex = 37307;

	class CGGameObjectResourceLoader : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCELOADER__CTOR_OFFSET))(this);
		}

		static ::System::Void InitializeOnLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCELOADER_INITIALIZEONLOAD_OFFSET))();
		}

		::UnityEngine::Component* Create(::FluffyUnderware::Curvy::Generator::CGModule* cgModule, ::System::String* context)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCELOADER_CREATE_OFFSET))(this, cgModule, context);
		}

		::System::Void Destroy(::FluffyUnderware::Curvy::Generator::CGModule* cgModule, ::UnityEngine::Component* obj, ::System::String* context, ::System::Boolean kill)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*, ::UnityEngine::Component*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECTRESOURCELOADER_DESTROY_OFFSET))(this, cgModule, obj, context, kill);
		}
	};
}
