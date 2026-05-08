#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define PARADOXNOTION_RECTUTILS_ENCAPSULATES_OFFSET UNITYSDK_OFFSET(0x1B7ED8D0)
#define PARADOXNOTION_RECTUTILS_EXPANDBY_1_OFFSET UNITYSDK_OFFSET(0x1B7ED940)
#define PARADOXNOTION_RECTUTILS_EXPANDBY_2_OFFSET UNITYSDK_OFFSET(0x1B7ED970)
#define PARADOXNOTION_RECTUTILS_EXPANDBY_OFFSET UNITYSDK_OFFSET(0x1B7ED910)
#define PARADOXNOTION_RECTUTILS_GETBOUNDRECT_1_OFFSET UNITYSDK_OFFSET(0x1B7ED7F0)
#define PARADOXNOTION_RECTUTILS_GETBOUNDRECT_OFFSET UNITYSDK_OFFSET(0x1B7ED710)
#define PARADOXNOTION_RECTUTILS_TRANSFORMSPACE_1_OFFSET UNITYSDK_OFFSET(0x1B7EDAD0)
#define PARADOXNOTION_RECTUTILS_TRANSFORMSPACE_OFFSET UNITYSDK_OFFSET(0x1B7ED9B0)

namespace ParadoxNotion
{
	inline static constexpr unsigned int RectUtils_TypeDefinitionIndex = 26898;

	class RectUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Rect GetBoundRect(::Il2CppArray<::UnityEngine::Rect>* rects)
		{
			return ((::UnityEngine::Rect(*)(::Il2CppArray<::UnityEngine::Rect>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_RECTUTILS_GETBOUNDRECT_OFFSET))(rects);
		}

		static ::UnityEngine::Rect GetBoundRect_1(::Il2CppArray<::UnityEngine::Vector2>* positions)
		{
			return ((::UnityEngine::Rect(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_RECTUTILS_GETBOUNDRECT_1_OFFSET))(positions);
		}

		static ::System::Boolean Encapsulates(::UnityEngine::Rect a, ::UnityEngine::Rect b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + PARADOXNOTION_RECTUTILS_ENCAPSULATES_OFFSET))(a, b);
		}

		static ::UnityEngine::Rect ExpandBy(::UnityEngine::Rect rect, ::System::Single margin)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_RECTUTILS_EXPANDBY_OFFSET))(rect, margin);
		}

		static ::UnityEngine::Rect ExpandBy_1(::UnityEngine::Rect rect, ::System::Single xMargin, ::System::Single yMargin)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_RECTUTILS_EXPANDBY_1_OFFSET))(rect, xMargin, yMargin);
		}

		static ::UnityEngine::Rect ExpandBy_2(::UnityEngine::Rect rect, ::System::Single left, ::System::Single top, ::System::Single right, ::System::Single bottom)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PARADOXNOTION_RECTUTILS_EXPANDBY_2_OFFSET))(rect, left, top, right, bottom);
		}

		static ::UnityEngine::Rect TransformSpace(::UnityEngine::Rect rect, ::UnityEngine::Rect oldContainer, ::UnityEngine::Rect newContainer)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + PARADOXNOTION_RECTUTILS_TRANSFORMSPACE_OFFSET))(rect, oldContainer, newContainer);
		}

		static ::UnityEngine::Vector2 TransformSpace_1(::UnityEngine::Vector2 vector, ::UnityEngine::Rect oldContainer, ::UnityEngine::Rect newContainer)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + PARADOXNOTION_RECTUTILS_TRANSFORMSPACE_1_OFFSET))(vector, oldContainer, newContainer);
		}
	};
}
