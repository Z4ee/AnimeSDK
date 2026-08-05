#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPSTREAMING_NAPSTREAMINGMESHCOLLIDERCONFIG_CONTAINSSCENEPATH_OFFSET UNITYSDK_OFFSET(0xE95D760)
#define NAPSTREAMING_NAPSTREAMINGMESHCOLLIDERCONFIG_SETSCENEPATHGENERATED_OFFSET UNITYSDK_OFFSET(0xE95D800)
#define NAPSTREAMING_NAPSTREAMINGMESHCOLLIDERCONFIG_SHOULDSKIPBAKEDSCENEPROPLOAD_OFFSET UNITYSDK_OFFSET(0xE95D960)
#define NAPSTREAMING_NAPSTREAMINGMESHCOLLIDERCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0xE95DE40)
#define NAPSTREAMING_NAPSTREAMINGMESHCOLLIDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE95DD60)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingMeshColliderConfig_TypeDefinitionIndex = 84307;

	class NapStreamingMeshColliderConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet_s_RuntimeConfigHandle()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(NapStreamingMeshColliderConfig_TypeDefinitionIndex)->GetStaticField(0x3AE70);
		}
		static ::NapStreaming::NapStreamingMeshColliderConfig** StaticGet_s_RuntimeConfig()
		{
			return (::NapStreaming::NapStreamingMeshColliderConfig**)Il2CppClass::FromTypeDefinitionIndex(NapStreamingMeshColliderConfig_TypeDefinitionIndex)->GetStaticField(0x3AE90);
		}
		// static const ::System::String* AssetPath; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* meshColliderStreamingScenePaths; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMESHCOLLIDERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMESHCOLLIDERCONFIG__CCTOR_OFFSET))();
		}

		::System::Boolean ContainsScenePath(::System::String* scenePath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMESHCOLLIDERCONFIG_CONTAINSSCENEPATH_OFFSET))(this, scenePath);
		}

		::System::Boolean SetScenePathGenerated(::System::String* scenePath, ::System::Boolean generated)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMESHCOLLIDERCONFIG_SETSCENEPATHGENERATED_OFFSET))(this, scenePath, generated);
		}

		static ::System::Boolean ShouldSkipBakedScenePropLoad(::System::String* scenePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGMESHCOLLIDERCONFIG_SHOULDSKIPBAKEDSCENEPROPLOAD_OFFSET))(scenePath);
		}
	};
}
