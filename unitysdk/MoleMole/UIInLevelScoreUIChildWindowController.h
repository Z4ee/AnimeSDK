#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/FairyTextUpdateType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/ScoreUIAnimationType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_D83DC7376F4C0DA0.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_409;
class Class_2_60638234271CCDB8_143;
namespace MoleMole { class UIBubbleTips; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole::Config { class ConfigInLevelScoreUIRating; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_CLOSESCORETIP_OFFSET UNITYSDK_OFFSET(0x177CC250)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_GET_INLEVELSCOREUIRATINGCONFIGASSETPATH_OFFSET UNITYSDK_OFFSET(0x177CAE00)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_GET_ISSCORETIPACTIVATED_OFFSET UNITYSDK_OFFSET(0x177CAE80)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_GET_TIPCONTROLLER_OFFSET UNITYSDK_OFFSET(0x177CAE90)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x177CAE70)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_INITRATINGONOPEN_OFFSET UNITYSDK_OFFSET(0x177CBCF0)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x177CB160)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x177CB060)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_ONHIDEMIDDLETIP_OFFSET UNITYSDK_OFFSET(0x177CB4B0)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_ONMIDDLETIPSSHOW_OFFSET UNITYSDK_OFFSET(0x177CB460)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x177CB0F0)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x177CAEA0)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x177CAF80)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_OPENSCORETIP_OFFSET UNITYSDK_OFFSET(0x177CB500)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x177CC610)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_POPUPSCOREINFO_1_OFFSET UNITYSDK_OFFSET(0x177CC5A0)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_POPUPSCOREINFO_OFFSET UNITYSDK_OFFSET(0x177CC520)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_RESTARTSCORETIP_OFFSET UNITYSDK_OFFSET(0x177CC3C0)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x177CB280)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_UPDATERANKING_OFFSET UNITYSDK_OFFSET(0x177CB1D0)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_UPDATESCORE_OFFSET UNITYSDK_OFFSET(0x177CB330)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x177CC690)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x177CC6A0)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x177CC730)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x177CC740)
#define MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x177CC750)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelScoreUIChildWindowController_TypeDefinitionIndex = 74145;

	class UIInLevelScoreUIChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* FairyNormalTextureKey; // 0x0
		::Class_2_60638234271CCDB8_143* _view; // 0x318
		::System::String* _cachedText; // 0x320
		::MoleMole::Level::RatingType _cachedRating; // 0x328
		::System::Boolean _isMiddleTip; // 0x32C
		::System::Boolean _scoreTipActivated; // 0x32D
		::System::Boolean _isRestarting; // 0x32E
		::Class_0_16E4307DCC419505_409* _rowContainer; // 0x330
		::System::Int32 _groupID; // 0x338
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* _tipController; // 0x340
		::MoleMole::UIBubbleTips* _bubbleTips; // 0x348
		::System::Func_1<::System::ValueTuple_2<::System::String*, ::MoleMole::FairyTextUpdateType>>* _textFunc; // 0x350
		::System::Func_1<::MoleMole::Level::RatingType>* _ratingFunc; // 0x358
		::System::Func_1<::System::Single>* _progressFunc; // 0x360
		::MoleMole::Config::ConfigInLevelScoreUIRating* _globalRatingConfig; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Foundation::AssetPath get_InLevelScoreUIRatingConfigAssetPath()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_GET_INLEVELSCOREUIRATINGCONFIGASSETPATH_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsScoreTipActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_GET_ISSCORETIPACTIVATED_OFFSET))(this);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* get_TipController()
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_GET_TIPCONTROLLER_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnMiddleTipsShow(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_ONMIDDLETIPSSHOW_OFFSET))(this, args);
		}

		::System::Void OnHideMiddleTip(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_ONHIDEMIDDLETIP_OFFSET))(this, args);
		}

		::System::Void UpdateScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_UPDATESCORE_OFFSET))(this);
		}

		::System::Void UpdateRanking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_UPDATERANKING_OFFSET))(this);
		}

		::System::Void UpdateProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_UPDATEPROGRESS_OFFSET))(this);
		}

		::System::Void OpenScoreTip(::Struct_2_D83DC7376F4C0DA0 param)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D83DC7376F4C0DA0))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_OPENSCORETIP_OFFSET))(this, param);
		}

		::System::Void InitRatingOnOpen(::Struct_2_D83DC7376F4C0DA0 param)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D83DC7376F4C0DA0))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_INITRATINGONOPEN_OFFSET))(this, param);
		}

		::System::Void CloseScoreTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_CLOSESCORETIP_OFFSET))(this);
		}

		::System::Void RestartScoreTip(::Struct_2_D83DC7376F4C0DA0 param)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D83DC7376F4C0DA0))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_RESTARTSCORETIP_OFFSET))(this, param);
		}

		::System::Void PopUpScoreInfo(::System::String* textMapKey, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_POPUPSCOREINFO_OFFSET))(this, textMapKey, value);
		}

		::System::Void PopUpScoreInfo_1(::System::String* textMapKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_POPUPSCOREINFO_1_OFFSET))(this, textMapKey);
		}

		::System::Void PlayAnimation(::MoleMole::ScoreUIAnimationType animationType, ::System::String* clipName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScoreUIAnimationType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER_PLAYANIMATION_OFFSET))(this, animationType, clipName);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSCOREUICHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
