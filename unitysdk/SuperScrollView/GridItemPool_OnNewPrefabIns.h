#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14ED76B0)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14ED76E0)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS_INVOKE_OFFSET UNITYSDK_OFFSET(0x14ED7250)
#define SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS__CTOR_OFFSET UNITYSDK_OFFSET(0x14ED7640)

namespace SuperScrollView
{
	inline static constexpr unsigned int GridItemPool_OnNewPrefabIns_TypeDefinitionIndex = 45857;

	class GridItemPool_OnNewPrefabIns : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMPOOL_ONNEWPREFABINS_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
