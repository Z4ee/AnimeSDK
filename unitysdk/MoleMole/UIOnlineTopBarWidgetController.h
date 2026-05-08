#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_151D990416311EA2;
class Class_2_151D990416311EA2_Class_2_47F94C3827CAB3BB_5;
class Class_3_7472FB6CC4015359;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
template <typename T> class Class_2_0D31A1661D004892;

#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_BUILDDATABINDING_OFFSET UNITYSDK_OFFSET(0x15D64080)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_GETONLINETOPBARAIDINGMAT_OFFSET UNITYSDK_OFFSET(0x15D63CB0)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_GETONLINETOPBARDYINGMAT_OFFSET UNITYSDK_OFFSET(0x15D63AD0)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x15D63850)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D63910)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D639A0)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D63710)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15D637E0)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_REFRESHAIDINGVIEW_OFFSET UNITYSDK_OFFSET(0x15D64710)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_REFRESHHELPERS_OFFSET UNITYSDK_OFFSET(0x15D64E40)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_REFRESHLEFTTIME_OFFSET UNITYSDK_OFFSET(0x15D64B90)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_REFRESHPLAYER_OFFSET UNITYSDK_OFFSET(0x15D65050)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x15D648D0)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_REFRESHRATIO_OFFSET UNITYSDK_OFFSET(0x15D64D00)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_SETUPAVATARICON_OFFSET UNITYSDK_OFFSET(0x15D64440)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_SETUPENTITY_OFFSET UNITYSDK_OFFSET(0x15D63E90)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER__BUILDDATABINDING_B__19_0_OFFSET UNITYSDK_OFFSET(0x15D653A0)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER__BUILDDATABINDING_B__19_1_OFFSET UNITYSDK_OFFSET(0x15D65780)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER__BUILDDATABINDING_B__19_2_OFFSET UNITYSDK_OFFSET(0x15D658B0)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D65340)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x15D659E0)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D65A70)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D65B00)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D65B90)
#define MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15D65C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIOnlineTopBarWidgetController_TypeDefinitionIndex = 55906;

	class UIOnlineTopBarWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_151D990416311EA2* _view; // 0x2B8
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x2C0
		::System::Boolean _hasBindView; // 0x2C8
		::MoleMole::Battle::Entity* _entity; // 0x2D0
		::Class_3_7472FB6CC4015359* _hudComponent; // 0x2D8
		::System::Boolean inAiding; // 0x2E0
		::UnityEngine::Material* _OnlineTopBarAidingMat; // 0x2E8
		::Foundation::AssetRequestHandle __OnlineTopBarAidingMatHandle; // 0x2F0
		::UnityEngine::Material* _OnlineTopBarDyingMat; // 0x310
		::Foundation::AssetRequestHandle __OnlineTopBarDyingMatHandle; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* GetOnlineTopBarDyingMat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_GETONLINETOPBARDYINGMAT_OFFSET))(this);
		}

		::UnityEngine::Material* GetOnlineTopBarAidingMat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_GETONLINETOPBARAIDINGMAT_OFFSET))(this);
		}

		::System::Void SetupEntity(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_SETUPENTITY_OFFSET))(this, entityID);
		}

		::System::Void SetupAvatarIcon(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_SETUPAVATARICON_OFFSET))(this, entity);
		}

		::System::Void BuildDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_BUILDDATABINDING_OFFSET))(this);
		}

		::System::Void RefreshProgress(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_REFRESHPROGRESS_OFFSET))(this, ratio);
		}

		::System::Void RefreshLeftTime(::System::Single leftTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_REFRESHLEFTTIME_OFFSET))(this, leftTime);
		}

		::System::Void RefreshRatio(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_REFRESHRATIO_OFFSET))(this, ratio);
		}

		::System::Void RefreshHelpers(::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* entities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_REFRESHHELPERS_OFFSET))(this, entities);
		}

		::System::Void RefreshPlayer(::MoleMole::EntityHandle entity, ::Class_2_0D31A1661D004892<::Class_2_151D990416311EA2_Class_2_47F94C3827CAB3BB_5*>* Player)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Class_2_0D31A1661D004892<::Class_2_151D990416311EA2_Class_2_47F94C3827CAB3BB_5*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_REFRESHPLAYER_OFFSET))(this, entity, Player);
		}

		::System::Void RefreshAidingView(::System::Boolean isAiding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER_REFRESHAIDINGVIEW_OFFSET))(this, isAiding);
		}

		::System::Void _BuildDataBinding_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER__BUILDDATABINDING_B__19_0_OFFSET))(this);
		}

		::System::Void _BuildDataBinding_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER__BUILDDATABINDING_B__19_1_OFFSET))(this);
		}

		::System::Void _BuildDataBinding_b__19_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER__BUILDDATABINDING_B__19_2_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONLINETOPBARWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
