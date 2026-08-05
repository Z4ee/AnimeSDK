#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GUILAYOUTEXTENSION_AREA_1_OFFSET UNITYSDK_OFFSET(0x1EA52780)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GUILAYOUTEXTENSION_AREA_OFFSET UNITYSDK_OFFSET(0x1EA526E0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GUILAYOUTEXTENSION_HORIZONTAL_1_OFFSET UNITYSDK_OFFSET(0x1EA528D0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GUILAYOUTEXTENSION_HORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1EA52840)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GUILAYOUTEXTENSION_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1EA52980)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int GUILayoutExtension_TypeDefinitionIndex = 29018;

	class GUILayoutExtension : public ::System::Object
	{
	public:
		static ::System::Void Area(::System::Action* action, ::UnityEngine::Rect screenRectangle, ::UnityEngine::GUIStyle* skinBox)
		{
			return ((::System::Void(*)(::System::Action*, ::UnityEngine::Rect, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GUILAYOUTEXTENSION_AREA_OFFSET))(action, screenRectangle, skinBox);
		}

		static ::System::Void Area_1(::System::Action* action, ::UnityEngine::Rect screenRectangle)
		{
			return ((::System::Void(*)(::System::Action*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GUILAYOUTEXTENSION_AREA_1_OFFSET))(action, screenRectangle);
		}

		static ::System::Void Horizontal(::System::Action* action, ::UnityEngine::GUIStyle* style)
		{
			return ((::System::Void(*)(::System::Action*, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GUILAYOUTEXTENSION_HORIZONTAL_OFFSET))(action, style);
		}

		static ::System::Void Horizontal_1(::System::Action* action, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* layoutOptions)
		{
			return ((::System::Void(*)(::System::Action*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GUILAYOUTEXTENSION_HORIZONTAL_1_OFFSET))(action, layoutOptions);
		}

		static ::UnityEngine::Vector2 ScrollView(::System::Action* action, ::UnityEngine::Vector2 scrollPosition, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* layoutOptions)
		{
			return ((::UnityEngine::Vector2(*)(::System::Action*, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_GUILAYOUTEXTENSION_SCROLLVIEW_OFFSET))(action, scrollPosition, layoutOptions);
		}
	};
}
