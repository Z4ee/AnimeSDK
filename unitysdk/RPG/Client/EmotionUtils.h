#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline::Emotion { class EmoBakedPoseData; }
namespace System { class String; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATAFILEPOSTFIX_1_OFFSET UNITYSDK_OFFSET(0xB909C60)
#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATAFILEPOSTFIX_OFFSET UNITYSDK_OFFSET(0xB909A80)
#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATARUNTIMEASBPATH_OFFSET UNITYSDK_OFFSET(0xB9098E0)
#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATARUNTIME_OFFSET UNITYSDK_OFFSET(0xB909800)
#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATA_OFFSET UNITYSDK_OFFSET(0xB9097B0)
#define RPG_CLIENT_EMOTIONUTILS_ISBLINKRENDERERMASKENABLE_OFFSET UNITYSDK_OFFSET(0xB909690)
#define RPG_CLIENT_EMOTIONUTILS_LOGMOUTHBAKEDDATANOTEXISTS_OFFSET UNITYSDK_OFFSET(0xB909C00)
#define RPG_CLIENT_EMOTIONUTILS_RESETFULLEMOTION_OFFSET UNITYSDK_OFFSET(0xB909610)
#define RPG_CLIENT_EMOTIONUTILS_SETCUSTOMFULLEMOTION_OFFSET UNITYSDK_OFFSET(0xB909580)

namespace RPG::Client
{
	inline static constexpr unsigned int EmotionUtils_TypeDefinitionIndex = 66489;

	class EmotionUtils : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_PauseEmtion()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EmotionUtils_TypeDefinitionIndex)->GetStaticField(0x2460);
		}

		static ::System::Void SetCustomFullEmotion(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_SETCUSTOMFULLEMOTION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean ResetFullEmotion(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_RESETFULLEMOTION_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsBlinkRendererMaskEnable(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_ISBLINKRENDERERMASKENABLE_OFFSET))(a1);
		}

		static ::RPGTools::Timeline::Emotion::EmoBakedPoseData* GetBakedData(::System::String* a1, ::System::Boolean a2)
		{
			return ((::RPGTools::Timeline::Emotion::EmoBakedPoseData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATA_OFFSET))(a1, a2);
		}

		static ::System::String* GetBakedDataRuntimeAsbPath(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATARUNTIMEASBPATH_OFFSET))(a1, a2);
		}

		static ::RPGTools::Timeline::Emotion::EmoBakedPoseData* GetBakedDataRuntime(::System::String* a1, ::System::Boolean a2)
		{
			return ((::RPGTools::Timeline::Emotion::EmoBakedPoseData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATARUNTIME_OFFSET))(a1, a2);
		}

		static ::System::Void LogMouthBakedDataNotExists(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_LOGMOUTHBAKEDDATANOTEXISTS_OFFSET))(a1);
		}

		static ::System::String* GetBakedDataFilePostfix(::System::Boolean a1)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATAFILEPOSTFIX_OFFSET))(a1);
		}

		static ::System::String* GetBakedDataFilePostfix_1(::RPG::GameCore::GenderType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATAFILEPOSTFIX_1_OFFSET))(a1);
		}
	};
}
