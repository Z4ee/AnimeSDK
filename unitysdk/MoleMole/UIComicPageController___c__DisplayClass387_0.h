#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS387_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F68D30)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS387_0__TRIGGERBGSHAKE_B__0_OFFSET UNITYSDK_OFFSET(0x17F68D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass387_0_TypeDefinitionIndex = 46619;

	class UIComicPageController___c__DisplayClass387_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* shakeRectTransList; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* originalPivotList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS387_0__CTOR_OFFSET))(this);
		}

		::System::Void _TriggerBGShake_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS387_0__TRIGGERBGSHAKE_B__0_OFFSET))(this);
		}
	};
}
