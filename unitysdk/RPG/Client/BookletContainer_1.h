#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"
#include "unitysdk/UnityEngine/DrivenRectTransformTracker.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectOffset; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	inline static constexpr unsigned int BookletContainer_1_TypeDefinitionIndex = 67628;

	template <typename TContainerConfig>
	class BookletContainer_1 : public ::RPG::Client::BookletElement_1<TContainerConfig>
	{
	public:
		::UnityEngine::Transform* Content; // 0x0
		::UnityEngine::Vector2 _MinSize; // 0x0
		::UnityEngine::Vector2 _PreferredSize; // 0x0
		::UnityEngine::Vector2 _FlexibleSize; // 0x0
		::UnityEngine::Vector2 _MaxSize; // 0x0
		::UnityEngine::RectTransform* _RectTrans; // 0x0
		::UnityEngine::RectOffset* Padding; // 0x0
		::UnityEngine::DrivenRectTransformTracker _Tracker; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _RectTransChildren; // 0x0
	};
}
