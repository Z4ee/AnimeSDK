#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define PARADOXNOTION_OBJECTUTILS_ANYEQUALS_OFFSET UNITYSDK_OFFSET(0x1A906E00)
#define PARADOXNOTION_OBJECTUTILS_FINDGAMEOBJECTSWITHINLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1A907230)
#define PARADOXNOTION_OBJECTUTILS_ISINLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1A9072F0)
#define PARADOXNOTION_OBJECTUTILS_TRANSFORMTOTYPE_OFFSET UNITYSDK_OFFSET(0x1A906F80)

namespace ParadoxNotion
{
	inline static constexpr unsigned int ObjectUtils_TypeDefinitionIndex = 27494;

	class ObjectUtils : public ::System::Object
	{
	public:
		static ::System::Boolean AnyEquals(::System::Object* a, ::System::Object* b)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_OBJECTUTILS_ANYEQUALS_OFFSET))(a, b);
		}

		static ::UnityEngine::Component* TransformToType(::UnityEngine::Component* current, ::System::Type* type)
		{
			return ((::UnityEngine::Component*(*)(::UnityEngine::Component*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_OBJECTUTILS_TRANSFORMTOTYPE_OFFSET))(current, type);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* FindGameObjectsWithinLayerMask(::UnityEngine::LayerMask mask, ::UnityEngine::GameObject* exclude)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*(*)(::UnityEngine::LayerMask, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PARADOXNOTION_OBJECTUTILS_FINDGAMEOBJECTSWITHINLAYERMASK_OFFSET))(mask, exclude);
		}

		static ::System::Boolean IsInLayerMask(::UnityEngine::GameObject* gameObject, ::UnityEngine::LayerMask mask)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + PARADOXNOTION_OBJECTUTILS_ISINLAYERMASK_OFFSET))(gameObject, mask);
		}
	};
}
