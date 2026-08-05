#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBabeltowerFightingBuffPopWindowController___c__DisplayClass9_0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_08E43914789BE5F3;
class Class_2_208CC9941471731A_1187;
class Class_2_60638234271CCDB8_16;
class Class_2_60638234271CCDB8_16_Class_2_CC03AAEE6FCC732C_2;
class Class_2_60638234271CCDB8_16_Class_2_EF16346D79C18F15_1;
namespace MoleMole { class UIBabeltowerFightingBuffItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Project::Config { class BabelFloorInfoTemplateExt; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_CHECKNEWBIE_OFFSET UNITYSDK_OFFSET(0x1850FB60)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1850F6D0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_INITBUFF_OFFSET UNITYSDK_OFFSET(0x185104A0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_ONCARDSET_OFFSET UNITYSDK_OFFSET(0x18511B90)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x185113B0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_ONNEWBIECLOSE_OFFSET UNITYSDK_OFFSET(0x1850FAC0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18511440)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1850F6E0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1850F800)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_REFRESHBUFFSET_OFFSET UNITYSDK_OFFSET(0x18511550)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_SETCANCELCALLBACK_OFFSET UNITYSDK_OFFSET(0x18511500)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x185114B0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_TRIGGERNEWBIE_OFFSET UNITYSDK_OFFSET(0x1850FBD0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_UPDATEFLOORINDEX_OFFSET UNITYSDK_OFFSET(0x1850FE90)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18511DD0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER__INITBUFF_G__SETATTR_9_1_OFFSET UNITYSDK_OFFSET(0x18511E90)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER__INITBUFF_G__UPDATEATTRIBUTE_9_0_OFFSET UNITYSDK_OFFSET(0x18510680)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0x18511E60)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18511FB0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18512040)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18512050)
#define MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18512060)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingBuffPopWindowController_TypeDefinitionIndex = 42002;

	class UIBabeltowerFightingBuffPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* FloorStrRoot; // 0x0
		::Class_2_60638234271CCDB8_16* _view; // 0x318
		::System::Action* cancel; // 0x320
		::System::Action* callback; // 0x328
		::System::Int32 towerid; // 0x330
		::System::UInt32 currentFloor; // 0x334
		::Class_2_08E43914789BE5F3* babelTowerModel; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerFightingBuffItemWidgetController*>* buffs; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnNewbieClose(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_ONNEWBIECLOSE_OFFSET))(this, args);
		}

		::System::Void CheckNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_CHECKNEWBIE_OFFSET))(this);
		}

		::System::Void TriggerNewbie(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_TRIGGERNEWBIE_OFFSET))(this, id);
		}

		::System::Void UpdateFloorIndex(::System::Int32 towerid, ::System::UInt32 realFloor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_UPDATEFLOORINDEX_OFFSET))(this, towerid, realFloor);
		}

		::System::Void InitBuff(::MoleMole::Project::Config::BabelFloorInfoTemplateExt* floorTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Project::Config::BabelFloorInfoTemplateExt*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_INITBUFF_OFFSET))(this, floorTemplate);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetClickCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_SETCLICKCALLBACK_OFFSET))(this, callback);
		}

		::System::Void SetCancelCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_SETCANCELCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RefreshBuffSet(::System::UInt32 currentFloor, ::MoleMole::Project::Config::BabelFloorInfoTemplateExt* floorTemplate, ::System::Int32 monsterCard0, ::System::Int32 monsterCard1, ::System::Int32 cardsetid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Project::Config::BabelFloorInfoTemplateExt*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_REFRESHBUFFSET_OFFSET))(this, currentFloor, floorTemplate, monsterCard0, monsterCard1, cardsetid);
		}

		::System::Void OnCardSet(::System::Int32 cardID, ::System::Int32 cardSetID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER_ONCARDSET_OFFSET))(this, cardID, cardSetID);
		}

		::System::Void _OnUIOpen_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER__ONUIOPEN_B__4_0_OFFSET))(this);
		}

		::System::Void _InitBuff_g__UpdateAttribute_9_0(::MoleMole::UIBabeltowerFightingBuffPopWindowController___c__DisplayClass9_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerFightingBuffPopWindowController___c__DisplayClass9_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER__INITBUFF_G__UPDATEATTRIBUTE_9_0_OFFSET))(this, a1);
		}

		static ::System::Void _InitBuff_g__SetAttr_9_1(::Class_2_0D31A1661D004892<::Class_2_60638234271CCDB8_16_Class_2_EF16346D79C18F15_1*>* iconView, ::Class_2_0D31A1661D004892<::Class_2_60638234271CCDB8_16_Class_2_CC03AAEE6FCC732C_2*>* nameView, ::Class_2_208CC9941471731A_1187* template_)
		{
			return ((::System::Void(*)(::Class_2_0D31A1661D004892<::Class_2_60638234271CCDB8_16_Class_2_EF16346D79C18F15_1*>*, ::Class_2_0D31A1661D004892<::Class_2_60638234271CCDB8_16_Class_2_CC03AAEE6FCC732C_2*>*, ::Class_2_208CC9941471731A_1187*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER__INITBUFF_G__SETATTR_9_1_OFFSET))(iconView, nameView, template_);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGBUFFPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
