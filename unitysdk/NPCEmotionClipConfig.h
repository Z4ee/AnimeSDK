#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class NPCEmotionClipAsset;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AvatarMask; }

#define NPCEMOTIONCLIPCONFIG_GETCLIPASSET_OFFSET UNITYSDK_OFFSET(0x10D95350)
#define NPCEMOTIONCLIPCONFIG_GET_FACIALMASK_OFFSET UNITYSDK_OFFSET(0x10D951A0)
#define NPCEMOTIONCLIPCONFIG_UNLOADASSETS_OFFSET UNITYSDK_OFFSET(0x10D954D0)
#define NPCEMOTIONCLIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10D95760)

inline static constexpr unsigned int NPCEmotionClipConfig_TypeDefinitionIndex = 59989;

class NPCEmotionClipConfig : public ::System::Object
{
public:
	::Foundation::AssetPath facialMaskPath; // 0x10
	::UnityEngine::AvatarMask* _facialMask; // 0x20
	::Foundation::AssetRequestHandle _facialMaskHandle; // 0x28
	::System::Collections::Generic::List_1<::NPCEmotionClipAsset*>* clipAssets; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCEMOTIONCLIPCONFIG__CTOR_OFFSET))(this);
	}

	::UnityEngine::AvatarMask* get_FacialMask()
	{
		return ((::UnityEngine::AvatarMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCEMOTIONCLIPCONFIG_GET_FACIALMASK_OFFSET))(this);
	}

	::NPCEmotionClipAsset* GetClipAsset(::System::String* facialKey)
	{
		return ((::NPCEmotionClipAsset*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCEMOTIONCLIPCONFIG_GETCLIPASSET_OFFSET))(this, facialKey);
	}

	::System::Void UnloadAssets()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCEMOTIONCLIPCONFIG_UNLOADASSETS_OFFSET))(this);
	}
};
