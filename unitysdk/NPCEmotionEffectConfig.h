#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCEmotionEffect;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCEMOTIONEFFECTCONFIG_GETEFFECTKEY_OFFSET UNITYSDK_OFFSET(0x157C5370)
#define NPCEMOTIONEFFECTCONFIG_UNLOADASSETS_OFFSET UNITYSDK_OFFSET(0x157C54F0)
#define NPCEMOTIONEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x157C5530)

inline static constexpr unsigned int NPCEmotionEffectConfig_TypeDefinitionIndex = 53633;

class NPCEmotionEffectConfig : public ::System::Object
{
public:
	::System::String* slotName; // 0x10
	::System::Single offsetHorizontal; // 0x18
	::System::Single offsetVertical; // 0x1C
	::System::Single offsetRadial; // 0x20
	::System::Collections::Generic::List_1<::NPCEmotionEffect*>* effectAssets; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCEMOTIONEFFECTCONFIG__CTOR_OFFSET))(this);
	}

	::System::String* GetEffectKey(::System::String* facialKey)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCEMOTIONEFFECTCONFIG_GETEFFECTKEY_OFFSET))(this, facialKey);
	}

	::System::Void UnloadAssets()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCEMOTIONEFFECTCONFIG_UNLOADASSETS_OFFSET))(this);
	}
};
