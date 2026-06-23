#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Spine::Unity { class OnDemandTextureLoader; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_ONDEMANDTEXTURELOADER_TEXTURELOADDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AD24790)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_TEXTURELOADDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AD24820)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_TEXTURELOADDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AD240B0)
#define SPINE_UNITY_ONDEMANDTEXTURELOADER_TEXTURELOADDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD24770)

namespace Spine::Unity
{
	inline static constexpr unsigned int OnDemandTextureLoader_TextureLoadDelegate_TypeDefinitionIndex = 39425;

	class OnDemandTextureLoader_TextureLoadDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_TEXTURELOADDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Spine::Unity::OnDemandTextureLoader* loader, ::UnityEngine::Material* material, ::System::Int32 textureIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_TEXTURELOADDELEGATE_INVOKE_OFFSET))(this, loader, material, textureIndex);
		}

		::System::IAsyncResult* BeginInvoke(::Spine::Unity::OnDemandTextureLoader* loader, ::UnityEngine::Material* material, ::System::Int32 textureIndex, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Spine::Unity::OnDemandTextureLoader*, ::UnityEngine::Material*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_TEXTURELOADDELEGATE_BEGININVOKE_OFFSET))(this, loader, material, textureIndex, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ONDEMANDTEXTURELOADER_TEXTURELOADDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
