#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A3F38457E644339A.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_6535CE33BDD95E74;
class Class_2_208CC9941471731A_594;
class Class_2_B59A5BC3EDB05A2C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14DDE330)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONRELATEDAVATARBTNCLICK_OFFSET UNITYSDK_OFFSET(0x14DDF520)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14DDE440)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14DDE3C0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14DDE060)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_SETBURNTIP_OFFSET UNITYSDK_OFFSET(0x14DDF270)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_SETREWARDBUFFICON_OFFSET UNITYSDK_OFFSET(0x14DDF0F0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_SETREWARDBUFFTIP_OFFSET UNITYSDK_OFFSET(0x14DDF2E0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDF590)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14DDF620)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14DDF6B0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14DDF750)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14DDF7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossCardWidgetController_TypeDefinitionIndex = 42030;

	class UIVRBossCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 REWARD_PREVIEW_NUM = 0x3; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _rewardIcons; // 0x2E8
		::MoleMole::UIDailyChallengeCardRowWidgetController* _cardController; // 0x2F0
		::Class_2_B59A5BC3EDB05A2C* _view; // 0x2F8
		::Class_2_208CC9941471731A_594* _quest; // 0x300
		::MoleMole::UIDoubleTipsInfoWidgetController* _doubleTipsInfoWidgetController; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnRelatedAvatarBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONRELATEDAVATARBTNCLICK_OFFSET))(this);
		}

		::System::Void SetRewardBuffIcon(::System::Boolean show, ::System::Int32 buffID, ::Enum_3_A3F38457E644339A rewardBuffGameTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::Enum_3_A3F38457E644339A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_SETREWARDBUFFICON_OFFSET))(this, show, buffID, rewardBuffGameTag);
		}

		::System::Void SetRewardBuffTip(::System::Boolean show, ::Class_1_6535CE33BDD95E74* rewardBuffWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_6535CE33BDD95E74*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_SETREWARDBUFFTIP_OFFSET))(this, show, rewardBuffWrapper);
		}

		::System::Void SetBurnTip(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_SETBURNTIP_OFFSET))(this, show);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
