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

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ACQUIREANCHORSINGRID_OFFSET UNITYSDK_OFFSET(0x8EE8BB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_AUTOSETTLE_OFFSET UNITYSDK_OFFSET(0x8EE7C70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CANCELSETTLE_OFFSET UNITYSDK_OFFSET(0x8ED93D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CHECKCANSETTLEWITHGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x8EED2A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CHECKCANSETTLE_OFFSET UNITYSDK_OFFSET(0x8ED8F90)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_COMBINE_OFFSET UNITYSDK_OFFSET(0x8EE95B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x8EDB120)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_DECOMBINE_OFFSET UNITYSDK_OFFSET(0x8EE97C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EEBA70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ENABLECOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0x8ED9270)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_GETROOTGOODDATA_OFFSET UNITYSDK_OFFSET(0x8EDA400)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_GET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0x8EDB190)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ISCHILD_OFFSET UNITYSDK_OFFSET(0x8EED110)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x8EE8900)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_REFRESHANCHORSTATEWITHGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x8EED960)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_REFRESHBOTTOMCANANCHORSTATUS_OFFSET UNITYSDK_OFFSET(0x8EDABC0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_RELEASEANCHORSINGRID_OFFSET UNITYSDK_OFFSET(0x8EE8F10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SEARCHCANANCHORGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x8EDF230)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETANCHORMATCHPOSOFFSETY_OFFSET UNITYSDK_OFFSET(0x8EECF80)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETANCHORMATCHPOSOFFSET_OFFSET UNITYSDK_OFFSET(0x8EDC0A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETTLE_OFFSET UNITYSDK_OFFSET(0x8ED90F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_TRIGGERREMOVEAUDIO_OFFSET UNITYSDK_OFFSET(0x8EE9410)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x8EDEF70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x8EDA660)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA__COLLECTBOTTOMPARENTGROUPSBEFOREREFRESH_OFFSET UNITYSDK_OFFSET(0x8EEC7B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8EEC6D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA__REFRESHBOTTOMPARENTGROUPS_OFFSET UNITYSDK_OFFSET(0x8EECD70)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackGroupData_TypeDefinitionIndex = 60766;

	class AlleyPackGroupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_6E6B68B4081104EC*>* HeadAnchors; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* _GroupsToRefresh; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* BottomItemGoods; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* GroupItemIDHashSet; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GroupToRefreshGoodIDs; // 0x30
		::System::Collections::Generic::List_1<::Class_1_7622BCA9FBE661B1*>* GroupItemGoods; // 0x38
		::UnityEngine::Vector3 RootPosition; // 0x40
		::System::Boolean IsDraggingMatchAnchor; // 0x4C
		::UnityEngine::Quaternion RootRotation; // 0x50
		::RPG::Client::ActivityAlley::AlleyPackDragStateEnum DragState; // 0x60

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
