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

#define NPCAVATARRUNTIMEDATA_CLEAN_OFFSET UNITYSDK_OFFSET(0xFF79090)
#define NPCAVATARRUNTIMEDATA_GET_ISFIXTAG_OFFSET UNITYSDK_OFFSET(0xFF78CA0)
#define NPCAVATARRUNTIMEDATA_REBUILDAUDIOANDGAMEPLAYTAGACTIONCACHE_OFFSET UNITYSDK_OFFSET(0xFF78D30)
#define NPCAVATARRUNTIMEDATA_RELEASEEMOTION_OFFSET UNITYSDK_OFFSET(0xFF79030)
#define NPCAVATARRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFF79290)

inline static constexpr unsigned int NPCAvatarRuntimeData_TypeDefinitionIndex = 46724;

class NPCAvatarRuntimeData : public ::System::Object
{
public:
	::NPCAvatarMeshAssetsSO* avatarAssetSo; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* unionLogicTags; // 0x18
	::FNpcAvatarGenericParams avatarParams; // 0x20
	::NPCAvatarMeshAssetsSO_FNpcAudioSettings resolvedAudioSettings; // 0xC0
	::System::Threading::CancellationTokenSource* avatarCts; // 0xF8
	::Foundation::Unreal::FGameplayTagQuery* blackTagQuery; // 0x100
	::NPCAvatarAudioAssetsSO* avatarAudioAssetSo; // 0x108
	::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos; // 0x110
	::Foundation::Unreal::FGameplayTagQuery* whiteTagQuery; // 0x118
	::NPCCrowd::Avatar::NPCEmotionControl* emotionControl; // 0x120
	::NPCCrowd::Avatar::NPCAvatarGOReference* avatarGoRef; // 0x128
	::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_GameplayTagActionConfig*>* mergedGameplayTagMaskActions; // 0x130
	::System::Boolean isPathNpc; // 0x138
	::System::Boolean shouldFadeOutOnDestroy; // 0x139
	::System::Boolean shouldFadeInOnCreate; // 0x13A
	::System::Boolean enableAudio; // 0x13B
	::System::Int32 populationID; // 0x13C
	::System::Int32 avatarRandomLibID; // 0x140
	::System::Boolean collisionDither; // 0x144
	::System::Boolean startFadeOut; // 0x145
	::System::Int32 avatarParamsID; // 0x148

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
