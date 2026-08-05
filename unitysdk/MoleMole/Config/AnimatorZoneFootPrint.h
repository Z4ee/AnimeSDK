#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FootType.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FrameStepOnGroundSegment.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_8377BAB19A574A40;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorZoneFootPrint_FrameStepOnGroundData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_BUILDEXTRAANIMATORZONEINFOS_OFFSET UNITYSDK_OFFSET(0x150E9250)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FINDNEXTSEGMENTINDEX_OFFSET UNITYSDK_OFFSET(0x150EA490)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x150E9B10)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x150E9A30)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x150E9AA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT__CTOR_OFFSET UNITYSDK_OFFSET(0x150EA670)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_BUILDEXTRAANIMATORZONEINFOS_OFFSET UNITYSDK_OFFSET(0x150EA780)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x150EA820)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x150EA8E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x150EA990)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFootPrint_TypeDefinitionIndex = 90783;

	class AnimatorZoneFootPrint : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*>*>* _FrameStepOnGroundSegmentDict; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundData*>*>* FrameStepOnGroundSegmentDict; // 0x58
		::MoleMole::Config::AnimatorZoneFootPrint_FootType footType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT__CTOR_OFFSET))(this);
		}

		::System::Void BuildExtraAnimatorZoneInfos(::Class_3_F33F9DC5F4112336* animatorComponent, ::Class_1_8377BAB19A574A40* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Class_1_8377BAB19A574A40*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_BUILDEXTRAANIMATORZONEINFOS_OFFSET))(this, animatorComponent, zoneInfo);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_8377BAB19A574A40* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Single> FindNextSegmentIndex(::System::Single animNormalizedTime, ::System::Single stateFrameCount, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment>* subSegments)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Single>(*)(::PVOID, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorZoneFootPrint_FrameStepOnGroundSegment>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FINDNEXTSEGMENTINDEX_OFFSET))(this, animNormalizedTime, stateFrameCount, subSegments);
		}

		::System::Void __base_BuildExtraAnimatorZoneInfos(::Class_3_F33F9DC5F4112336* P0, ::Class_1_8377BAB19A574A40* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Class_1_8377BAB19A574A40*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_BUILDEXTRAANIMATORZONEINFOS_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_8377BAB19A574A40* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_8377BAB19A574A40*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
