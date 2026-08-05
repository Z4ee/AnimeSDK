#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_1A39E1B51756BF41;
class Class_2_208CC9941471731A_560;
class Class_2_21B962BB0A8CF0AA;
class Class_2_79AE422BA06F6D26_169;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_BINDSLOTDATA_OFFSET UNITYSDK_OFFSET(0x18925830)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_GET_SLOTDATA_OFFSET UNITYSDK_OFFSET(0x18924E90)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18925340)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18925770)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189253D0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18924EA0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_REFRESHAUTOBATTLEBANGBOOCARD_OFFSET UNITYSDK_OFFSET(0x18925F90)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_SETDRAGGING_OFFSET UNITYSDK_OFFSET(0x18925E30)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x18925C10)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_TOGGLEHINT_OFFSET UNITYSDK_OFFSET(0x18925CE0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_TRYSETHOVERING_OFFSET UNITYSDK_OFFSET(0x18925EE0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_0_OFFSET UNITYSDK_OFFSET(0x18926FC0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_1_OFFSET UNITYSDK_OFFSET(0x18927280)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_2_OFFSET UNITYSDK_OFFSET(0x18927440)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_3_OFFSET UNITYSDK_OFFSET(0x18927830)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18926FB0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18927940)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x189279D0)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18927A70)
#define MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18927B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIABStandbySlotItemWidgetController_TypeDefinitionIndex = 58801;

	class UIABStandbySlotItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_169* _view; // 0x2F0
		::Class_2_21B962BB0A8CF0AA* _slotData; // 0x2F8
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x300
		::System::Boolean _isCurDragging; // 0x308
		::System::Boolean _isHovering; // 0x309

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_21B962BB0A8CF0AA* get_SlotData()
		{
			return ((::Class_2_21B962BB0A8CF0AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_GET_SLOTDATA_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ToggleHint(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_TOGGLEHINT_OFFSET))(this, isShow);
		}

		::System::Void SetDragging(::System::Boolean isDragging)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_SETDRAGGING_OFFSET))(this, isDragging);
		}

		::System::Void TrySetHovering(::System::Boolean isHovering)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_TRYSETHOVERING_OFFSET))(this, isHovering);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void BindSlotData(::Class_2_21B962BB0A8CF0AA* slotData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_21B962BB0A8CF0AA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_BINDSLOTDATA_OFFSET))(this, slotData);
		}

		static ::Class_2_208CC9941471731A_560* RefreshAutoBattleBangBooCard(::System::Int32 characterID, ::UnityEngine::Transform* starRoot, ::UnityEngine::Transform* qualityRoot, ::UnityEngine::Transform* emptyRoot, ::UnityEngine::Transform* normalRoot, ::Class_2_1A39E1B51756BF41* bangbooImg, ::Class_2_1A39E1B51756BF41* attributeIcon, ::Class_2_1A39E1B51756BF41* careerIcon, ::UnityEngine::UI::Extension::UILocalizationText* nameText, ::Class_2_1A39E1B51756BF41* rarityIcon, ::UnityEngine::UI::Extension::UILocalizationText* attributeText, ::UnityEngine::UI::Extension::UILocalizationText* careerText, ::Class_2_1A39E1B51756BF41* attrBg, ::Class_2_1A39E1B51756BF41* careerBg)
		{
			return ((::Class_2_208CC9941471731A_560*(*)(::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::Class_2_1A39E1B51756BF41*, ::Class_2_1A39E1B51756BF41*, ::Class_2_1A39E1B51756BF41*, ::UnityEngine::UI::Extension::UILocalizationText*, ::Class_2_1A39E1B51756BF41*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*, ::Class_2_1A39E1B51756BF41*, ::Class_2_1A39E1B51756BF41*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER_REFRESHAUTOBATTLEBANGBOOCARD_OFFSET))(characterID, starRoot, qualityRoot, emptyRoot, normalRoot, bangbooImg, attributeIcon, careerIcon, nameText, rarityIcon, attributeText, careerText, attrBg, careerBg);
		}

		::System::Void _BindSlotData_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_0_OFFSET))(this);
		}

		::System::Void _BindSlotData_b__21_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_1_OFFSET))(this);
		}

		::System::Void _BindSlotData_b__21_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_2_OFFSET))(this);
		}

		::System::Void _BindSlotData_b__21_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER__BINDSLOTDATA_B__21_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABSTANDBYSLOTITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
