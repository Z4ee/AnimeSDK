#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_RatingFogEffect.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_RatingScreenEffect.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_APPLYRATINGFOGEFFECTS_OFFSET UNITYSDK_OFFSET(0x122E30E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_APPLYRATINGFOGEFFECT_OFFSET UNITYSDK_OFFSET(0x122E3440)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_APPLYRATINGSCREENEFFECTS_OFFSET UNITYSDK_OFFSET(0x122E25D0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_APPLYRATINGSCREENEFFECT_OFFSET UNITYSDK_OFFSET(0x122E2940)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_GETCAMERAEFFECTENTITY_OFFSET UNITYSDK_OFFSET(0x18E86610)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_GETRATINGFOGEFFECTS_OFFSET UNITYSDK_OFFSET(0x122E35B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_GETRATINGSCREENEFFECTS_OFFSET UNITYSDK_OFFSET(0x122E23F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_GETRATINGTEXTEFFECTMETA_OFFSET UNITYSDK_OFFSET(0x122E3950)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_GETRATINGTEXTEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x122E3790)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_GETRATINGTYPE_OFFSET UNITYSDK_OFFSET(0x122DFDE0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_INTERRUPTFOGEFFECTS_OFFSET UNITYSDK_OFFSET(0x122E2CC0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_LOGERR_OFFSET UNITYSDK_OFFSET(0x18E86C20)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_LOGWARN_OFFSET UNITYSDK_OFFSET(0x18E86C60)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_LOG_OFFSET UNITYSDK_OFFSET(0x18E86BE0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_TRYCREATERATINGEFFECT_OFFSET UNITYSDK_OFFSET(0x18E86780)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_UPDATEEFFECTONCE_OFFSET UNITYSDK_OFFSET(0x18E866C0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int RatingEffectUtils_TypeDefinitionIndex = 67289;

	class RatingEffectUtils : public ::System::Object
	{
	public:
		static ::MoleMole::Level::RatingType GetRatingType(::System::Int32& finalRanking)
		{
			return ((::MoleMole::Level::RatingType(*)(::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_GETRATINGTYPE_OFFSET))(finalRanking);
		}

		static ::System::Boolean GetRatingScreenEffects(::System::String* customKey, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*& screenEffects)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_GETRATINGSCREENEFFECTS_OFFSET))(customKey, screenEffects);
		}

		static ::System::Void ApplyRatingScreenEffects(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>* rses, ::Foundation::Variable_1<::System::Single> externalTimestamp)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect>*, ::Foundation::Variable_1<::System::Single>))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_APPLYRATINGSCREENEFFECTS_OFFSET))(rses, externalTimestamp);
		}

		static ::System::Void ApplyRatingScreenEffect(::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect rse, ::Foundation::Variable_1<::System::Single> externalTimestamp)
		{
			return ((::System::Void(*)(::MoleMole::Config::ConfigLevelResultPerforms_RatingScreenEffect, ::Foundation::Variable_1<::System::Single>))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_APPLYRATINGSCREENEFFECT_OFFSET))(rse, externalTimestamp);
		}

		static ::System::Void InterruptFogEffects(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>* fogs)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_INTERRUPTFOGEFFECTS_OFFSET))(fogs);
		}

		static ::System::Void ApplyRatingFogEffects(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>* fogs)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_APPLYRATINGFOGEFFECTS_OFFSET))(fogs);
		}

		static ::System::Void ApplyRatingFogEffect(::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect fse)
		{
			return ((::System::Void(*)(::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_APPLYRATINGFOGEFFECT_OFFSET))(fse);
		}

		static ::System::Boolean GetRatingFogEffects(::System::String* customKey, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*& fogEffects)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::MoleMole::Config::ConfigLevelResultPerforms_RatingFogEffect>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_GETRATINGFOGEFFECTS_OFFSET))(customKey, fogEffects);
		}

		static ::System::String* GetRatingTextEffectName(::System::String* customKey)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_GETRATINGTEXTEFFECTNAME_OFFSET))(customKey);
		}

		static ::System::Void GetRatingTextEffectMeta(::System::UInt32 playerID, ::System::UInt32 targetID, ::UnityEngine::Vector3& pos, ::UnityEngine::Vector3& forward, ::UnityEngine::Vector3& upward)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_GETRATINGTEXTEFFECTMETA_OFFSET))(playerID, targetID, pos, forward, upward);
		}

		static ::MoleMole::Battle::Entity* GetCameraEffectEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_GETCAMERAEFFECTENTITY_OFFSET))();
		}

		static ::System::Void UpdateEffectOnce(::System::UInt32 playerID, ::System::UInt32 targetID)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_UPDATEEFFECTONCE_OFFSET))(playerID, targetID);
		}

		static ::System::Void TryCreateRatingEffect(::System::UInt32 playerID, ::System::UInt32 targetID, ::System::String* customKey)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_TRYCREATERATINGEFFECT_OFFSET))(playerID, targetID, customKey);
		}

		static ::System::Void Log(::System::String* input)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_LOG_OFFSET))(input);
		}

		static ::System::Void LogErr(::System::String* input)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_LOGERR_OFFSET))(input);
		}

		static ::System::Void LogWarn(::System::String* input)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_RATINGEFFECTUTILS_LOGWARN_OFFSET))(input);
		}
	};
}
