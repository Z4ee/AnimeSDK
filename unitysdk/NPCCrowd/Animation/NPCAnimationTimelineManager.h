#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/ZoneEventItem.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"
#include "unitysdk/Struct_2_4859D873C1433FD9.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_3_F2DAD7F45F518868;
namespace MoleMole { class SkillCharacterAnimatorZoneData; }
namespace MoleMole::Config { class ConfigAnimatorEventPattern; }
namespace NPCCrowd::Animation { class AnimatorEventPatternWrap; }
namespace NPCCrowd::Animation { class AnimatorZoneSegmentWrap; }
namespace NPCCrowd::Animation { class ProcessItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_CACHEPATTERN_OFFSET UNITYSDK_OFFSET(0xEC88F60)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_DISPATCHEVENTS_OFFSET UNITYSDK_OFFSET(0xEC87CA0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_DISPATCHZONES_OFFSET UNITYSDK_OFFSET(0xEC88160)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ENTERZONE_OFFSET UNITYSDK_OFFSET(0xEC87950)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_EXITALLZONE_OFFSET UNITYSDK_OFFSET(0xEC87750)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_GETFILENAMEWITHOUTEXTENSION_OFFSET UNITYSDK_OFFSET(0xEC86F10)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xEC85F20)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_INITZONEDATA_OFFSET UNITYSDK_OFFSET(0xEC89270)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xEC860A0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xEC86180)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ONENTITYADD_OFFSET UNITYSDK_OFFSET(0xEC88720)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ONENTITYREMOVE_OFFSET UNITYSDK_OFFSET(0xEC8B0C0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_UPDATECLIP_OFFSET UNITYSDK_OFFSET(0xEC87090)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xEC8B2E0)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xEC8B720)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xEC8B7B0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAnimationTimelineManager_TypeDefinitionIndex = 76939;

	class NPCAnimationTimelineManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		// static const ::System::Int32 FRAME_RATE = 0x3C; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* fileNameCache; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* animNameCache; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>* removeCache; // 0x28
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::ZoneEventItem>* curValidZones; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_F2DAD7F45F518868*>* entity2Cmp; // 0x38
		::System::Collections::Generic::HashSet_1<::System::String*>* cachedZoneConfig; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPCCrowd::Animation::ProcessItem*>* entity2Item; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Animation::AnimatorEventPatternWrap*>* animID2Patten; // 0x50
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::Struct_2_4859D873C1433FD9>>* curValidEvent; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>*>* animID2Zones; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Animation::NPCAnimationTimelineManager* Get()
		{
			return ((::NPCCrowd::Animation::NPCAnimationTimelineManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void DispatchEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_DISPATCHEVENTS_OFFSET))(this);
		}

		::System::Void DispatchZones(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_DISPATCHZONES_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateClip(::System::UInt32 entityId, ::NPCCrowd::Animation::ProcessItem* item, ::System::Int32 clipID, ::System::String* clipPath, ::System::Single outClipNormalizedTime, ::System::Single outAnimLength, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::ProcessItem*, ::System::Int32, ::System::String*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_UPDATECLIP_OFFSET))(this, entityId, item, clipID, clipPath, outClipNormalizedTime, outAnimLength, isInit);
		}

		::System::Void ExitAllZone(::NPCCrowd::Animation::ProcessItem* item, ::System::UInt32 entityId, ::System::Single outClipNormalizedTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::ProcessItem*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_EXITALLZONE_OFFSET))(this, item, entityId, outClipNormalizedTime);
		}

		::System::Void EnterZone(::NPCCrowd::Animation::ProcessItem* item, ::System::UInt32 entityId, ::System::Single outClipNormalizedTime, ::System::Single outAnimLength, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>* zoneList)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::ProcessItem*, ::System::UInt32, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ENTERZONE_OFFSET))(this, item, entityId, outClipNormalizedTime, outAnimLength, zoneList);
		}

		::System::Void OnEntityAdd(::Class_3_F2DAD7F45F518868* npcCmp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ONENTITYADD_OFFSET))(this, npcCmp);
		}

		::System::String* GetFileNameWithoutExtension(::System::String* path)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_GETFILENAMEWITHOUTEXTENSION_OFFSET))(this, path);
		}

		::System::Void CachePattern(::MoleMole::Config::ConfigAnimatorEventPattern* eventPatten)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorEventPattern*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_CACHEPATTERN_OFFSET))(this, eventPatten);
		}

		::System::Void InitZoneData(::MoleMole::SkillCharacterAnimatorZoneData* animZone)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterAnimatorZoneData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_INITZONEDATA_OFFSET))(this, animZone);
		}

		::System::Void OnEntityRemove(::Class_3_F2DAD7F45F518868* npcCmp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER_ONENTITYREMOVE_OFFSET))(this, npcCmp);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}
	};
}
