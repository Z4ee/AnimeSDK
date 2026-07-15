#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }

#define RPG_CLIENT_UIANIMATIONUTILS_CURRENTPLAYINGNAME_OFFSET UNITYSDK_OFFSET(0x17215320)
#define RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x17215890)
#define RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONPLAYINGNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x17215990)
#define RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONPLAYINGTIME_OFFSET UNITYSDK_OFFSET(0x17215A00)
#define RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1700F7D0)
#define RPG_CLIENT_UIANIMATIONUTILS_GETCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0x17215800)
#define RPG_CLIENT_UIANIMATIONUTILS_PLAYFROMBEGIN_OFFSET UNITYSDK_OFFSET(0x16FE3190)
#define RPG_CLIENT_UIANIMATIONUTILS_PLAYFROMEND_OFFSET UNITYSDK_OFFSET(0x172151E0)
#define RPG_CLIENT_UIANIMATIONUTILS_PLAYFROMTIME_OFFSET UNITYSDK_OFFSET(0x17215270)
#define RPG_CLIENT_UIANIMATIONUTILS_PLAYTOBEGIN_OFFSET UNITYSDK_OFFSET(0x17215090)
#define RPG_CLIENT_UIANIMATIONUTILS_PLAYTOEND_OFFSET UNITYSDK_OFFSET(0x17215130)
#define RPG_CLIENT_UIANIMATIONUTILS_SETANIMATIONSPEED_OFFSET UNITYSDK_OFFSET(0x17215900)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAnimationUtils_TypeDefinitionIndex = 69813;

	class UIAnimationUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::AnimationState* GetAnimationState(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::UnityEngine::AnimationState*(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONSTATE_OFFSET))(a1, a2);
		}

		static ::System::Void PlayFromBegin(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_PLAYFROMBEGIN_OFFSET))(a1, a2);
		}

		static ::System::Void PlayToBegin(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_PLAYTOBEGIN_OFFSET))(a1, a2);
		}

		static ::System::Void PlayToEnd(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_PLAYTOEND_OFFSET))(a1, a2);
		}

		static ::System::Void PlayFromEnd(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_PLAYFROMEND_OFFSET))(a1, a2);
		}

		static ::System::Void PlayFromTime(::UnityEngine::Animation* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_PLAYFROMTIME_OFFSET))(a1, a2, a3);
		}

		static ::System::String* CurrentPlayingName(::UnityEngine::Animation* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_CURRENTPLAYINGNAME_OFFSET))(a1);
		}

		static ::System::Single GetClipLength(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Single(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_GETCLIPLENGTH_OFFSET))(a1, a2);
		}

		static ::System::Single GetAnimationLength(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Single(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONLENGTH_OFFSET))(a1, a2);
		}

		static ::System::Void SetAnimationSpeed(::UnityEngine::Animation* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_SETANIMATIONSPEED_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GetAnimationPlayingNormalizedTime(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Single(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONPLAYINGNORMALIZEDTIME_OFFSET))(a1, a2);
		}

		static ::System::Single GetAnimationPlayingTime(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Single(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIANIMATIONUTILS_GETANIMATIONPLAYINGTIME_OFFSET))(a1, a2);
		}
	};
}
