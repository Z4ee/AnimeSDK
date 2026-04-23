#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline::Emotion { class EmoBakedPoseData; }
namespace System { class String; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATAFILEPOSTFIX_1_OFFSET UNITYSDK_OFFSET(0xA284050)
#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATAFILEPOSTFIX_OFFSET UNITYSDK_OFFSET(0xA283E70)
#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATARUNTIMEASBPATH_OFFSET UNITYSDK_OFFSET(0xA283CD0)
#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATARUNTIME_OFFSET UNITYSDK_OFFSET(0xA283BF0)
#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATA_OFFSET UNITYSDK_OFFSET(0xA283BA0)
#define RPG_CLIENT_EMOTIONUTILS_ISBLINKRENDERERMASKENABLE_OFFSET UNITYSDK_OFFSET(0xA283A80)
#define RPG_CLIENT_EMOTIONUTILS_LOGMOUTHBAKEDDATANOTEXISTS_OFFSET UNITYSDK_OFFSET(0xA283FF0)
#define RPG_CLIENT_EMOTIONUTILS_RESETFULLEMOTION_OFFSET UNITYSDK_OFFSET(0xA283A00)
#define RPG_CLIENT_EMOTIONUTILS_SETCUSTOMFULLEMOTION_OFFSET UNITYSDK_OFFSET(0xA283970)

namespace RPG::Client
{
	inline static constexpr unsigned int EmotionUtils_TypeDefinitionIndex = 65559;

	class EmotionUtils : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_PauseEmtion()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EmotionUtils_TypeDefinitionIndex)->GetStaticField(0x56B0);
		}

		static ::System::Void SetCustomFullEmotion(::RPG::GameCore::GameEntity* entity, ::System::String* emotionPath, ::System::Single duration, ::System::Boolean isLoop)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_SETCUSTOMFULLEMOTION_OFFSET))(entity, emotionPath, duration, isLoop);
		}

		static ::System::Boolean ResetFullEmotion(::RPG::GameCore::GameEntity* entity, ::System::Single duration)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_RESETFULLEMOTION_OFFSET))(entity, duration);
		}

		static ::System::Boolean IsBlinkRendererMaskEnable(::UnityEngine::SkinnedMeshRenderer* eyeBlinkMaskRender)
		{
			return ((::System::Boolean(*)(::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_ISBLINKRENDERERMASKENABLE_OFFSET))(eyeBlinkMaskRender);
		}

		static ::RPGTools::Timeline::Emotion::EmoBakedPoseData* GetBakedData(::System::String* path, ::System::Boolean withGender)
		{
			return ((::RPGTools::Timeline::Emotion::EmoBakedPoseData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATA_OFFSET))(path, withGender);
		}

		static ::System::String* GetBakedDataRuntimeAsbPath(::System::String* path, ::System::Boolean withGender)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATARUNTIMEASBPATH_OFFSET))(path, withGender);
		}

		static ::RPGTools::Timeline::Emotion::EmoBakedPoseData* GetBakedDataRuntime(::System::String* path, ::System::Boolean withGender)
		{
			return ((::RPGTools::Timeline::Emotion::EmoBakedPoseData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATARUNTIME_OFFSET))(path, withGender);
		}

		static ::System::Void LogMouthBakedDataNotExists(::System::String* assetPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_LOGMOUTHBAKEDDATANOTEXISTS_OFFSET))(assetPath);
		}

		static ::System::String* GetBakedDataFilePostfix(::System::Boolean withGender)
		{
			return ((::System::String*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATAFILEPOSTFIX_OFFSET))(withGender);
		}

		static ::System::String* GetBakedDataFilePostfix_1(::RPG::GameCore::GenderType gender)
		{
			return ((::System::String*(*)(::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATAFILEPOSTFIX_1_OFFSET))(gender);
		}
	};
}
