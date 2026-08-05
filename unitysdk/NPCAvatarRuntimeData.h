#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNpcAudioSettings.h"
#include "unitysdk/System/Object.h"

class NPCAvatarAudioAssetsSO;
class NPCAvatarMeshAssetsSO;
class NPCAvatarMeshAssetsSO_GameplayTagActionConfig;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace NPCCrowd::Avatar { class NPCEmotionControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define NPCAVATARRUNTIMEDATA_CLEAN_OFFSET UNITYSDK_OFFSET(0x9513B30)
#define NPCAVATARRUNTIMEDATA_GET_ISFIXTAG_OFFSET UNITYSDK_OFFSET(0x9513730)
#define NPCAVATARRUNTIMEDATA_REBUILDAUDIOANDGAMEPLAYTAGACTIONCACHE_OFFSET UNITYSDK_OFFSET(0x95137C0)
#define NPCAVATARRUNTIMEDATA_RELEASEEMOTION_OFFSET UNITYSDK_OFFSET(0x9513AD0)
#define NPCAVATARRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9513D30)

inline static constexpr unsigned int NPCAvatarRuntimeData_TypeDefinitionIndex = 57266;

class NPCAvatarRuntimeData : public ::System::Object
{
public:
	::FNpcAvatarGenericParams avatarParams; // 0x10
	::Foundation::Unreal::FGameplayTagQuery* blackTagQuery; // 0xB0
	::NPCCrowd::Avatar::NPCAvatarGOReference* avatarGoRef; // 0xB8
	::NPCCrowd::Avatar::NPCEmotionControl* emotionControl; // 0xC0
	::Foundation::Unreal::FGameplayTagQuery* whiteTagQuery; // 0xC8
	::NPCAvatarMeshAssetsSO* avatarAssetSo; // 0xD0
	::System::Threading::CancellationTokenSource* avatarCts; // 0xD8
	::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos; // 0xE0
	::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_GameplayTagActionConfig*>* mergedGameplayTagMaskActions; // 0xE8
	::NPCAvatarMeshAssetsSO_FNpcAudioSettings resolvedAudioSettings; // 0xF0
	::System::Collections::Generic::List_1<::System::Int32>* unionLogicTags; // 0x128
	::NPCAvatarAudioAssetsSO* avatarAudioAssetSo; // 0x130
	::System::Int32 avatarParamsID; // 0x138
	::System::Int32 populationID; // 0x13C
	::System::Int32 audioTagActionStartIndex; // 0x140
	::System::Boolean isPathNpc; // 0x144
	::System::Boolean collisionDither; // 0x145
	::System::Int32 avatarRandomLibID; // 0x148
	::System::Boolean shouldFadeInOnCreate; // 0x14C
	::System::Boolean shouldFadeOutOnDestroy; // 0x14D
	::System::Boolean enableAudio; // 0x14E
	::System::Boolean startFadeOut; // 0x14F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA__CTOR_OFFSET))(this);
	}

	::System::Boolean get_isFixTag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_GET_ISFIXTAG_OFFSET))(this);
	}

	::System::Void RebuildAudioAndGameplayTagActionCache()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_REBUILDAUDIOANDGAMEPLAYTAGACTIONCACHE_OFFSET))(this);
	}

	::System::Void ReleaseEmotion()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_RELEASEEMOTION_OFFSET))(this);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_CLEAN_OFFSET))(this);
	}
};
