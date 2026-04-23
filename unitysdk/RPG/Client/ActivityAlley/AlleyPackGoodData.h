#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackComponentType.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23EB286BF2ED930D;
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodDef; }
namespace RPG::Client::ActivityAlley { class AlleyPackGroupData; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ACQUIRETAILANCHORSINGRID_OFFSET UNITYSDK_OFFSET(0x9ABA010)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_AUTOSETTLEREFRESHANCHORSTATE_OFFSET UNITYSDK_OFFSET(0x9ABAC90)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CANCELSETTLE_OFFSET UNITYSDK_OFFSET(0x9AB9770)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CHECKANCHORPAIRS_OFFSET UNITYSDK_OFFSET(0x9AB8F00)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CHECKCANSETTLE_OFFSET UNITYSDK_OFFSET(0x9AB8E20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ENABLECOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0x9ABA230)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GETREQUIREDHEADANCHORTYPE_OFFSET UNITYSDK_OFFSET(0x9AB8C60)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_DRAGANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x9ABB2F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_DRAGGINGFIRSTHEADANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x9ABB8C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_FIRSTHEADANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x9ABAFC0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_GROUPDATA_OFFSET UNITYSDK_OFFSET(0x9ABAFA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_ROTATEANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x9ABB600)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9ABB6D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_YAWANGLE_OFFSET UNITYSDK_OFFSET(0x9ABB810)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ISALLANCHORWAITINGATTACH_OFFSET UNITYSDK_OFFSET(0x9AB9BA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0x9ABADF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x9AB9D00)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHANCHORSTATEWITHGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x9ABA630)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHANCHORSTATE_OFFSET UNITYSDK_OFFSET(0x9AAF960)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHGROUP_OFFSET UNITYSDK_OFFSET(0x9AAA970)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHPOSDATA_OFFSET UNITYSDK_OFFSET(0x9AAF8D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_RELEASETAILANCHORSINGRID_OFFSET UNITYSDK_OFFSET(0x9AB9A50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_RESETCMPTPARENT_OFFSET UNITYSDK_OFFSET(0x9ABAD50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SETCMPTPARENT_OFFSET UNITYSDK_OFFSET(0x9ABACE0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SETTLE_OFFSET UNITYSDK_OFFSET(0x9AB9080)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_DRAGANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x9ABB3C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_FIRSTHEADANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x9ABB0A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_GROUPDATA_OFFSET UNITYSDK_OFFSET(0x9ABAFB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9ABB770)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x9AB96F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x9ABA160)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9ABB970)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackGoodData_TypeDefinitionIndex = 68211;

	class AlleyPackGoodData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackComponent* APCmptRef; // 0x10
		::RPG::Client::ActivityAlley::AlleyPackGoodDef* GoodDef; // 0x18
		::RPG::Client::ActivityAlley::AlleyPackGroupData* _GroupData_k__BackingField; // 0x20
		::Class_1_23EB286BF2ED930D* TopologyInfo; // 0x28
		::System::Boolean EnableAnchorMatchPosOffset; // 0x30
		::System::Boolean IsAutoSettleSelect; // 0x31
		::System::Boolean IsSettled; // 0x32
		::UnityEngine::Vector3 RelativePosToDragAnchor; // 0x34
		::UnityEngine::Vector3 RelativePosToFirstHeadAnchor; // 0x40
		::UnityEngine::Vector3 RelativePosToRotateAnchor; // 0x4C
		::UnityEngine::Vector3 AnchorMatchPosOffset; // 0x58
		::RPG::Client::ActivityAlley::AlleyPackComponentType ComponentType; // 0x64
		::UnityEngine::Vector3 _DragAnchorPosition; // 0x68
		::System::UInt32 RuntimeUniqueID; // 0x74
		::UnityEngine::Vector3 _FirstHeadAnchorPosition; // 0x78
		::UnityEngine::Vector3 FirstHeadRelativePosToDragAnchor; // 0x84
		::UnityEngine::Vector3 RotateAnchorRelativePosToDragAnchor; // 0x90
		::UnityEngine::Quaternion _Rotation; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckCanSettle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CHECKCANSETTLE_OFFSET))(this);
		}

		::System::Boolean CheckAnchorPairs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CHECKANCHORPAIRS_OFFSET))(this);
		}

		::System::Void Settle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SETTLE_OFFSET))(this);
		}

		::System::Void CancelSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CANCELSETTLE_OFFSET))(this);
		}

		::System::Boolean IsAllAnchorWaitingAttach()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ISALLANCHORWAITINGATTACH_OFFSET))(this);
		}

		::System::Void OnRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ONREMOVE_OFFSET))(this);
		}

		::System::Void AcquireTailAnchorsInGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ACQUIRETAILANCHORSINGRID_OFFSET))(this);
		}

		::System::Void ReleaseTailAnchorsInGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_RELEASETAILANCHORSINGRID_OFFSET))(this);
		}

		::System::Void UpdatePosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_UPDATEPOSITION_OFFSET))(this, position);
		}

		::System::Void UpdateRotation(::UnityEngine::Quaternion quaternion)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_UPDATEROTATION_OFFSET))(this, quaternion);
		}

		::System::Void EnableColliderTrigger(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ENABLECOLLIDERTRIGGER_OFFSET))(this, isEnable);
		}

		::System::Void RefreshAnchorState(::System::Boolean forceRefreshGridInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHANCHORSTATE_OFFSET))(this, forceRefreshGridInfo);
		}

		::System::Void RefreshAnchorStateWithGridOffset(::System::Int32 gridOffsetX, ::System::Int32 gridOffsetY, ::System::Int32 gridOffsetZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHANCHORSTATEWITHGRIDOFFSET_OFFSET))(this, gridOffsetX, gridOffsetY, gridOffsetZ);
		}

		::System::Void AutoSettleRefreshAnchorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_AUTOSETTLEREFRESHANCHORSTATE_OFFSET))(this);
		}

		::System::Void RefreshPosData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHPOSDATA_OFFSET))(this);
		}

		::System::Void RefreshGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHGROUP_OFFSET))(this);
		}

		::System::Void SetCmptParent(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SETCMPTPARENT_OFFSET))(this, transform);
		}

		::System::Void ResetCmptParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_RESETCMPTPARENT_OFFSET))(this);
		}

		::RPG::GameCore::AlleyPackAnchorType GetRequiredHeadAnchorType()
		{
			return ((::RPG::GameCore::AlleyPackAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GETREQUIREDHEADANCHORTYPE_OFFSET))(this);
		}

		::System::Boolean IsChildOf(::RPG::Client::ActivityAlley::AlleyPackGoodData* targetGood)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ISCHILDOF_OFFSET))(this, targetGood);
		}

		::RPG::Client::ActivityAlley::AlleyPackGroupData* get_GroupData()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_GROUPDATA_OFFSET))(this);
		}

		::System::Void set_GroupData(::RPG::Client::ActivityAlley::AlleyPackGroupData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_GROUPDATA_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_FirstHeadAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_FIRSTHEADANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_FirstHeadAnchorPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_FIRSTHEADANCHORPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_DragAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_DRAGANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_DragAnchorPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_DRAGANCHORPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_RotateAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_ROTATEANCHORPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Single get_YawAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_YAWANGLE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_DraggingFirstHeadAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_DRAGGINGFIRSTHEADANCHORPOSITION_OFFSET))(this);
		}
	};
}
