#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/ItemCollectEffectType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_6BC87267F41C82C6_3;
class Class_4_DA19DD65175B97CF;
namespace Foundation { template <typename T> class ObjectPool_1; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole { class UIHollowItemCollectEffectWidgetController; }
namespace MoleMole { class UIHollowItemCollectWidgetController_GridCollectionData; }
namespace MoleMole { class UIHollowMainBottomWidgetController; }
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectConfigData; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ADDITEMCOLLECTBYINDEX_1_OFFSET UNITYSDK_OFFSET(0x16F86F60)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ADDITEMCOLLECTBYINDEX_OFFSET UNITYSDK_OFFSET(0x16F86C30)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GETFADEOUTEFFECTPARTICLE_OFFSET UNITYSDK_OFFSET(0x16F89180)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GETPIECEINDEXUIPOS_OFFSET UNITYSDK_OFFSET(0x16F88C10)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GET_BOTTOMCTRL_OFFSET UNITYSDK_OFFSET(0x16F88160)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GET_CHESSBOARD3DCTRL_OFFSET UNITYSDK_OFFSET(0x16F86D50)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GET_HOLLOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0x16F894D0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_INITMOVEFINALPOS_OFFSET UNITYSDK_OFFSET(0x16F861F0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16F88FB0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F860E0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16F86170)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16F85C80)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16F86070)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_PLAYGRIDCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x16F875D0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_POPEFFECT_OFFSET UNITYSDK_OFFSET(0x16F889C0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_PROLOADEFFECTPOOL_OFFSET UNITYSDK_OFFSET(0x16F85FF0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_RECYCLEEFFECT_OFFSET UNITYSDK_OFFSET(0x16F89050)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_RECYCLEFADEOUTEFFECTPARTICLE_OFFSET UNITYSDK_OFFSET(0x16F893A0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_SHOWEFFECTATPOS_OFFSET UNITYSDK_OFFSET(0x16F88310)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_TRYTRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0x16F87360)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F896E0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F89990)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16F89A20)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16F89AB0)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16F89B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectWidgetController_TypeDefinitionIndex = 43354;

	class UIHollowItemCollectWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_6BC87267F41C82C6_3* _view; // 0x2C0
		::Foundation::ObjectPool_1<::MoleMole::UIHollowItemCollectWidgetController_GridCollectionData*>* _gridCollectionPool; // 0x2C8
		::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::UIHollowItemCollectWidgetController_GridCollectionData*>* _collectionData; // 0x2D0
		::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::UnityEngine::Vector3>* _index2PosCacheDic; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIHollowItemCollectEffectWidgetController*>* _activeEffects; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIHollowItemCollectEffectWidgetController*>* _itemCollectEffectPool; // 0x2E8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*>* _fadeOutParticlePoolDic; // 0x2F0
		::UnityEngine::Vector3 _coinFinalPos; // 0x2F8
		::UnityEngine::Vector3 _dinyFinalPos; // 0x304
		::UnityEngine::Vector3 _itemFinalPos; // 0x310
		::UnityEngine::GameObject* _coinTargetGo; // 0x320
		::UnityEngine::GameObject* _dinyTargetGo; // 0x328
		::UnityEngine::GameObject* _itemTargetGo; // 0x330
		::MoleMole::Config::ConfigHollowChessboard_ItemCollectConfigData* _itemCollectConfig; // 0x338
		::MoleMole::UIHollowMainPageController* _mainPage; // 0x340
		::MoleMole::UIHollowChessboard3DModelController* _chessboard3DCtrl; // 0x348
		::UnityEngine::RectTransform* _uiRect; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitMoveFinalPos(::UnityEngine::Vector3 coinPos, ::UnityEngine::Vector3 dinyPos, ::UnityEngine::Vector3 itemPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_INITMOVEFINALPOS_OFFSET))(this, coinPos, dinyPos, itemPos);
		}

		::System::Void AddItemCollectByIndex(::System::Int32 itemId, ::System::Int32 deltaCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ADDITEMCOLLECTBYINDEX_OFFSET))(this, itemId, deltaCount);
		}

		::System::Void AddItemCollectByIndex_1(::System::Int32 itemId, ::System::Int32 deltaCount, ::System::Int32 showDeltaCount, ::MoleMole::HollowChessboard::HollowCell index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_ADDITEMCOLLECTBYINDEX_1_OFFSET))(this, itemId, deltaCount, showDeltaCount, index);
		}

		::System::Void TryTriggerEffect(::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_TRYTRIGGEREFFECT_OFFSET))(this, finishCallback);
		}

		::System::Void PlayGridCollectionData(::MoleMole::UIHollowItemCollectWidgetController_GridCollectionData* data, ::System::Action* finishCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowItemCollectWidgetController_GridCollectionData*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_PLAYGRIDCOLLECTIONDATA_OFFSET))(this, data, finishCallBack);
		}

		::System::Void ShowEffectAtPos(::MoleMole::HollowChessboard::HollowCell index, ::System::Int32 itemId, ::System::Int32 particleCount, ::System::Int32 totalAdd, ::System::Int32 showCount, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* effectRandomOffset, ::System::Int32 beginIndex, ::UnityEngine::Color overrideFadeInColor, ::System::Action* finishCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Int32, ::UnityEngine::Color, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_SHOWEFFECTATPOS_OFFSET))(this, index, itemId, particleCount, totalAdd, showCount, effectRandomOffset, beginIndex, overrideFadeInColor, finishCallBack);
		}

		::UnityEngine::Vector3 GetPieceIndexUIPos(::Class_4_DA19DD65175B97CF* piece)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GETPIECEINDEXUIPOS_OFFSET))(this, piece);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ProloadEffectPool()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_PROLOADEFFECTPOOL_OFFSET))(this);
		}

		::MoleMole::UIHollowItemCollectEffectWidgetController* PopEffect()
		{
			return ((::MoleMole::UIHollowItemCollectEffectWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_POPEFFECT_OFFSET))(this);
		}

		::System::Void RecycleEffect(::MoleMole::UIHollowItemCollectEffectWidgetController* effect)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowItemCollectEffectWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_RECYCLEEFFECT_OFFSET))(this, effect);
		}

		::UnityEngine::ParticleSystem* GetFadeOutEffectParticle(::MoleMole::ItemCollectEffectType effectType)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID, ::MoleMole::ItemCollectEffectType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GETFADEOUTEFFECTPARTICLE_OFFSET))(this, effectType);
		}

		::System::Void RecycleFadeOutEffectParticle(::UnityEngine::ParticleSystem* go, ::MoleMole::ItemCollectEffectType effectType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::MoleMole::ItemCollectEffectType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_RECYCLEFADEOUTEFFECTPARTICLE_OFFSET))(this, go, effectType);
		}

		::MoleMole::UIHollowMainPageController* get_HollowMainPage()
		{
			return ((::MoleMole::UIHollowMainPageController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GET_HOLLOWMAINPAGE_OFFSET))(this);
		}

		::MoleMole::UIHollowChessboard3DModelController* get_Chessboard3DCtrl()
		{
			return ((::MoleMole::UIHollowChessboard3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GET_CHESSBOARD3DCTRL_OFFSET))(this);
		}

		::MoleMole::UIHollowMainBottomWidgetController* get_BottomCtrl()
		{
			return ((::MoleMole::UIHollowMainBottomWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER_GET_BOTTOMCTRL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
