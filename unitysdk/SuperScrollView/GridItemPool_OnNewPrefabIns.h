#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB95AF30)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB95AF60)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS_INVOKE_OFFSET UNITYSDK_OFFSET(0xB95A680)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS__CTOR_OFFSET UNITYSDK_OFFSET(0xB95AF10)

namespace SuperScrollView
{
	inline static constexpr unsigned int GridItemPool_OnNewPrefabIns_TypeDefinitionIndex = 44393;

	class GridItemPool_OnNewPrefabIns : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS_INVOKE_OFFSET))(this, obj);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* obj, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS_BEGININVOKE_OFFSET))(this, obj, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
