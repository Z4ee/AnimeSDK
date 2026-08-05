#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase.h"

class Class_2_208CC9941471731A_344;
class Class_2_208CC9941471731A_52;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_CHECKRARITYTV_OFFSET UNITYSDK_OFFSET(0x17D949E0)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET UNITYSDK_OFFSET(0x17D94990)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET UNITYSDK_OFFSET(0x17D94950)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_GETRARITYEFFDELAY_OFFSET UNITYSDK_OFFSET(0x17D94640)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET UNITYSDK_OFFSET(0x17D94A50)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_GET_CONTENTROOTANIM_OFFSET UNITYSDK_OFFSET(0x17D94AD0)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET UNITYSDK_OFFSET(0x17D94900)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0x17D91650)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x17D91870)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET UNITYSDK_OFFSET(0x17D94910)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET UNITYSDK_OFFSET(0x17D91A80)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET UNITYSDK_OFFSET(0x17D91A20)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_STOPSOUND_OFFSET UNITYSDK_OFFSET(0x17D918D0)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D94AE0)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE___BASE_CHECKRARITYTV_OFFSET UNITYSDK_OFFSET(0x17D94BE0)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE___BASE_GETRARITYEFFDELAY_OFFSET UNITYSDK_OFFSET(0x17D94CB0)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE___BASE_GET_BLUEPRINT_NAME_OFFSET UNITYSDK_OFFSET(0x17D94CA0)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0x17D94CC0)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x17D94CD0)
#define MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE___BASE_STOPSOUND_OFFSET UNITYSDK_OFFSET(0x17D94D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStageTv3DModelControllerBase_TypeDefinitionIndex = 85874;

	class UIGachaStageTv3DModelControllerBase : public ::MoleMole::UIGachaStage3DModelControllerBase
	{
	public:
		// static const ::System::Int32 DEFAULT_SINGLE_RESULT_TV_INDEX = 0x5; // 0x0
		::System::String* TvShowInterval; // 0x648
		::System::String* OpenningDelayEnd; // 0x650
		::System::String* CamRarityEff_4Shot1; // 0x658
		::System::String* CamRarityEff_4Shot4; // 0x660
		::System::Int32 RESULT_TV_NUM; // 0x668
		::System::Int32 _singleResultTvIndex; // 0x66C
		::System::Collections::Generic::HashSet_1<::System::Int32>* _specialTvIndexs; // 0x670
		::Class_2_208CC9941471731A_344* _gachaPerformTamplate; // 0x678
		::System::Collections::Generic::List_1<::System::Int32>* _itemResults; // 0x680
		::System::String* TexSheet_Intro; // 0x688
		::System::String* TexSheet_Tv; // 0x690
		::System::String* First3TvInterval; // 0x698
		::System::Boolean SkipOpenning; // 0x6A0
		::UnityEngine::Animation* _contentRootAnim; // 0x6A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Void HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Void StopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_STOPSOUND_OFFSET))(this);
		}

		::System::Void PreloadStageBeforePlay(::Class_2_208CC9941471731A_52* template_, ::System::Action* preloadComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_52*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET))(this, template_, preloadComplete);
		}

		::System::Void OnRefreshStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET))(this);
		}

		::System::Void InitLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetLightIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET))(this);
		}

		::System::String* GetCharacterLightsTLPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET))(this);
		}

		::System::Void GetRarityEffDelay(::System::Int32 tvIndex, ::System::Single& effDelay, ::System::Single& effAnimDelay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_GETRARITYEFFDELAY_OFFSET))(this, tvIndex, effDelay, effAnimDelay);
		}

		::System::Boolean CheckRarityTv(::System::Int32 tvIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_CHECKRARITYTV_OFFSET))(this, tvIndex);
		}

		::System::Int32 get_TOTAL_TV_NUM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET))(this);
		}

		::System::String* get_BLUEPRINT_NAME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET))(this);
		}

		::UnityEngine::Animation* get_ContentRootAnim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE_GET_CONTENTROOTANIM_OFFSET))(this);
		}

		::System::Boolean __base_CheckRarityTv(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE___BASE_CHECKRARITYTV_OFFSET))(this, P0);
		}

		::System::String* __base_get_BLUEPRINT_NAME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE___BASE_GET_BLUEPRINT_NAME_OFFSET))(this);
		}

		::System::Void __base_GetRarityEffDelay(::System::Int32 P0, ::System::Single& P1, ::System::Single& P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE___BASE_GETRARITYEFFDELAY_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void __base_HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Void __base_StopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGETV3DMODELCONTROLLERBASE___BASE_STOPSOUND_OFFSET))(this);
		}
	};
}
