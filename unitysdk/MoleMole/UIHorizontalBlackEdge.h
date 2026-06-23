#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHorizontalBlackEdge_Enum_3_66284F0EC32C48A3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHORIZONTALBLACKEDGE_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x169F4870)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_GETPIXELSCREENSIZEEXCLUDEHORIZONTALBLACKEDGE_OFFSET UNITYSDK_OFFSET(0x169F5A90)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_INIT_OFFSET UNITYSDK_OFFSET(0x169F4650)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_METHOD_5_4B72F72501001F72_OFFSET UNITYSDK_OFFSET(0x169F5890)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_METHOD_5_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x169F5D10)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x169F5CD0)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x169F5BE0)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_METHOD_5_F8D89B01C3E76DAB_OFFSET UNITYSDK_OFFSET(0x169F5BF0)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x169F47C0)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x169F45C0)
#define MOLEMOLE_UIHORIZONTALBLACKEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x169F5B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHorizontalBlackEdge_TypeDefinitionIndex = 75264;

	class UIHorizontalBlackEdge : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::UIHorizontalBlackEdge_Enum_3_66284F0EC32C48A3 Field_5_0; // 0x18
		::UnityEngine::CanvasGroup* Field_5_1; // 0x20
		::System::Nullable_1<::System::Int32> Field_5_2; // 0x28
		::UnityEngine::RectTransform* Field_5_3; // 0x30
		::System::Boolean _isLeft; // 0x38
		::UnityEngine::Canvas* Field_5_5; // 0x40
		::System::Boolean Field_5_6; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_ONENABLE_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::RectTransform* a1, ::System::Boolean a2, ::System::Nullable_1<::System::Int32> a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_CALCULATELAYOUT_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Int32> GetPixelScreenSizeExcludeHorizontalBlackEdge()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_GETPIXELSCREENSIZEEXCLUDEHORIZONTALBLACKEDGE_OFFSET))();
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void Method_5_F8D89B01C3E76DAB(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_METHOD_5_F8D89B01C3E76DAB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_METHOD_5_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::UnityEngine::Canvas* Method_5_4B72F72501001F72()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHORIZONTALBLACKEDGE_METHOD_5_4B72F72501001F72_OFFSET))(this);
		}
	};
}
