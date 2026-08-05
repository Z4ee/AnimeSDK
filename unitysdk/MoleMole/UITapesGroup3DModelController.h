#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D3581D8A71834B25;
class Class_1_E16AAB011063882E;
class Class_2_1EF6707C62AC94B6_1;
class Class_2_33EA27A25F076E07;
class Class_2_A0D395A24A28DAE3;
namespace MoleMole { class TapesBackgroundDrag; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainStoryTapeDummyWidgetController_Context; }
namespace MoleMole { class UITape3DModelController; }
namespace MoleMole { class UITapesGroup3DModelController_ArchiveTapes; }
namespace MoleMole { class UITapesGroup3DModelController_Context; }
namespace MoleMole::Config { class MainStoryConfigPageCamera; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CANCELSHOWCURTAPE_OFFSET UNITYSDK_OFFSET(0x15EB33E0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CIRCLEINDEX_OFFSET UNITYSDK_OFFSET(0x15EB8150)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CIRCLETAPEGROUP_OFFSET UNITYSDK_OFFSET(0x15EB17E0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CIRCLETAPE_OFFSET UNITYSDK_OFFSET(0x15EB26B0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CLAMPDRAGDELTA_OFFSET UNITYSDK_OFFSET(0x15EB7B40)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CREATESCROLLTAPES_OFFSET UNITYSDK_OFFSET(0x15EB0C80)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CREATETAPESNOPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15EB0080)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CREATETAPESWITHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15EAE3C0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_DOCREATETAPES_OFFSET UNITYSDK_OFFSET(0x15EB47D0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_DOFIXTAPEPOS_OFFSET UNITYSDK_OFFSET(0x15EB7C70)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_DOSHOWTAPE_OFFSET UNITYSDK_OFFSET(0x15EB2F80)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_FILTERCENTERTAPE_OFFSET UNITYSDK_OFFSET(0x15EAD010)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_FIXTAPEPOS_OFFSET UNITYSDK_OFFSET(0x15EB80F0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETALLTAPES_OFFSET UNITYSDK_OFFSET(0x15EB37C0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETSHOWINGVHSTEMPLATEIDS_OFFSET UNITYSDK_OFFSET(0x15EB3E60)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETSINGLEPRESSSPEED_OFFSET UNITYSDK_OFFSET(0x15EB7AA0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETTAPEBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x15EB3620)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GET_GETCURSHOWINGTAPEINDEX_OFFSET UNITYSDK_OFFSET(0x15EABAE0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GET_TAPESCOUNT_OFFSET UNITYSDK_OFFSET(0x15EABA80)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_INITDUMMYSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x15EB5340)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ISSHOWINGONETAPE_OFFSET UNITYSDK_OFFSET(0x15EB1790)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15EAD390)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_LIFTTAPES_OFFSET UNITYSDK_OFFSET(0x15EB6A00)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x15EB1B80)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x15EB1AD0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONCLICKTAPE_OFFSET UNITYSDK_OFFSET(0x15EB2A80)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EABC50)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x15EB16D0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x15EB1BD0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONGAMEPADMOVE_OFFSET UNITYSDK_OFFSET(0x15EB7260)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15EB7340)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONPERFORMANCEDONE_OFFSET UNITYSDK_OFFSET(0x15EB6820)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONPOINTUP_OFFSET UNITYSDK_OFFSET(0x15EB2900)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15EAC040)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EAC0D0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EABCE0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EABF80)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PERFORMANCEEXPAND_OFFSET UNITYSDK_OFFSET(0x15EB5B70)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PERFORMANCESHRINK_OFFSET UNITYSDK_OFFSET(0x15EB6230)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_REDIRECTTAPE_OFFSET UNITYSDK_OFFSET(0x15EB3AE0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_REFRESHCOVERVIEW_OFFSET UNITYSDK_OFFSET(0x15EB59E0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SELECTEASINGSTARTTAPE_OFFSET UNITYSDK_OFFSET(0x15EB23A0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SHOWTAPEBYINDEX_OFFSET UNITYSDK_OFFSET(0x15EB3C90)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SHOWTAPEBYTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x15EB3820)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_STARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15EAFDC0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SWITCHARCHIVETYPE_OFFSET UNITYSDK_OFFSET(0x15EAD3F0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SWITCHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15EAD510)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TRYLOADTAPES_OFFSET UNITYSDK_OFFSET(0x15EAEEB0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_UPDATECIRCLECORDON_OFFSET UNITYSDK_OFFSET(0x15EB4F20)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_UPDATESHRINKTAPESTATE_OFFSET UNITYSDK_OFFSET(0x15EB4060)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_UPDATETAPESTATE_OFFSET UNITYSDK_OFFSET(0x15EAC970)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15EAC1E0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__CANCELSHOWCURTAPE_B__24_0_OFFSET UNITYSDK_OFFSET(0x15EB8410)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__CANCELSHOWCURTAPE_B__24_1_OFFSET UNITYSDK_OFFSET(0x15EB8480)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EB8400)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB81E0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__DOSHOWTAPE_B__56_0_OFFSET UNITYSDK_OFFSET(0x15EB89B0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__INITDUMMYSCROLLVIEW_B__36_0_OFFSET UNITYSDK_OFFSET(0x15EB8500)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__INITDUMMYSCROLLVIEW_B__36_1_OFFSET UNITYSDK_OFFSET(0x15EB8590)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__ONINPUTACTION_B__46_0_OFFSET UNITYSDK_OFFSET(0x15EB89A0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__ONINPUTACTION_B__46_1_OFFSET UNITYSDK_OFFSET(0x15EB8990)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__ONPERFORMANCEDONE_B__43_0_OFFSET UNITYSDK_OFFSET(0x15EB8760)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15EB8A30)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15EB8AC0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15EB8B80)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15EB8B90)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15EB8BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController_TypeDefinitionIndex = 60810;

	class UITapesGroup3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Int32* StaticGet__lockid()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITapesGroup3DModelController_TypeDefinitionIndex)->GetStaticField(0xDD40);
		}
		// static const ::System::String* SwitchArchiveTypePerformKey; // 0x0
		::System::Single TestNormalizedTime; // 0x360
		::MoleMole::UITapesGroup3DModelController_Context* _context; // 0x368
		::Class_2_33EA27A25F076E07* mainStoryModel; // 0x370
		::Class_2_A0D395A24A28DAE3* _view; // 0x378
		::Class_1_E16AAB011063882E* _commonUiCamera; // 0x380
		::MoleMole::Config::MainStoryConfigPageCamera* _cameraConfig; // 0x388
		::System::Int32 CurVhsTemplateID; // 0x390
		::System::Collections::Generic::List_1<::System::Int32>* _archiveTypes; // 0x398
		::System::Int32 _archiveTypeIdx; // 0x3A0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes*>* _allArchiveTapes; // 0x3A8
		::MoleMole::UITapesGroup3DModelController_ArchiveTapes* _curArchiveTapes; // 0x3B0
		::System::Boolean _isDraggingTapes; // 0x3B8
		::System::Boolean _isPerformance; // 0x3B9
		::MoleMole::TapesBackgroundDrag* wallDrag; // 0x3C0
		::UnityEngine::Vector3 kDefaultTapeRotation; // 0x3C8
		::System::Collections::Generic::List_1<::MoleMole::UITape3DModelController*>* selectedTapes; // 0x3D8
		::System::Single soundPlayDisInteval; // 0x3E0
		::System::Single currentDragDistance; // 0x3E4
		::System::Boolean _canGamePadMove; // 0x3E8
		::Foundation::Coroutine::CoroutineHandle _gamePadDelayHandle; // 0x3EC
		::System::Single intevalTime; // 0x3F0
		::System::Boolean playDragTapesSound; // 0x3F4
		::Class_1_D3581D8A71834B25* _scriptableAnimationPlayer; // 0x3F8
		::System::Single _tapeOrigLocalScaleX; // 0x400
		::UnityEngine::Vector3 _camDir; // 0x404
		::System::Single _cachedCamPosY; // 0x410
		::System::Single _cachedFlipLightsPosY; // 0x414
		::System::Single _cachedShowLightsPosY; // 0x418
		::System::Boolean _liftLightTransform; // 0x41C
		::System::Collections::Generic::List_1<::MoleMole::UIMainStoryTapeDummyWidgetController_Context*>* _dummyTapeData; // 0x420

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Int32 get_TapesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GET_TAPESCOUNT_OFFSET))(this);
		}

		::System::Int32 get_GetCurShowingTapeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GET_GETCURSHOWINGTAPEINDEX_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SwitchArchiveType(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SWITCHARCHIVETYPE_OFFSET))(this, idx);
		}

		::System::Boolean CreateTapesWithPerformance(::System::Int32 archiveID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CREATETAPESWITHPERFORMANCE_OFFSET))(this, archiveID);
		}

		::System::Boolean CreateTapesNoPerformance(::System::Int32 archiveID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CREATETAPESNOPERFORMANCE_OFFSET))(this, archiveID);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPointDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONDRAG_OFFSET))(this, eventData, worldPointDelta);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 wordlPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONBEGINDRAG_OFFSET))(this, eventData, wordlPoint);
		}

		::System::Void OnApplicationFocus(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, focus);
		}

		::System::Void OnEndDrag(::System::Single length, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONENDDRAG_OFFSET))(this, length, speed);
		}

		::System::Void OnPointUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONPOINTUP_OFFSET))(this, eventData);
		}

		::System::Void OnClickTape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONCLICKTAPE_OFFSET))(this);
		}

		::System::Void CancelShowCurTape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CANCELSHOWCURTAPE_OFFSET))(this);
		}

		::System::Boolean IsShowingOneTape()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ISSHOWINGONETAPE_OFFSET))(this);
		}

		::MoleMole::UITape3DModelController* GetTapeByTemplate(::System::Int32 templateID)
		{
			return ((::MoleMole::UITape3DModelController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETTAPEBYTEMPLATE_OFFSET))(this, templateID);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* GetAllTapes()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETALLTAPES_OFFSET))(this);
		}

		::System::Void ShowTapeByTemplateID(::System::Int32 templateID, ::System::Boolean playAnim, ::System::Action* callback, ::System::Boolean playSound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SHOWTAPEBYTEMPLATEID_OFFSET))(this, templateID, playAnim, callback, playSound);
		}

		::System::Void ShowTapeByIndex(::System::Int32 tapeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SHOWTAPEBYINDEX_OFFSET))(this, tapeIndex);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetShowingVhsTemplateIDs(::System::Int32 archiveType)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETSHOWINGVHSTEMPLATEIDS_OFFSET))(this, archiveType);
		}

		::System::Void UpdateTapeState(::MoleMole::UITape3DModelController* tape, ::UnityEngine::AnimationCurve* flipAnimCurve)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITape3DModelController*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_UPDATETAPESTATE_OFFSET))(this, tape, flipAnimCurve);
		}

		::System::Void UpdateShrinkTapeState(::MoleMole::UITape3DModelController* tape, ::UnityEngine::Vector3 targetPosition, ::System::Single totalDist)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITape3DModelController*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_UPDATESHRINKTAPESTATE_OFFSET))(this, tape, targetPosition, totalDist);
		}

		::MoleMole::UITapesGroup3DModelController_ArchiveTapes* TryLoadTapes(::System::Int32 archiveType, ::System::Int32 archiveID, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 left, ::UnityEngine::Vector3 right)
		{
			return ((::MoleMole::UITapesGroup3DModelController_ArchiveTapes*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_TRYLOADTAPES_OFFSET))(this, archiveType, archiveID, center, left, right);
		}

		::System::Void CreateScrollTapes(::System::Int32 archiveType, ::System::Int32 archiveID, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 left, ::UnityEngine::Vector3 right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CREATESCROLLTAPES_OFFSET))(this, archiveType, archiveID, center, left, right);
		}

		::System::Void DoCreateTapes(::MoleMole::UITapesGroup3DModelController_ArchiveTapes* archiveTapes, ::System::Collections::Generic::List_1<::Class_2_1EF6707C62AC94B6_1*>* vhsConfigList, ::System::Int32 totalNum, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 startTapePos, ::System::Single tapeWidth, ::System::Int32 targetDataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes*, ::System::Collections::Generic::List_1<::Class_2_1EF6707C62AC94B6_1*>*, ::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_DOCREATETAPES_OFFSET))(this, archiveTapes, vhsConfigList, totalNum, parent, startTapePos, tapeWidth, targetDataIndex);
		}

		::System::Void InitDummyScrollView(::MoleMole::UITapesGroup3DModelController_ArchiveTapes* archiveTapes, ::System::Int32 targetDataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_INITDUMMYSCROLLVIEW_OFFSET))(this, archiveTapes, targetDataIndex);
		}

		::System::Void RefreshCoverView(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* tapes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_REFRESHCOVERVIEW_OFFSET))(this, tapes);
		}

		::System::Void UpdateCircleCordon(::MoleMole::UITapesGroup3DModelController_ArchiveTapes* archiveTapes, ::MoleMole::UITape3DModelController* tapeLf, ::MoleMole::UITape3DModelController* tapeRt, ::System::Single tolerance)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes*, ::MoleMole::UITape3DModelController*, ::MoleMole::UITape3DModelController*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_UPDATECIRCLECORDON_OFFSET))(this, archiveTapes, tapeLf, tapeRt, tolerance);
		}

		::System::Void StartPerformance(::System::Boolean initCamera, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes* archiveTapes, ::System::Single speed, ::System::Boolean isSwitchingArchiveType, ::System::Int32 switchDir)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes*, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_STARTPERFORMANCE_OFFSET))(this, initCamera, archiveTapes, speed, isSwitchingArchiveType, switchDir);
		}

		::System::Void PerformanceExpand(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* tapes, ::MoleMole::UITape3DModelController* centerTape, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>*, ::MoleMole::UITape3DModelController*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PERFORMANCEEXPAND_OFFSET))(this, tapes, centerTape, speed);
		}

		::System::Void SwitchPerformance(::System::Int32 idxOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SWITCHPERFORMANCE_OFFSET))(this, idxOffset);
		}

		::System::Void PerformanceShrink(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* tapes, ::MoleMole::UITape3DModelController* centerTape, ::System::Single duration, ::System::Single durationOffset, ::UnityEngine::AnimationCurve* curve, ::System::Action* onDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>*, ::MoleMole::UITape3DModelController*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_PERFORMANCESHRINK_OFFSET))(this, tapes, centerTape, duration, durationOffset, curve, onDone);
		}

		::System::Void OnPerformanceDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONPERFORMANCEDONE_OFFSET))(this);
		}

		::System::Void LiftTapes(::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* tapes, ::System::Single tarHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_LIFTTAPES_OFFSET))(this, tapes, tarHeight);
		}

		::System::Void OnGamePadMove(::System::Single range, ::UnityEngine::Vector2 delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONGAMEPADMOVE_OFFSET))(this, range, delta);
		}

		::System::Void OnInputAction(::System::Boolean isRight, ::UnityEngine::Vector2 inputAxis)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_ONINPUTACTION_OFFSET))(this, isRight, inputAxis);
		}

		::System::Single GetSinglePressSpeed(::UnityEngine::Vector2 inputAxis)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_GETSINGLEPRESSSPEED_OFFSET))(this, inputAxis);
		}

		::System::Void CircleTapeGroup(::UnityEngine::Vector2 delta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CIRCLETAPEGROUP_OFFSET))(this, delta);
		}

		::System::Void RedirectTape(::MoleMole::UITapesGroup3DModelController_ArchiveTapes* archiveTapes, ::UnityEngine::Vector2 delta)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_REDIRECTTAPE_OFFSET))(this, archiveTapes, delta);
		}

		::System::Void CircleTape(::MoleMole::UITape3DModelController* tape, ::UnityEngine::Vector2 delta, ::System::Boolean easing, ::System::Single easingTime, ::UnityEngine::AnimationCurve* easingCurve, ::System::Action* onEasingComplete)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITape3DModelController*, ::UnityEngine::Vector2, ::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CIRCLETAPE_OFFSET))(this, tape, delta, easing, easingTime, easingCurve, onEasingComplete);
		}

		::System::Void FixTapePos(::MoleMole::UITape3DModelController* tape)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITape3DModelController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_FIXTAPEPOS_OFFSET))(this, tape);
		}

		::System::Void DoFixTapePos(::MoleMole::UITapesGroup3DModelController_ArchiveTapes* archiveTapes, ::MoleMole::UITape3DModelController* tape)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITapesGroup3DModelController_ArchiveTapes*, ::MoleMole::UITape3DModelController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_DOFIXTAPEPOS_OFFSET))(this, archiveTapes, tape);
		}

		::UnityEngine::Vector2 ClampDragDelta(::UnityEngine::Vector2 delta)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CLAMPDRAGDELTA_OFFSET))(this, delta);
		}

		::MoleMole::UITape3DModelController* FilterCenterTape(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>* tapes)
		{
			return ((::MoleMole::UITape3DModelController*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UITape3DModelController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_FILTERCENTERTAPE_OFFSET))(this, tapes);
		}

		::MoleMole::UITape3DModelController* SelectEasingStartTape(::System::Boolean leftToRight, ::System::Single speed)
		{
			return ((::MoleMole::UITape3DModelController*(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_SELECTEASINGSTARTTAPE_OFFSET))(this, leftToRight, speed);
		}

		::System::Void DoShowTape(::MoleMole::UITape3DModelController* tape, ::System::Boolean playAnim, ::System::Action* callback, ::System::Boolean playSound)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UITape3DModelController*, ::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_DOSHOWTAPE_OFFSET))(this, tape, playAnim, callback, playSound);
		}

		::System::Int32 CircleIndex(::System::Int32 index, ::System::Int32 cycle)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CIRCLEINDEX_OFFSET))(this, index, cycle);
		}

		::System::Void _CancelShowCurTape_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__CANCELSHOWCURTAPE_B__24_0_OFFSET))(this);
		}

		::System::Void _CancelShowCurTape_b__24_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__CANCELSHOWCURTAPE_B__24_1_OFFSET))(this);
		}

		::System::Boolean _InitDummyScrollView_b__36_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__INITDUMMYSCROLLVIEW_B__36_0_OFFSET))(this);
		}

		::System::Void _InitDummyScrollView_b__36_1(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__INITDUMMYSCROLLVIEW_B__36_1_OFFSET))(this, delta);
		}

		::System::Void _OnPerformanceDone_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__ONPERFORMANCEDONE_B__43_0_OFFSET))(this);
		}

		::System::Void _OnInputAction_b__46_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__ONINPUTACTION_B__46_1_OFFSET))(this);
		}

		::System::Void _OnInputAction_b__46_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__ONINPUTACTION_B__46_0_OFFSET))(this);
		}

		::System::Void _DoShowTape_b__56_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER__DOSHOWTAPE_B__56_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
