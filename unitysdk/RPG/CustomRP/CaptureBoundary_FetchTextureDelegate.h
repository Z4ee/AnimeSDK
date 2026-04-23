#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Texture2D; }

#define RPG_CUSTOMRP_CAPTUREBOUNDARY_FETCHTEXTUREDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1811ECF0)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_FETCHTEXTUREDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1811ED20)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_FETCHTEXTUREDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1811E780)
#define RPG_CUSTOMRP_CAPTUREBOUNDARY_FETCHTEXTUREDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1811ECD0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CaptureBoundary_FetchTextureDelegate_TypeDefinitionIndex = 34984;

	class CaptureBoundary_FetchTextureDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_FETCHTEXTUREDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Texture2D* texture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_FETCHTEXTUREDELEGATE_INVOKE_OFFSET))(this, texture);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Texture2D* texture, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_FETCHTEXTUREDELEGATE_BEGININVOKE_OFFSET))(this, texture, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREBOUNDARY_FETCHTEXTUREDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
