#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class NPCEmotionClipConfig;
class NPCEmotionEffectConfig;

#define NPCEMOTIONCONFIGSO__CTOR_OFFSET UNITYSDK_OFFSET(0xFDF80A0)

inline static constexpr unsigned int NPCEmotionConfigSO_TypeDefinitionIndex = 75366;

class NPCEmotionConfigSO : public ::UnityEngine::ScriptableObject
{
public:
	::NPCEmotionClipConfig* clipConfig; // 0x18
	::NPCEmotionEffectConfig* effectConfig; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCEMOTIONCONFIGSO__CTOR_OFFSET))(this);
	}
};
