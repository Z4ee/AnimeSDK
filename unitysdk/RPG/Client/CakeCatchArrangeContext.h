#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainCakeCatchExhibitController_CatGroundType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeCatchArrangeCameraManager; }
namespace RPG::Client { class CakeCatchArrangeStatus; }
namespace RPG::Client { class CakeCatchDIYHistory; }
namespace RPG::Client { class TrainCakeCatchExhibitController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_ACTIVEENTRANCECAMERASIDE_OFFSET UNITYSDK_OFFSET(0x9ECB000)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_ACTIVEENTRANCECAMERA_OFFSET UNITYSDK_OFFSET(0x9ECA7D0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_ACTIVEGROUNDCAMERA_OFFSET UNITYSDK_OFFSET(0x9ECB050)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARALL_OFFSET UNITYSDK_OFFSET(0x9ECAB50)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEAREDITMODE_OFFSET UNITYSDK_OFFSET(0x9ECA440)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0x9ECA2C0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARSELECTEDCAT_OFFSET UNITYSDK_OFFSET(0x9ECADC0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARSHELFCAKE_OFFSET UNITYSDK_OFFSET(0x9ECA820)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EC88E0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETARRANGESTATUS_OFFSET UNITYSDK_OFFSET(0x9ECBAB0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETFREERANGEAREASINGLECAKEID_OFFSET UNITYSDK_OFFSET(0x9ECAE90)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETGROUNDAREAPOSE_OFFSET UNITYSDK_OFFSET(0x9ECAE20)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETTOTALUSEDCOUNT_OFFSET UNITYSDK_OFFSET(0x9EC92D0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_GET_ARRANGEHISTORY_OFFSET UNITYSDK_OFFSET(0x9ECBEA0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x9EC6DE0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_ISSHELFUSING_OFFSET UNITYSDK_OFFSET(0x9ECAF30)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_SETCAKECATCHSHELF_OFFSET UNITYSDK_OFFSET(0x9EC8EE0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_SETGROUNDCAKESELECTED_OFFSET UNITYSDK_OFFSET(0x9ECAD50)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_SETSHELFCAKESELECTED_OFFSET UNITYSDK_OFFSET(0x9ECACE0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_SET_ARRANGEHISTORY_OFFSET UNITYSDK_OFFSET(0x9ECBEB0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_SWITCHGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0x9ECA050)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_TRYADDCAKETOGROUND_OFFSET UNITYSDK_OFFSET(0x9EC97B0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_TRYADDCAKETOSHELF_OFFSET UNITYSDK_OFFSET(0x9EC90C0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_TRYRESETGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0x9ECA940)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC6B60)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__INITIALIZEARRANGESTATUS_OFFSET UNITYSDK_OFFSET(0x9EC7100)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__ISCAKEKNOWPOSE_OFFSET UNITYSDK_OFFSET(0x9EC9AD0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__LOADCAMERA_OFFSET UNITYSDK_OFFSET(0x9EC8440)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__SETPLAYERVISIBLE_OFFSET UNITYSDK_OFFSET(0x9EC8650)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__SYNCFRAMECAT_OFFSET UNITYSDK_OFFSET(0x9EC95F0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__SYNCFRAMETYPE_OFFSET UNITYSDK_OFFSET(0x9EC8FE0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__SYNCGROUNDCAT_OFFSET UNITYSDK_OFFSET(0x9EC7CC0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__SYNCGROUNDTYPE_OFFSET UNITYSDK_OFFSET(0x9EC9ED0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__UPDATEARRANGESTATUS_OFFSET UNITYSDK_OFFSET(0x9EC7580)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchArrangeContext_TypeDefinitionIndex = 58012;

	class CakeCatchArrangeContext : public ::System::Object
	{
	public:
		::RPG::Client::CakeCatchArrangeCameraManager* _CameraManager; // 0x10
		::UnityEngine::GameObject* _CameraPrefab; // 0x18
		::RPG::Client::CakeCatchDIYHistory* _ArrangeHistory_k__BackingField; // 0x20
		::RPG::Client::TrainCakeCatchExhibitController* _ExhibitController; // 0x28
		::UnityEngine::Transform* _CameraRoot; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeCatchArrangeStatus*>* _ArrangeStatusDict; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Void SetCakeCatchShelf(::System::Boolean isSpecialShelf)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_SETCAKECATCHSHELF_OFFSET))(this, isSpecialShelf);
		}

		::System::Void TryAddCakeToShelf(::System::UInt32 slotId, ::System::UInt32 cakeId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_TRYADDCAKETOSHELF_OFFSET))(this, slotId, cakeId);
		}

		::System::Void TryAddCakeToGround(::System::UInt32 slotId, ::System::Int32 index, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType pose, ::System::UInt32 cakeId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_TRYADDCAKETOGROUND_OFFSET))(this, slotId, index, pose, cakeId);
		}

		::System::Void SwitchGroundPose(::System::UInt32 groundSlotId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_SWITCHGROUNDPOSE_OFFSET))(this, groundSlotId);
		}

		::System::Void ClearGroundPose(::System::UInt32 groundSlotId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARGROUNDPOSE_OFFSET))(this, groundSlotId);
		}

		::System::Void ClearEditMode(::System::Boolean needActiveCamera)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEAREDITMODE_OFFSET))(this, needActiveCamera);
		}

		::System::Void ClearShelfCake(::System::UInt32 slotId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARSHELFCAKE_OFFSET))(this, slotId);
		}

		::System::Void TryResetGroundPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_TRYRESETGROUNDPOSE_OFFSET))(this);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARALL_OFFSET))(this);
		}

		::System::Void SetShelfCakeSelected(::System::UInt32 slotId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_SETSHELFCAKESELECTED_OFFSET))(this, slotId);
		}

		::System::Void SetGroundCakeSelected(::System::UInt32 slotId, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_SETGROUNDCAKESELECTED_OFFSET))(this, slotId, index);
		}

		::System::Void ClearSelectedCat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARSELECTEDCAT_OFFSET))(this);
		}

		::System::UInt32 GetGroundAreaPose(::System::UInt32 groundSlotId)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETGROUNDAREAPOSE_OFFSET))(this, groundSlotId);
		}

		::System::UInt32 GetFreeRangeAreaSingleCakeId(::System::UInt32 groundSlotId)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETFREERANGEAREASINGLECAKEID_OFFSET))(this, groundSlotId);
		}

		::System::Boolean IsShelfUsing(::System::Boolean isSpecialShelf)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_ISSHELFUSING_OFFSET))(this, isSpecialShelf);
		}

		::System::Void ActiveEntranceCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_ACTIVEENTRANCECAMERA_OFFSET))(this);
		}

		::System::Void ActiveEntranceCameraSide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_ACTIVEENTRANCECAMERASIDE_OFFSET))(this);
		}

		::System::Void ActiveGroundCamera(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_ACTIVEGROUNDCAMERA_OFFSET))(this, index);
		}

		::System::Void _SyncFrameType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__SYNCFRAMETYPE_OFFSET))(this);
		}

		::System::Void _SyncFrameCat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__SYNCFRAMECAT_OFFSET))(this);
		}

		::System::Void _SyncGroundType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__SYNCGROUNDTYPE_OFFSET))(this);
		}

		::System::Void _SyncGroundCat(::System::Boolean isShowTransCat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__SYNCGROUNDCAT_OFFSET))(this, isShowTransCat);
		}

		::System::Void _InitializeArrangeStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__INITIALIZEARRANGESTATUS_OFFSET))(this);
		}

		::System::Void _UpdateArrangeStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__UPDATEARRANGESTATUS_OFFSET))(this);
		}

		::System::Boolean _IsCakeKnowPose(::System::UInt32 cakeId, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType pose)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__ISCAKEKNOWPOSE_OFFSET))(this, cakeId, pose);
		}

		::System::Void _LoadCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__LOADCAMERA_OFFSET))(this);
		}

		::System::Void _SetPlayerVisible(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__SETPLAYERVISIBLE_OFFSET))(this, isVisible);
		}

		::RPG::Client::CakeCatchArrangeStatus* GetArrangeStatus(::System::UInt32 cakeId)
		{
			return ((::RPG::Client::CakeCatchArrangeStatus*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETARRANGESTATUS_OFFSET))(this, cakeId);
		}

		::System::UInt32 GetTotalUsedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETTOTALUSEDCOUNT_OFFSET))(this);
		}

		::RPG::Client::CakeCatchDIYHistory* get_ArrangeHistory()
		{
			return ((::RPG::Client::CakeCatchDIYHistory*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_GET_ARRANGEHISTORY_OFFSET))(this);
		}

		::System::Void set_ArrangeHistory(::RPG::Client::CakeCatchDIYHistory* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeCatchDIYHistory*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_SET_ARRANGEHISTORY_OFFSET))(this, value);
		}
	};
}
