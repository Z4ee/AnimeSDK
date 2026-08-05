#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D35A83CFEBC4DDA6.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIJOURNEYTREELAYOUT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1743F7D0)
#define MOLEMOLE_UIJOURNEYTREELAYOUT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1743F830)
#define MOLEMOLE_UIJOURNEYTREELAYOUT_GETCHILDPOS_OFFSET UNITYSDK_OFFSET(0x1743FD20)
#define MOLEMOLE_UIJOURNEYTREELAYOUT_GETCHILDSITEBYPOSX_OFFSET UNITYSDK_OFFSET(0x1743FF90)
#define MOLEMOLE_UIJOURNEYTREELAYOUT_GETHORIZONMINMAX_OFFSET UNITYSDK_OFFSET(0x1743FE90)
#define MOLEMOLE_UIJOURNEYTREELAYOUT_GETLASTCELLMINMAX_OFFSET UNITYSDK_OFFSET(0x1743FE30)
#define MOLEMOLE_UIJOURNEYTREELAYOUT_SETCHILDPOS_OFFSET UNITYSDK_OFFSET(0x1743F950)
#define MOLEMOLE_UIJOURNEYTREELAYOUT_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1743F880)
#define MOLEMOLE_UIJOURNEYTREELAYOUT_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1743FA80)
#define MOLEMOLE_UIJOURNEYTREELAYOUT_SETLISTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x1743FAC0)
#define MOLEMOLE_UIJOURNEYTREELAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x17440030)
#define MOLEMOLE_UIJOURNEYTREELAYOUT___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x174400A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIJourneyTreeLayout_TypeDefinitionIndex = 61912;

	class UIJourneyTreeLayout : public ::UnityEngine::UI::LayoutGroup
	{
	public:
		::UnityEngine::Vector2 cellSize; // 0x58
		::System::Single space; // 0x60
		::System::Collections::Generic::List_1<::Struct_2_D35A83CFEBC4DDA6>* cellStructList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYTREELAYOUT__CTOR_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYTREELAYOUT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYTREELAYOUT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYTREELAYOUT_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYTREELAYOUT_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::System::Void SetListMaxSize(::System::Collections::Generic::List_1<::Struct_2_D35A83CFEBC4DDA6>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_D35A83CFEBC4DDA6>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYTREELAYOUT_SETLISTMAXSIZE_OFFSET))(this, a1);
		}

		::System::Void SetChildPos(::UnityEngine::RectTransform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYTREELAYOUT_SETCHILDPOS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 GetLastCellMinMax()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYTREELAYOUT_GETLASTCELLMINMAX_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetHorizonMinMax(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYTREELAYOUT_GETHORIZONMINMAX_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetChildPos(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYTREELAYOUT_GETCHILDPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetChildSiteByPosX(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYTREELAYOUT_GETCHILDSITEBYPOSX_OFFSET))(this, a1);
		}

		::System::Void __base_CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIJOURNEYTREELAYOUT___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}
	};
}
