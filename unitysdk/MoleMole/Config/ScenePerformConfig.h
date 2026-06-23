#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class BlackMaskFadeConfig; }
namespace MoleMole::Config { class ChessBoardCutSceneKeyConfig; }
namespace MoleMole::Config { class CutScenePerformConfig; }
namespace MoleMole::Config { class SceneEntityCutSceneConfig; }
namespace MoleMole::Config { class ScenePerformConfig_ScenePerformItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x192AE3B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScenePerformConfig_TypeDefinitionIndex = 68473;

	class ScenePerformConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		// static const ::System::String* key1; // 0x0
		::MoleMole::Config::ChessBoardCutSceneKeyConfig* chessBoardCutSceneKeyConfig; // 0x58
		::MoleMole::Config::ChessBoardCutSceneKeyConfig* SimplifiedCutSceneKeyConfig; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ScenePerformConfig_ScenePerformItem*>* configDic; // 0x68
		::System::String* MOVEDTOCHARACTER; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SceneEntityCutSceneConfig*>* monsterCutSceneConfigDic; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CutScenePerformConfig*>* sceneCameraShotDic; // 0x80
		::MoleMole::Config::BlackMaskFadeConfig* performBlackMaskConfig; // 0x88
		::System::Single BuddySwitchInDelay; // 0x90
		::System::Single CutSceneMixinFadeInTime; // 0x94
		::System::Single CutSceneMixinFadeOutTime; // 0x98
		::System::Single EndPerfromFadeInTime; // 0x9C
		::System::Single EndPerfromFadeOutTime; // 0xA0
		::System::Single EndPerfromRemainTime; // 0xA4
		::System::Single PerformPageBlackCurtainDuration; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
