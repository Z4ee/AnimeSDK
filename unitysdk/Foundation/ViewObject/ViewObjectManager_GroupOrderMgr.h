#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_GroupOrderReady.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_GroupOrderReadyFlag.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_CAREGROUPORDERVO_OFFSET UNITYSDK_OFFSET(0x870A80)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_GETCURRENTGROUPORDERREADYMAP_OFFSET UNITYSDK_OFFSET(0x870990)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_GETFUNCTIONOPENFLAG_OFFSET UNITYSDK_OFFSET(0x870AC0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_GET_CURFLAG_OFFSET UNITYSDK_OFFSET(0x31D320)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_GROUPORDERWAIT_SETREADYVIEWOBJECT_OFFSET UNITYSDK_OFFSET(0x870AA0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_MARKREADYGROUPID_OFFSET UNITYSDK_OFFSET(0x8709E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_POSITIVECHECKGROUPREADY_OFFSET UNITYSDK_OFFSET(0x870AD0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x870980)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR__SHOOTONEGROUP_OFFSET UNITYSDK_OFFSET(0x870A40)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_GroupOrderMgr_TypeDefinitionIndex = 55568;

	struct alignas(8) ViewObjectManager_GroupOrderMgr
	{
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ViewObject::ViewObjectManager_GroupOrderReady>* loadingTypeGroupOrderReadyMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ViewObject::ViewObjectManager_GroupOrderReady>* postLoadingTypeGroupOrderReadyMap; // 0x18
		::System::Int32 tag; // 0x20
		::Foundation::ViewObject::ViewObjectManager_GroupOrderReadyFlag _curFlag; // 0x24
		::System::Collections::Generic::HashSet_1<::System::UInt32>* afterReadyStateGroup; // 0x28

		::System::Void _ctor(::System::Int32 tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR__CTOR_OFFSET))(this, tag);
		}

		::Foundation::ViewObject::ViewObjectManager_GroupOrderReadyFlag get_CurFlag()
		{
			return ((::Foundation::ViewObject::ViewObjectManager_GroupOrderReadyFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_GET_CURFLAG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ViewObject::ViewObjectManager_GroupOrderReady>* GetCurrentGroupOrderReadyMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ViewObject::ViewObjectManager_GroupOrderReady>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_GETCURRENTGROUPORDERREADYMAP_OFFSET))(this);
		}

		::System::Void MarkReadyGroupID(::System::UInt32 gID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_MARKREADYGROUPID_OFFSET))(this, gID);
		}

		::System::Void _ShootOneGroup(::Foundation::ViewObject::ViewObjectManager_GroupOrderReady readyData)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager_GroupOrderReady))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR__SHOOTONEGROUP_OFFSET))(this, readyData);
		}

		/*
		::System::Void CareGroupOrderVO(::Foundation::ViewObject::ViewObjectHandle vo, ::System::Int32 waitTargetFrameCount)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_CAREGROUPORDERVO_OFFSET))(this, vo, waitTargetFrameCount);
		}
		*/

		/*
		::System::Void GroupOrderWait_SetReadyViewObject(::Foundation::ViewObject::ViewObjectHandle vo, ::System::Boolean isFromSkip, ::System::Boolean clearCacheModeWhenSkipped)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_GROUPORDERWAIT_SETREADYVIEWOBJECT_OFFSET))(this, vo, isFromSkip, clearCacheModeWhenSkipped);
		}
		*/

		::Foundation::ViewObject::ViewObjectManager_GroupOrderReadyFlag GetFunctionOpenFlag()
		{
			return ((::Foundation::ViewObject::ViewObjectManager_GroupOrderReadyFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_GETFUNCTIONOPENFLAG_OFFSET))(this);
		}

		::System::Void PositiveCheckGroupReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERMGR_POSITIVECHECKGROUPREADY_OFFSET))(this);
		}
	};
}
