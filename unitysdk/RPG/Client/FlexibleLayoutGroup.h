#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xBA5C710)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xBA5D390)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_GETGREATESTMINIMUMCHILDWIDTH_OFFSET UNITYSDK_OFFSET(0xBA5C7D0)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_RECORDMINCOUNTHORIZONAL_OFFSET UNITYSDK_OFFSET(0xBA5C570)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_RECORDMINCOUNTVERTICAL_OFFSET UNITYSDK_OFFSET(0xBA5C580)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_ROWCOLUMNINDEX_OFFSET UNITYSDK_OFFSET(0xBA5C590)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_ROWCOLUMNREVERSEINDEX_OFFSET UNITYSDK_OFFSET(0xBA5C5A0)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_METHOD_7_0D6A00AF1E0E3AC9_OFFSET UNITYSDK_OFFSET(0xBA5D5B0)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_METHOD_7_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xBA5C610)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_METHOD_7_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBA5C5B0)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_METHOD_7_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xBA5C6C0)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_METHOD_7_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBA5C670)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_METHOD_7_D66617C59550EB9B_OFFSET UNITYSDK_OFFSET(0xBA5D490)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xBA5C8B0)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0xBA5D290)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP_SETLAYOUT_OFFSET UNITYSDK_OFFSET(0xBA5C9A0)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xBA5DE50)
#define RPG_CLIENT_FLEXIBLELAYOUTGROUP___IFIXBASEPROXY_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xBA5E030)

namespace RPG::Client
{
	inline static constexpr unsigned int FlexibleLayoutGroup_TypeDefinitionIndex = 67773;

	class FlexibleLayoutGroup : public ::UnityEngine::UI::LayoutGroup
	{
	public:
		::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* Field_7_0; // 0x60
		::System::Single Field_7_1; // 0x68
		::System::Boolean ChildForceExpandHeight; // 0x6C
		::System::Boolean ChildForceExpandWidth; // 0x6D
		::System::Single Spacing; // 0x70
		::System::Boolean recordIndex; // 0x74
		::System::Int32 Field_7_6; // 0x78
		::System::Int32 Field_7_7; // 0x7C
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>* Field_7_8; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>* Field_7_9; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_RecordMinCountHorizonal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_RECORDMINCOUNTHORIZONAL_OFFSET))(this);
		}

		::System::Int32 get_RecordMinCountVertical()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_RECORDMINCOUNTVERTICAL_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>* get_RowColumnIndex()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::GridLayoutGroup_RowColumnPair, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_ROWCOLUMNINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>* get_RowColumnReverseIndex()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_GET_ROWCOLUMNREVERSEINDEX_OFFSET))(this);
		}

		::System::Boolean Method_7_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_METHOD_7_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Boolean Method_7_1D4018D4200358D0_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_METHOD_7_1D4018D4200358D0_1_OFFSET))(this);
		}

		::System::Boolean Method_7_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_METHOD_7_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_7_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_METHOD_7_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Single SetLayout(::System::Single a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_SETLAYOUT_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_7_D66617C59550EB9B(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_METHOD_7_D66617C59550EB9B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_7_0D6A00AF1E0E3AC9(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_METHOD_7_0D6A00AF1E0E3AC9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Single GetGreatestMinimumChildWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP_GETGREATESTMINIMUMCHILDWIDTH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLEXIBLELAYOUTGROUP___IFIXBASEPROXY_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}
	};
}
