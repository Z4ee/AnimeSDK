#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBlackEdge_Enum_3_80EED19D95A9C077.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIBLACKEDGE_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x16C967B0)
#define MOLEMOLE_UIBLACKEDGE_GETPIXELSCREENSIZEEXCLUDEBLACKEDGE_OFFSET UNITYSDK_OFFSET(0x16C979E0)
#define MOLEMOLE_UIBLACKEDGE_INIT_OFFSET UNITYSDK_OFFSET(0x16C96500)
#define MOLEMOLE_UIBLACKEDGE_METHOD_5_4B72F72501001F72_OFFSET UNITYSDK_OFFSET(0x16C977E0)
#define MOLEMOLE_UIBLACKEDGE_METHOD_5_AAB7CE7031E7B228_OFFSET UNITYSDK_OFFSET(0x16C97B30)
#define MOLEMOLE_UIBLACKEDGE_METHOD_5_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16C97C80)
#define MOLEMOLE_UIBLACKEDGE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16C97C30)
#define MOLEMOLE_UIBLACKEDGE_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16C97C70)
#define MOLEMOLE_UIBLACKEDGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16C96700)
#define MOLEMOLE_UIBLACKEDGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16C96470)
#define MOLEMOLE_UIBLACKEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C97AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBlackEdge_TypeDefinitionIndex = 50672;

	class UIBlackEdge : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::UIBlackEdge_Enum_3_80EED19D95A9C077 Field_5_0; // 0x18
		::UnityEngine::CanvasGroup* Field_5_1; // 0x20
		::UnityEngine::UI::Image* Field_5_2; // 0x28
		::System::Nullable_1<::System::Int32> Field_5_3; // 0x30
		::UnityEngine::RectTransform* Field_5_4; // 0x38
		::System::Boolean _isTop; // 0x40
		::UnityEngine::Canvas* Field_5_6; // 0x48
		::System::Boolean Field_5_7; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_ONENABLE_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::RectTransform* a1, ::System::Boolean a2, ::System::Nullable_1<::System::Int32> a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_CALCULATELAYOUT_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Int32> GetPixelScreenSizeExcludeBlackEdge()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_GETPIXELSCREENSIZEEXCLUDEBLACKEDGE_OFFSET))();
		}

		::UnityEngine::Canvas* Method_5_4B72F72501001F72()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_METHOD_5_4B72F72501001F72_OFFSET))(this);
		}

		::System::Void Method_5_AAB7CE7031E7B228(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_METHOD_5_AAB7CE7031E7B228_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_5_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBLACKEDGE_METHOD_5_C74E50CBD41F0264_OFFSET))(this, a1);
		}
	};
}
