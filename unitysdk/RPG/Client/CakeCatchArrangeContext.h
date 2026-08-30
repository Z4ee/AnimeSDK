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

#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_ACTIVEENTRANCECAMERASIDE_OFFSET UNITYSDK_OFFSET(0x1A12CAE0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_ACTIVEENTRANCECAMERA_OFFSET UNITYSDK_OFFSET(0x1A12C1F0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_ACTIVEGROUNDCAMERA_OFFSET UNITYSDK_OFFSET(0x1A12CB30)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1A12C630)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEAREDITMODE_OFFSET UNITYSDK_OFFSET(0x1A12BE70)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0x1A12BD20)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARSELECTEDCAT_OFFSET UNITYSDK_OFFSET(0x1A12C880)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARSHELFCAKE_OFFSET UNITYSDK_OFFSET(0x1A12C240)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A12A180)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETARRANGESTATUS_OFFSET UNITYSDK_OFFSET(0x1A12D6D0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETFREERANGEAREASINGLECAKEID_OFFSET UNITYSDK_OFFSET(0x1A12C950)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETGROUNDAREAPOSE_OFFSET UNITYSDK_OFFSET(0x1A12C8E0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETTOTALUSEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1A12AC20)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_GET_ARRANGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1A12DA90)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x1A128790)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_ISSHELFUSING_OFFSET UNITYSDK_OFFSET(0x1A12CA10)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_SETCAKECATCHSHELF_OFFSET UNITYSDK_OFFSET(0x1A12A830)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_SETGROUNDCAKESELECTED_OFFSET UNITYSDK_OFFSET(0x1A12C810)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_SETSHELFCAKESELECTED_OFFSET UNITYSDK_OFFSET(0x1A12C7A0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_SET_ARRANGEHISTORY_OFFSET UNITYSDK_OFFSET(0x1A12DAA0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_SWITCHGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0x1A12BAC0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_TRYADDCAKETOGROUND_OFFSET UNITYSDK_OFFSET(0x1A12B220)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_TRYADDCAKETOSHELF_OFFSET UNITYSDK_OFFSET(0x1A12AA10)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT_TRYRESETGROUNDPOSE_OFFSET UNITYSDK_OFFSET(0x1A12C3C0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A128510)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__INITIALIZEARRANGESTATUS_OFFSET UNITYSDK_OFFSET(0x1A128B30)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__ISCAKEKNOWPOSE_OFFSET UNITYSDK_OFFSET(0x1A12B510)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__LOADCAMERA_OFFSET UNITYSDK_OFFSET(0x1A129CD0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__SETPLAYERVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A129EE0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__SYNCFRAMECAT_OFFSET UNITYSDK_OFFSET(0x1A12AFC0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__SYNCFRAMETYPE_OFFSET UNITYSDK_OFFSET(0x1A12A930)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__SYNCGROUNDCAT_OFFSET UNITYSDK_OFFSET(0x1A1295A0)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__SYNCGROUNDTYPE_OFFSET UNITYSDK_OFFSET(0x1A12B950)
#define RPG_CLIENT_CAKECATCHARRANGECONTEXT__UPDATEARRANGESTATUS_OFFSET UNITYSDK_OFFSET(0x1A128F80)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchArrangeContext_TypeDefinitionIndex = 63047;

	class CakeCatchArrangeContext : public ::System::Object
	{
	public:
		::RPG::Client::CakeCatchArrangeCameraManager* _CameraManager; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeCatchArrangeStatus*>* _ArrangeStatusDict; // 0x18
		::RPG::Client::CakeCatchDIYHistory* _ArrangeHistory_k__BackingField; // 0x20
		::RPG::Client::TrainCakeCatchExhibitController* _ExhibitController; // 0x28
		::UnityEngine::GameObject* _CameraPrefab; // 0x30
		::UnityEngine::Transform* _CameraRoot; // 0x38

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

		::System::Void SetCakeCatchShelf(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_SETCAKECATCHSHELF_OFFSET))(this, a1);
		}

		::System::Void TryAddCakeToShelf(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_TRYADDCAKETOSHELF_OFFSET))(this, a1, a2);
		}

		::System::Void TryAddCakeToGround(::System::UInt32 a1, ::System::Int32 a2, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_TRYADDCAKETOGROUND_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SwitchGroundPose(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_SWITCHGROUNDPOSE_OFFSET))(this, a1);
		}

		::System::Void ClearGroundPose(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARGROUNDPOSE_OFFSET))(this, a1);
		}

		::System::Void ClearEditMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEAREDITMODE_OFFSET))(this, a1);
		}

		::System::Void ClearShelfCake(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARSHELFCAKE_OFFSET))(this, a1);
		}

		::System::Void TryResetGroundPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_TRYRESETGROUNDPOSE_OFFSET))(this);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARALL_OFFSET))(this);
		}

		::System::Void SetShelfCakeSelected(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_SETSHELFCAKESELECTED_OFFSET))(this, a1);
		}

		::System::Void SetGroundCakeSelected(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_SETGROUNDCAKESELECTED_OFFSET))(this, a1, a2);
		}

		::System::Void ClearSelectedCat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_CLEARSELECTEDCAT_OFFSET))(this);
		}

		::System::UInt32 GetGroundAreaPose(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETGROUNDAREAPOSE_OFFSET))(this, a1);
		}

		::System::UInt32 GetFreeRangeAreaSingleCakeId(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETFREERANGEAREASINGLECAKEID_OFFSET))(this, a1);
		}

		::System::Boolean IsShelfUsing(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_ISSHELFUSING_OFFSET))(this, a1);
		}

		::System::Void ActiveEntranceCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_ACTIVEENTRANCECAMERA_OFFSET))(this);
		}

		::System::Void ActiveEntranceCameraSide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_ACTIVEENTRANCECAMERASIDE_OFFSET))(this);
		}

		::System::Void ActiveGroundCamera(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_ACTIVEGROUNDCAMERA_OFFSET))(this, a1);
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

		::System::Void _SyncGroundCat(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__SYNCGROUNDCAT_OFFSET))(this, a1);
		}

		::System::Void _InitializeArrangeStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__INITIALIZEARRANGESTATUS_OFFSET))(this);
		}

		::System::Void _UpdateArrangeStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__UPDATEARRANGESTATUS_OFFSET))(this);
		}

		::System::Boolean _IsCakeKnowPose(::System::UInt32 a1, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainCakeCatchExhibitController_CatGroundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__ISCAKEKNOWPOSE_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__LOADCAMERA_OFFSET))(this);
		}

		::System::Void _SetPlayerVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT__SETPLAYERVISIBLE_OFFSET))(this, a1);
		}

		::RPG::Client::CakeCatchArrangeStatus* GetArrangeStatus(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeCatchArrangeStatus*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETARRANGESTATUS_OFFSET))(this, a1);
		}

		::System::UInt32 GetTotalUsedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_GETTOTALUSEDCOUNT_OFFSET))(this);
		}

		::RPG::Client::CakeCatchDIYHistory* get_ArrangeHistory()
		{
			return ((::RPG::Client::CakeCatchDIYHistory*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_GET_ARRANGEHISTORY_OFFSET))(this);
		}

		::System::Void set_ArrangeHistory(::RPG::Client::CakeCatchDIYHistory* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeCatchDIYHistory*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGECONTEXT_SET_ARRANGEHISTORY_OFFSET))(this, a1);
		}
	};
}
