#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace FluffyUnderware::Curvy::Generator { class ICGResourceLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGRESOURCEHANDLER_CREATERESOURCE_OFFSET UNITYSDK_OFFSET(0x1E3B8B60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGRESOURCEHANDLER_DESTROYRESOURCE_OFFSET UNITYSDK_OFFSET(0x1E3B8D80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGRESOURCEHANDLER_REGISTERRESOURCELOADER_OFFSET UNITYSDK_OFFSET(0x1E3B8980)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGRESOURCEHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B8FF0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGResourceHandler_TypeDefinitionIndex = 38880;

	class CGResourceHandler : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::Generator::ICGResourceLoader*>** StaticGet_resourceLoadersCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::Generator::ICGResourceLoader*>**)Il2CppClass::FromTypeDefinitionIndex(CGResourceHandler_TypeDefinitionIndex)->GetStaticField(0x29520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGRESOURCEHANDLER__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterResourceLoader(::System::String* resourceName, ::FluffyUnderware::Curvy::Generator::ICGResourceLoader* loader)
		{
			return ((::System::Void(*)(::System::String*, ::FluffyUnderware::Curvy::Generator::ICGResourceLoader*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGRESOURCEHANDLER_REGISTERRESOURCELOADER_OFFSET))(resourceName, loader);
		}

		static ::UnityEngine::Component* CreateResource(::FluffyUnderware::Curvy::Generator::CGModule* module, ::System::String* resName, ::System::String* context)
		{
			return ((::UnityEngine::Component*(*)(::FluffyUnderware::Curvy::Generator::CGModule*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGRESOURCEHANDLER_CREATERESOURCE_OFFSET))(module, resName, context);
		}

		static ::System::Void DestroyResource(::FluffyUnderware::Curvy::Generator::CGModule* module, ::System::String* resName, ::UnityEngine::Component* obj, ::System::String* context, ::System::Boolean kill)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::CGModule*, ::System::String*, ::UnityEngine::Component*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGRESOURCEHANDLER_DESTROYRESOURCE_OFFSET))(module, resName, obj, context, kill);
		}
	};
}
