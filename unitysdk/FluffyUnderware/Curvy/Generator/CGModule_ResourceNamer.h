#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RESOURCENAMER_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1B72B000)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RESOURCENAMER_GETRESOURCENAME_OFFSET UNITYSDK_OFFSET(0x1B72B070)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RESOURCENAMER_RENAME_OFFSET UNITYSDK_OFFSET(0x1B72B790)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RESOURCENAMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72AF60)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModule_ResourceNamer_TypeDefinitionIndex = 37320;

	class CGModule_ResourceNamer : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>* resourcesNameCache; // 0x10
		::FluffyUnderware::Curvy::Generator::CGModule* cgModule; // 0x18

		::System::Void _ctor(::FluffyUnderware::Curvy::Generator::CGModule* cgModule)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RESOURCENAMER__CTOR_OFFSET))(this, cgModule);
		}

		::System::Void ClearCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RESOURCENAMER_CLEARCACHE_OFFSET))(this);
		}

		::System::String* GetResourceName(::System::String* resourceName, ::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RESOURCENAMER_GETRESOURCENAME_OFFSET))(this, resourceName, index);
		}

		::System::Void Rename(::System::String* resourceName, ::UnityEngine::Component* resource, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Component*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_RESOURCENAMER_RENAME_OFFSET))(this, resourceName, resource, index);
		}
	};
}
