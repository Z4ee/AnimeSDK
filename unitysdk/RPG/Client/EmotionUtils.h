#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline::Emotion { class EmoBakedPoseData; }
namespace System { class String; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATAFILEPOSTFIX_1_OFFSET UNITYSDK_OFFSET(0x95FD480)
#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATAFILEPOSTFIX_OFFSET UNITYSDK_OFFSET(0x95FD2C0)
#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATARUNTIMEASBPATH_OFFSET UNITYSDK_OFFSET(0x95FD120)
#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATARUNTIME_OFFSET UNITYSDK_OFFSET(0x95FD060)
#define RPG_CLIENT_EMOTIONUTILS_GETBAKEDDATA_OFFSET UNITYSDK_OFFSET(0x95FD010)
#define RPG_CLIENT_EMOTIONUTILS_ISBLINKRENDERERMASKENABLE_OFFSET UNITYSDK_OFFSET(0x95FCEF0)
#define RPG_CLIENT_EMOTIONUTILS_LOGMOUTHBAKEDDATANOTEXISTS_OFFSET UNITYSDK_OFFSET(0x95FD440)
#define RPG_CLIENT_EMOTIONUTILS_RESETFULLEMOTION_OFFSET UNITYSDK_OFFSET(0x95FCE70)
#define RPG_CLIENT_EMOTIONUTILS_SETCUSTOMFULLEMOTION_OFFSET UNITYSDK_OFFSET(0x95FCDE0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmotionUtils_TypeDefinitionIndex = 58272;

	class EmotionUtils : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_PauseEmtion()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EmotionUtils_TypeDefinitionIndex)->GetStaticField(0x10ED0);
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
