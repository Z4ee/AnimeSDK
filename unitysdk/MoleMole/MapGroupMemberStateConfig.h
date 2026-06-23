#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SMapGroupMemberStateConfigControl.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SMapGroupMemberStateConfigBounds; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MAPGROUPMEMBERSTATECONFIG_ADDTOBOUNDSLIST_OFFSET UNITYSDK_OFFSET(0x13EFB480)
#define MOLEMOLE_MAPGROUPMEMBERSTATECONFIG_GETPIVOTCENTER_OFFSET UNITYSDK_OFFSET(0x13EFB150)
#define MOLEMOLE_MAPGROUPMEMBERSTATECONFIG_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0x13EFAF60)
#define MOLEMOLE_MAPGROUPMEMBERSTATECONFIG_GET_MESHBOUNDS_OFFSET UNITYSDK_OFFSET(0x13EFAA00)
#define MOLEMOLE_MAPGROUPMEMBERSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFBA10)

namespace MoleMole
{
	inline static constexpr unsigned int MapGroupMemberStateConfig_TypeDefinitionIndex = 62005;

	class MapGroupMemberStateConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 GroupId; // 0x18
		::System::Int32 MemberId; // 0x1C
		::MoleMole::SMapGroupMemberStateConfigControl ControlInState; // 0x20
		::UnityEngine::Transform* OverridePivot; // 0x40
		::System::Single OverrideRadius; // 0x48
		::System::Single OverridePitch; // 0x4C
		::System::Single OverrideYaw; // 0x50
		::System::Boolean EnableHideIcon; // 0x54
		::System::Boolean HideMainMapWhenInBounds; // 0x55
		::System::Nullable_1<::UnityEngine::Bounds> Field_5_9; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::SMapGroupMemberStateConfigBounds*>* OverrideBounds; // 0x78
		::System::Collections::Generic::List_1<::MoleMole::SMapGroupMemberStateConfigBounds*>* RadarSplitOverrideBounds; // 0x80
		::UnityEngine::Animator* Field_5_12; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAPGROUPMEMBERSTATECONFIG__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Bounds> get_MeshBounds()
		{
			return ((::System::Nullable_1<::UnityEngine::Bounds>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAPGROUPMEMBERSTATECONFIG_GET_MESHBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAPGROUPMEMBERSTATECONFIG_GET_ANIMATOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPivotCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAPGROUPMEMBERSTATECONFIG_GETPIVOTCENTER_OFFSET))(this);
		}

		::System::Void AddToBoundsList(::System::Collections::Generic::IList_1<::UnityEngine::Bounds>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Bounds>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAPGROUPMEMBERSTATECONFIG_ADDTOBOUNDSLIST_OFFSET))(this, a1);
		}
	};
}
