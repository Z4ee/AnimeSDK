#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_E84F57C37B6186B1.h"
#include "unitysdk/MoleMole/TipShowObj.h"
#include "unitysdk/Struct_2_0CDD0BEB64607A45.h"
#include "unitysdk/Struct_2_DBBF6AB516C866C7.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_F04CEC6677F446B8;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBUBBLETIPS_FILLPARAMMAP_OFFSET UNITYSDK_OFFSET(0x170A7630)
#define MOLEMOLE_UIBUBBLETIPS_FILLPARAM_OFFSET UNITYSDK_OFFSET(0x170A7440)
#define MOLEMOLE_UIBUBBLETIPS_GETBUBBLETEXT_OFFSET UNITYSDK_OFFSET(0x170A72C0)
#define MOLEMOLE_UIBUBBLETIPS_GET_ISDELAYSHOW_OFFSET UNITYSDK_OFFSET(0x170A8320)
#define MOLEMOLE_UIBUBBLETIPS_ISMIDDLETIPWHITELIST_OFFSET UNITYSDK_OFFSET(0x170A8330)
#define MOLEMOLE_UIBUBBLETIPS_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x170A84E0)
#define MOLEMOLE_UIBUBBLETIPS_RESET_OFFSET UNITYSDK_OFFSET(0x170A6B70)
#define MOLEMOLE_UIBUBBLETIPS_SENDEXTRAFINISH_OFFSET UNITYSDK_OFFSET(0x170A7F70)
#define MOLEMOLE_UIBUBBLETIPS_SENDFINISH_OFFSET UNITYSDK_OFFSET(0x170A7FE0)
#define MOLEMOLE_UIBUBBLETIPS_TRIGGERWAITSTART_OFFSET UNITYSDK_OFFSET(0x170A82C0)
#define MOLEMOLE_UIBUBBLETIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x170A6BE0)
#define MOLEMOLE_UIBUBBLETIPS__FILLPARAMMAP_G___FILLPARAMMAP_48_0_OFFSET UNITYSDK_OFFSET(0x170A7800)
#define MOLEMOLE_UIBUBBLETIPS__ONPROCESS_B__55_0_OFFSET UNITYSDK_OFFSET(0x170A8A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBubbleTips_TypeDefinitionIndex = 55461;

	class UIBubbleTips : public ::MoleMole::TipShowObj
	{
	public:
		// static const ::System::Int32 PureCardTipID = 0x1895E; // 0x0
		// static const ::System::String* PureProgress; // 0x0
		// static const ::System::String* PureFinish; // 0x0
		// static const ::System::String* PureTarget; // 0x0
		// static const ::System::String* PureCurrent; // 0x0
		// static const ::System::String* PureItemID; // 0x0
		// static const ::System::Int32 PopWindowTipID = 0x1895F; // 0x0
		::System::String* RealShowText; // 0x30
		::System::String* UpdateTextCallbackCacheStringParam; // 0x38
		::Struct_2_DBBF6AB516C866C7 bubbleData; // 0x40
		::System::String* soundKey; // 0x70
		::System::Action* finishCallback; // 0x78
		::System::Action* startAddWaitListCallback; // 0x80
		::System::Action* OnShowed; // 0x88
		::Class_1_F04CEC6677F446B8* extra; // 0x90
		::System::String* tipText; // 0x98
		::System::Action* CustomInitAction; // 0xA0
		::System::Func_2<::System::String*, ::System::String*>* InitTextCallback; // 0xA8
		::System::Action_1<::Struct_2_0CDD0BEB64607A45>* UpdateTextCallback; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* sceneVarDic; // 0xB8
		::System::Collections::Generic::List_1<::System::String*>* UpdateTextCallbackCacheStringParamList; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* paramMap; // 0xC8
		::System::String* taskDesc; // 0xD0
		::System::String* UpdateTextCallbackCacheString; // 0xD8
		::System::String* overrideTipsIcon; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* specialsDic; // 0xE8
		::System::String* voiceKey; // 0xF0
		::System::Int32 extParam; // 0xF8
		::System::Int32 OverrideAvatarId; // 0xFC
		::System::Single soundPlayedTime; // 0x100
		::System::Boolean isSoundPlayed; // 0x104
		::System::Nullable_1<::System::Boolean> ShowWhenMiddleTip; // 0x105
		::System::Boolean canSkip; // 0x107
		::System::Int32 taskTotal; // 0x108
		::System::Int32 taskCurrent; // 0x10C
		::System::Boolean hasExtra; // 0x110
		::System::Boolean IsUpdateTextAnim; // 0x111
		::System::Boolean UseUpdateTextAnim; // 0x112
		::System::Boolean SoundPlayedFinish; // 0x113
		::System::Int32 tipflagid; // 0x114
		::System::Int32 VoiceSourceTag; // 0x118
		::Enum_3_E84F57C37B6186B1 UpdateType; // 0x11C
		::System::Int32 soundID; // 0x120
		::System::Int32 tipid; // 0x124

		::System::Void _ctor(::System::Int32 tipid, ::Enum_3_205B03D40B9BD873 page, ::System::Nullable_1<::Struct_2_DBBF6AB516C866C7> bubbleParam, ::Class_1_F04CEC6677F446B8* extra, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_205B03D40B9BD873, ::System::Nullable_1<::Struct_2_DBBF6AB516C866C7>, ::Class_1_F04CEC6677F446B8*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUBBLETIPS__CTOR_OFFSET))(this, tipid, page, bubbleParam, extra, finishCallback);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUBBLETIPS_RESET_OFFSET))(this);
		}

		::System::String* GetBubbleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUBBLETIPS_GETBUBBLETEXT_OFFSET))(this);
		}

		::System::Void FillParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUBBLETIPS_FILLPARAM_OFFSET))(this);
		}

		::System::Void FillParamMap(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* dic)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUBBLETIPS_FILLPARAMMAP_OFFSET))(this, dic);
		}

		::System::Void SendExtraFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUBBLETIPS_SENDEXTRAFINISH_OFFSET))(this);
		}

		::System::Void SendFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUBBLETIPS_SENDFINISH_OFFSET))(this);
		}

		::System::Void TriggerWaitStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUBBLETIPS_TRIGGERWAITSTART_OFFSET))(this);
		}

		::System::Boolean get_IsDelayShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUBBLETIPS_GET_ISDELAYSHOW_OFFSET))(this);
		}

		::System::Boolean IsMiddleTipWhiteList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUBBLETIPS_ISMIDDLETIPWHITELIST_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUBBLETIPS_ONPROCESS_OFFSET))(this);
		}

		::System::Void _FillParamMap_g___FillParamMap_48_0(::System::Collections::Generic::List_1<::System::String*>* res)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUBBLETIPS__FILLPARAMMAP_G___FILLPARAMMAP_48_0_OFFSET))(this, res);
		}

		::System::Void _OnProcess_b__55_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUBBLETIPS__ONPROCESS_B__55_0_OFFSET))(this);
		}
	};
}
