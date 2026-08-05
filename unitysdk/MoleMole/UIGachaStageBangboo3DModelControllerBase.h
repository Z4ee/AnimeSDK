#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase_UITextInfo.h"

class Class_2_208CC9941471731A_208;
class Class_2_208CC9941471731A_52;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET UNITYSDK_OFFSET(0x18EB4380)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET UNITYSDK_OFFSET(0x18EB4320)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET UNITYSDK_OFFSET(0x18EB44C0)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET UNITYSDK_OFFSET(0x18EB44B0)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET UNITYSDK_OFFSET(0x18EB44A0)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0x18EB2E40)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x18EB2F20)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET UNITYSDK_OFFSET(0x18EB40E0)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0x18EB4090)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_ONCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0x18EB43E0)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET UNITYSDK_OFFSET(0x18EB3180)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET UNITYSDK_OFFSET(0x18EB2F80)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB4500)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0x18EB4570)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x18EB4580)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0x18EB4610)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_ONCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0x18EB46A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStageBangboo3DModelControllerBase_TypeDefinitionIndex = 74659;

	class UIGachaStageBangboo3DModelControllerBase : public ::MoleMole::UIGachaStage3DModelControllerBase
	{
	public:
		::System::String* MidUITextMats; // 0x648
		::System::String* MidUITextRoot; // 0x650
		::System::String* MidUITextMoveDistance; // 0x658
		::System::String* CamShakeDelay; // 0x660
		::UnityEngine::Transform* _itemPosTrans; // 0x668
		::UnityEngine::Transform* _midUITextRoot; // 0x670
		::UnityEngine::Transform* _midUITextParent; // 0x678
		::UnityEngine::Transform* _topLight; // 0x680
		::UnityEngine::Transform* _faceLight; // 0x688
		::UnityEngine::Transform* _uiTextMid; // 0x690
		::UnityEngine::GameObject* _monoCGCustomGlobalAnimationGo1; // 0x698
		::UnityEngine::GameObject* _monoCGCustomGlobalAnimationGo2; // 0x6A0
		::UnityEngine::Animator* _gachaStage_bangboo_object; // 0x6A8
		::UnityEngine::Animator* _gachaStage_bangboo_object_table; // 0x6B0
		::MoleMole::UIGachaStage3DModelControllerBase_UITextInfo _midUITextInfo; // 0x6B8
		::Class_2_208CC9941471731A_208* _bangbooPerformTemplate; // 0x6E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Void HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Void PreloadStageBeforePlay(::Class_2_208CC9941471731A_52* template_, ::System::Action* preloadComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_52*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET))(this, template_, preloadComplete);
		}

		::System::Void OnRefreshStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET))(this);
		}

		::System::Boolean IsVideoTvIndex(::System::Int32 tvIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET))(this, tvIndex);
		}

		::System::Void InitLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetLightIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET))(this);
		}

		::System::String* GetCharacterLightsTLPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET))(this);
		}

		::System::Void OnCameraShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_ONCAMERASHAKE_OFFSET))(this);
		}

		::System::Int32 get_TOTAL_TV_NUM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET))(this);
		}

		::System::Int32 get_RARITY_TV_INDEX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET))(this);
		}

		::System::String* get_BLUEPRINT_NAME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET))(this);
		}

		::System::Void __base_HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void __base_HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_IsVideoTvIndex(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_ISVIDEOTVINDEX_OFFSET))(this, P0);
		}

		::System::Void __base_OnCameraShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_ONCAMERASHAKE_OFFSET))(this);
		}
	};
}
