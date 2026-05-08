#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Object.h"

class NPCAvatarMeshAssetsSO;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define NPCAVATARRUNTIMEDATA_CLEAN_OFFSET UNITYSDK_OFFSET(0xB522F30)
#define NPCAVATARRUNTIMEDATA_GET_ISFIXTAG_OFFSET UNITYSDK_OFFSET(0xB522EA0)
#define NPCAVATARRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB5230A0)

inline static constexpr unsigned int NPCAvatarRuntimeData_TypeDefinitionIndex = 46998;

class NPCAvatarRuntimeData : public ::System::Object
{
public:
	::Foundation::Unreal::FGameplayTagQuery* blackTagQuery; // 0x10
	::NPCCrowd::Avatar::NPCAvatarGOReference* avatarGoRef; // 0x18
	::System::Threading::CancellationTokenSource* avatarCts; // 0x20
	::FNpcAvatarGenericParams avatarParams; // 0x28
	::NPCAvatarMeshAssetsSO* avatarAssetSo; // 0xC8
	::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos; // 0xD0
	::Foundation::Unreal::FGameplayTagQuery* whiteTagQuery; // 0xD8
	::System::Collections::Generic::List_1<::System::Int32>* unionLogicTags; // 0xE0
	::System::Boolean shouldFadeOutOnDestroy; // 0xE8
	::System::Boolean shouldFadeInOnCreate; // 0xE9
	::System::Boolean isPathNpc; // 0xEA
	::System::Boolean collisionDither; // 0xEB
	::System::Int32 avatarRandomLibID; // 0xEC
	::System::Int32 populationID; // 0xF0
	::System::Boolean enableAudio; // 0xF4
	::System::Boolean startFadeOut; // 0xF5
	::System::Int32 avatarParamsID; // 0xF8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA__CTOR_OFFSET))(this);
	}

	::System::Boolean get_isFixTag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_GET_ISFIXTAG_OFFSET))(this);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARRUNTIMEDATA_CLEAN_OFFSET))(this);
	}
};
