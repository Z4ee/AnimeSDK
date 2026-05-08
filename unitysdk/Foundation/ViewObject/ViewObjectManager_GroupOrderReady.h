#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_CAREGROUPORDERVO_OFFSET UNITYSDK_OFFSET(0x779BC0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_FINISH_OFFSET UNITYSDK_OFFSET(0x779BB0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_GET_ISALLREADY_OFFSET UNITYSDK_OFFSET(0x4B6AA0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_MARKVOREADY_OFFSET UNITYSDK_OFFSET(0x779CC0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_SET_ISALLREADY_OFFSET UNITYSDK_OFFSET(0x779B90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_SHOOTCACHEVO_OFFSET UNITYSDK_OFFSET(0x779C50)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_SKIPVO_OFFSET UNITYSDK_OFFSET(0x779CE0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_UPDATECHECKALLREADY_OFFSET UNITYSDK_OFFSET(0x779C60)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY__CHECKALLREADY_OFFSET UNITYSDK_OFFSET(0x779CB0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY__CTOR_OFFSET UNITYSDK_OFFSET(0x779BA0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_GroupOrderReady_TypeDefinitionIndex = 66393;

	struct alignas(8) ViewObjectManager_GroupOrderReady
	{
		::System::UInt32 GroupID; // 0x10
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* viewObjectHandleList; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* viewObjectHandleMarkSet; // 0x20
		::System::Int32 waitTargetFrameCount; // 0x28
		::System::Boolean _isAllReady_k__BackingField; // 0x2C
		::System::Boolean isFinished; // 0x2D

		::System::Void _ctor(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY__CTOR_OFFSET))(this, groupID);
		}

		::System::Boolean get_isAllReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_GET_ISALLREADY_OFFSET))(this);
		}

		::System::Void set_isAllReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_SET_ISALLREADY_OFFSET))(this, value);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_FINISH_OFFSET))(this);
		}

		::System::Void CareGroupOrderVO(::Foundation::ViewObject::ViewObjectHandle vo, ::System::Int32 waitTargetFrameCount)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_CAREGROUPORDERVO_OFFSET))(this, vo, waitTargetFrameCount);
		}

		::System::Void ShootCacheVO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_SHOOTCACHEVO_OFFSET))(this);
		}

		::System::Boolean UpdateCheckAllReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_UPDATECHECKALLREADY_OFFSET))(this);
		}

		::System::Void _CheckAllReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY__CHECKALLREADY_OFFSET))(this);
		}

		::System::Boolean MarkVOReady(::Foundation::ViewObject::ViewObjectHandle vo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_MARKVOREADY_OFFSET))(this, vo);
		}

		::System::Boolean SkipVO(::Foundation::ViewObject::ViewObjectHandle vo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_GROUPORDERREADY_SKIPVO_OFFSET))(this, vo);
		}
	};
}
