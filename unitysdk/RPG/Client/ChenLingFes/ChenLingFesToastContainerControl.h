#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesToastContainerControl_ToastMoveAnimState.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDialogStyleType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesFeverToastControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGamePhaseToastControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesToastContainerViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesToastItemControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesToastRequestViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_CLEARALLPERSISTENTDIALOGSBYENTITY_OFFSET UNITYSDK_OFFSET(0x1B758DE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_GET_COINENDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B75A2A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_GET_FEVERENDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B75A2C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_GET_FEVERTOASTCONTROL_OFFSET UNITYSDK_OFFSET(0x1B75A320)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_GET_OPENDAYSTARTTOASTCONTROL_OFFSET UNITYSDK_OFFSET(0x1B75A300)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_GET_PREPARESTARTTOASTCONTROL_OFFSET UNITYSDK_OFFSET(0x1B75A2E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B756F50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x1B74C860)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_ONRELEASETOPOOL_OFFSET UNITYSDK_OFFSET(0x1B758870)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_ONTICK_OFFSET UNITYSDK_OFFSET(0x1B74F300)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_SET_COINENDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B75A2B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_SET_FEVERENDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B75A2D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_SET_FEVERTOASTCONTROL_OFFSET UNITYSDK_OFFSET(0x1B75A330)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_SET_OPENDAYSTARTTOASTCONTROL_OFFSET UNITYSDK_OFFSET(0x1B75A310)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_SET_PREPARESTARTTOASTCONTROL_OFFSET UNITYSDK_OFFSET(0x1B75A2F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__APPENDMOVEANIMATIONTOTARGET_OFFSET UNITYSDK_OFFSET(0x1B759610)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__CREATECONTROLBYTYPE_OFFSET UNITYSDK_OFFSET(0x1B7592E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__CREATETOASTITEMCONTROL_OFFSET UNITYSDK_OFFSET(0x1B7581C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B75A340)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__GETORCREATEACTIVELIST_OFFSET UNITYSDK_OFFSET(0x1B757E00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__GETORCREATEPENDINGQUEUE_OFFSET UNITYSDK_OFFSET(0x1B7576B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__GETPERSISTENTDIALOGKEY_OFFSET UNITYSDK_OFFSET(0x1B758810)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__GETPILEKEY_OFFSET UNITYSDK_OFFSET(0x1B757650)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__GETTOASTPARENTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B759140)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B756600)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__ONCLEARPENDINGTOASTQUEUE_OFFSET UNITYSDK_OFFSET(0x1B7590B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B7598D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B7564F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__ONTOASTREQUEST_OFFSET UNITYSDK_OFFSET(0x1B757380)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__REFRESHPILEDTOASTLAYOUT_OFFSET UNITYSDK_OFFSET(0x1B758450)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__SHOULDTRACKASPERSISTENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1B7587A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__SHOWREQUESTIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1B757960)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__TRYDISPATCHTOASTQUEUE_OFFSET UNITYSDK_OFFSET(0x1B757830)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__TRYHIDEPERSISTENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1B7574C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__TRYUPDATEPERSISTENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1B757F40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__UPDATEPERSISTENTDIALOGPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B7559C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__UPDATEPILEMOVEANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1B755C00)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastContainerControl_TypeDefinitionIndex = 80025;

	class ChenLingFesToastContainerControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::Int32 MaxPiledToastCount = 0x3; // 0x0
		// static const ::System::Single PiledToastSpacingY; // 0x0
		// static const ::System::Single PileMoveDuration; // 0x0
		// static const ::System::Single MinPiledToastItemHeight; // 0x0
		// static const ::System::Int32 GlobalPileKey = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 InvalidPileKey = 0x80000000; // 0x0
		// static const ::System::Single ToastDefaultOffsetY; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Stack_1<::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*>*>* _ItemsCache; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _ItemAssetLUT; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::RPG::GameCore::ChenLingFesDialogStyleType>, ::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*>* _PersistentDialogControls; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel*>*>* _ToastPendingQueueByEntity; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*>*>* _ActivePiledToastControlsByEntity; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*, ::System::Int32>* _ItemPileKeyMap; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*, ::RPG::Client::ChenLingFes::ChenLingFesToastContainerControl_ToastMoveAnimState>* _MoveAnimStateByItem; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*>* _ToRemoveAnimItems; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*>* _ToUpdateAnimItems; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesToastContainerControl_ToastMoveAnimState>* _ToUpdateAnimStates; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*>* _ToReleasePersistentDialogs; // 0x88
		::UnityEngine::Transform* _CoinEndTransform_k__BackingField; // 0x90
		::UnityEngine::Transform* _FeverEndTransform_k__BackingField; // 0x98
		::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastControl* _PrepareStartToastControl_k__BackingField; // 0xA0
		::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastControl* _OpenDayStartToastControl_k__BackingField; // 0xA8
		::RPG::Client::ChenLingFes::ChenLingFesFeverToastControl* _FeverToastControl_k__BackingField; // 0xB0
		::UnityEngine::Transform* _NormalToastContainerTransform; // 0xB8
		::UnityEngine::Transform* _AddFlyToastContainerTransform; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void InitPosition(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_INITPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_ONTICK_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnToastRequest(::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__ONTOASTREQUEST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Queue_1<::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel*>* _GetOrCreatePendingQueue(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::Queue_1<::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__GETORCREATEPENDINGQUEUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*>* _GetOrCreateActiveList(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__GETORCREATEACTIVELIST_OFFSET))(this, a1);
		}

		::System::Void _TryDispatchToastQueue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__TRYDISPATCHTOASTQUEUE_OFFSET))(this, a1);
		}

		::System::Boolean _ShowRequestImmediately(::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__SHOWREQUESTIMMEDIATELY_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _ShouldTrackAsPersistentDialog(::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__SHOULDTRACKASPERSISTENTDIALOG_OFFSET))(this, a1);
		}

		::System::Boolean _TryUpdatePersistentDialog(::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__TRYUPDATEPERSISTENTDIALOG_OFFSET))(this, a1);
		}

		::System::Void _TryHidePersistentDialog(::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__TRYHIDEPERSISTENTDIALOG_OFFSET))(this, a1);
		}

		::System::Void ClearAllPersistentDialogsByEntity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_CLEARALLPERSISTENTDIALOGSBYENTITY_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Int32, ::RPG::GameCore::ChenLingFesDialogStyleType> _GetPersistentDialogKey(::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel* a1)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::RPG::GameCore::ChenLingFesDialogStyleType>(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__GETPERSISTENTDIALOGKEY_OFFSET))(this, a1);
		}

		::System::Int32 _GetPileKey(::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesToastRequestViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__GETPILEKEY_OFFSET))(this, a1);
		}

		::System::Void _OnClearPendingToastQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__ONCLEARPENDINGTOASTQUEUE_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesToastItemControl* _CreateToastItemControl(::System::String* a1)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__CREATETOASTITEMCONTROL_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* _GetToastParentTransform(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__GETTOASTPARENTTRANSFORM_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFes::ChenLingFesToastItemControl* _CreateControlByType(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__CREATECONTROLBYTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void OnReleaseToPool(::RPG::Client::ChenLingFes::ChenLingFesToastItemControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_ONRELEASETOPOOL_OFFSET))(this, a1);
		}

		::System::Void _RefreshPiledToastLayout(::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__REFRESHPILEDTOASTLAYOUT_OFFSET))(this, a1);
		}

		::System::Void _AppendMoveAnimationToTarget(::RPG::Client::ChenLingFes::ChenLingFesToastItemControl* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesToastItemControl*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__APPENDMOVEANIMATIONTOTARGET_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdatePileMoveAnimations(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__UPDATEPILEMOVEANIMATIONS_OFFSET))(this, a1);
		}

		::System::Void _UpdatePersistentDialogPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__UPDATEPERSISTENTDIALOGPOSITIONS_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL__ONDESTROY_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesToastContainerViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesToastContainerViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::UnityEngine::Transform* get_CoinEndTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_GET_COINENDTRANSFORM_OFFSET))(this);
		}

		::System::Void set_CoinEndTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_SET_COINENDTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_FeverEndTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_GET_FEVERENDTRANSFORM_OFFSET))(this);
		}

		::System::Void set_FeverEndTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_SET_FEVERENDTRANSFORM_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastControl* get_PrepareStartToastControl()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_GET_PREPARESTARTTOASTCONTROL_OFFSET))(this);
		}

		::System::Void set_PrepareStartToastControl(::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_SET_PREPARESTARTTOASTCONTROL_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastControl* get_OpenDayStartToastControl()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_GET_OPENDAYSTARTTOASTCONTROL_OFFSET))(this);
		}

		::System::Void set_OpenDayStartToastControl(::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_SET_OPENDAYSTARTTOASTCONTROL_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFes::ChenLingFesFeverToastControl* get_FeverToastControl()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesFeverToastControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_GET_FEVERTOASTCONTROL_OFFSET))(this);
		}

		::System::Void set_FeverToastControl(::RPG::Client::ChenLingFes::ChenLingFesFeverToastControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesFeverToastControl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTCONTAINERCONTROL_SET_FEVERTOASTCONTROL_OFFSET))(this, a1);
		}
	};
}
