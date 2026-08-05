#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNpcAudioSettings.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

class NPCAvatarMeshAssetsSO_GameplayTagActionConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCAVATARAUDIOASSETSSO__CTOR_OFFSET UNITYSDK_OFFSET(0x157A6C50)

inline static constexpr unsigned int NPCAvatarAudioAssetsSO_TypeDefinitionIndex = 53713;

class NPCAvatarAudioAssetsSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
{
public:
	::ENPCAvatarGender gender; // 0x58
	::ENPCAvatarSize size; // 0x5C
	::NPCAvatarMeshAssetsSO_FNpcAudioSettings audioSettings; // 0x60
	::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_GameplayTagActionConfig*>* gameplayTagMaskActions; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARAUDIOASSETSSO__CTOR_OFFSET))(this);
	}
};
