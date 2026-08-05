#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/miHoYoEmotion/ElementManager_Type.h"

class NPCEmotionClipConfig;
class NPCEmotionEffectConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace miHoYoEmotion { class BaseShapeData; }
namespace miHoYoEmotion { class ClipShapeManager_CurveBinding; }
namespace miHoYoEmotion { class EmotionSetData; }

#define NPCAVATAREMOTIONPARAMSSO_UNLOADASSETS_OFFSET UNITYSDK_OFFSET(0xD87AE20)
#define NPCAVATAREMOTIONPARAMSSO__CTOR_OFFSET UNITYSDK_OFFSET(0xD87AE90)

inline static constexpr unsigned int NPCAvatarEmotionParamsSO_TypeDefinitionIndex = 70853;

class NPCAvatarEmotionParamsSO : public ::UnityEngine::ScriptableObject
{
public:
	::miHoYoEmotion::BaseShapeData* shapeData; // 0x18
	::System::Boolean matchBlendName; // 0x20
	::System::Collections::Generic::List_1<::miHoYoEmotion::ClipShapeManager_CurveBinding*>* currModelBindingList; // 0x28
	::System::Boolean useBone; // 0x30
	::miHoYoEmotion::ElementManager_Type type; // 0x34
	::System::String* defaultEmotion; // 0x38
	::System::String* resetEmotion; // 0x40
	::System::String* resetPhoneme; // 0x48
	::miHoYoEmotion::EmotionSetData* setData; // 0x50
	::NPCEmotionClipConfig* clipConfig; // 0x58
	::NPCEmotionEffectConfig* effectConfig; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATAREMOTIONPARAMSSO__CTOR_OFFSET))(this);
	}

	::System::Void UnloadAssets()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATAREMOTIONPARAMSSO_UNLOADASSETS_OFFSET))(this);
	}
};
