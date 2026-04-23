#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackDragStateEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7622BCA9FBE661B1;
class Class_1_8E8101AA7CE55D93_Class_1_3665D9DF747803CD;
class Class_2_6E6B68B4081104EC;
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ACQUIREANCHORSINGRID_OFFSET UNITYSDK_OFFSET(0x9ABD720)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_AUTOSETTLE_OFFSET UNITYSDK_OFFSET(0x9ABC3D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CANCELSETTLE_OFFSET UNITYSDK_OFFSET(0x9ABD890)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CHECKCANSETTLEWITHGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x9ABE850)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CHECKCANSETTLE_OFFSET UNITYSDK_OFFSET(0x9ABD5C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_COMBINE_OFFSET UNITYSDK_OFFSET(0x9ABDD40)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9ABBC90)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_DECOMBINE_OFFSET UNITYSDK_OFFSET(0x9ABDF50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9ABBAE0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ENABLECOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0x9ABC9B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_GETROOTGOODDATA_OFFSET UNITYSDK_OFFSET(0x9ABBC10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_GET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0x9ABE5B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ISCHILD_OFFSET UNITYSDK_OFFSET(0x9ABE420)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x9ABCBA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_REFRESHANCHORSTATEWITHGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x9ABEF10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_REFRESHBOTTOMCANANCHORSTATUS_OFFSET UNITYSDK_OFFSET(0x9ABDB60)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_RELEASEANCHORSINGRID_OFFSET UNITYSDK_OFFSET(0x9ABDA00)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SEARCHCANANCHORGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x9ABE700)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETANCHORMATCHPOSOFFSETY_OFFSET UNITYSDK_OFFSET(0x9ABE0B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETANCHORMATCHPOSOFFSET_OFFSET UNITYSDK_OFFSET(0x9ABE240)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETTLE_OFFSET UNITYSDK_OFFSET(0x9ABC830)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_TRIGGERREMOVEAUDIO_OFFSET UNITYSDK_OFFSET(0x9ABCA00)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x9ABBD00)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x9ABBF30)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA__COLLECTBOTTOMPARENTGROUPSBEFOREREFRESH_OFFSET UNITYSDK_OFFSET(0x9ABCDF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9ABBA00)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA__REFRESHBOTTOMPARENTGROUPS_OFFSET UNITYSDK_OFFSET(0x9ABD3B0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackGroupData_TypeDefinitionIndex = 68215;

	class AlleyPackGroupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_7622BCA9FBE661B1*>* GroupItemGoods; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* _GroupsToRefresh; // 0x18
		::System::Collections::Generic::List_1<::Class_2_6E6B68B4081104EC*>* HeadAnchors; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* BottomItemGoods; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* GroupItemIDHashSet; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GroupToRefreshGoodIDs; // 0x38
		::UnityEngine::Vector3 RootPosition; // 0x40
		::RPG::Client::ActivityAlley::AlleyPackDragStateEnum DragState; // 0x4C
		::UnityEngine::Quaternion RootRotation; // 0x50
		::System::Boolean IsDraggingMatchAnchor; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ActivityAlley::AlleyPackGoodData* GetRootGoodData()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackGoodData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_GETROOTGOODDATA_OFFSET))(this);
		}

		::System::Boolean Contains(::RPG::Client::ActivityAlley::AlleyPackGoodData* good)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CONTAINS_OFFSET))(this, good);
		}

		::System::Void UpdatePosition(::UnityEngine::Vector3 position, ::System::Boolean refreshAnchorState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_UPDATEPOSITION_OFFSET))(this, position, refreshAnchorState);
		}

		::System::Void UpdateRotation(::UnityEngine::Quaternion rotation, ::System::Boolean refreshAnchorState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_UPDATEROTATION_OFFSET))(this, rotation, refreshAnchorState);
		}

		::System::Void AutoSettle(::Class_1_8E8101AA7CE55D93_Class_1_3665D9DF747803CD* settleParam)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8E8101AA7CE55D93_Class_1_3665D9DF747803CD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_AUTOSETTLE_OFFSET))(this, settleParam);
		}

		::System::Void EnableColliderTrigger(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ENABLECOLLIDERTRIGGER_OFFSET))(this, isEnable);
		}

		::System::Void TriggerRemoveAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_TRIGGERREMOVEAUDIO_OFFSET))(this);
		}

		::System::Void OnRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ONREMOVE_OFFSET))(this);
		}

		::System::Void Settle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETTLE_OFFSET))(this);
		}

		::System::Boolean CheckCanSettle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CHECKCANSETTLE_OFFSET))(this);
		}

		::System::Void CancelSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CANCELSETTLE_OFFSET))(this);
		}

		::System::Void ReleaseAnchorsInGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_RELEASEANCHORSINGRID_OFFSET))(this);
		}

		::System::Void AcquireAnchorsInGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ACQUIREANCHORSINGRID_OFFSET))(this);
		}

		::System::Void RefreshBottomCanAnchorStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_REFRESHBOTTOMCANANCHORSTATUS_OFFSET))(this);
		}

		::System::Void Combine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_COMBINE_OFFSET))(this);
		}

		::System::Void DeCombine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_DECOMBINE_OFFSET))(this);
		}

		::System::Void SetAnchorMatchPosOffsetY(::System::Single offsetY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETANCHORMATCHPOSOFFSETY_OFFSET))(this, offsetY);
		}

		::System::Void SetAnchorMatchPosOffset(::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETANCHORMATCHPOSOFFSET_OFFSET))(this, offset);
		}

		::System::Boolean IsChild(::UnityEngine::Transform* transform)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ISCHILD_OFFSET))(this, transform);
		}

		::System::Boolean get_IsSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_GET_ISSETTLED_OFFSET))(this);
		}

		::System::Void _CollectBottomParentGroupsBeforeRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA__COLLECTBOTTOMPARENTGROUPSBEFOREREFRESH_OFFSET))(this);
		}

		::System::Void _RefreshBottomParentGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA__REFRESHBOTTOMPARENTGROUPS_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>> SearchCanAnchorGridOffset(::System::Int32 offsetX, ::System::Int32 offsetY, ::System::Int32 offsetZ)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SEARCHCANANCHORGRIDOFFSET_OFFSET))(this, offsetX, offsetY, offsetZ);
		}

		::System::Boolean CheckCanSettleWithGridOffset(::System::Int32 gridOffsetX, ::System::Int32 gridOffsetY, ::System::Int32 gridOffsetZ)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CHECKCANSETTLEWITHGRIDOFFSET_OFFSET))(this, gridOffsetX, gridOffsetY, gridOffsetZ);
		}

		::System::Void RefreshAnchorStateWithGridOffset(::System::Int32 gridOffsetX, ::System::Int32 gridOffsetY, ::System::Int32 gridOffsetZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_REFRESHANCHORSTATEWITHGRIDOFFSET_OFFSET))(this, gridOffsetX, gridOffsetY, gridOffsetZ);
		}
	};
}
