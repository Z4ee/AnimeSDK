#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Action; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_CLASS_3_6EEFE48F0F19B50B_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC9FC8B0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_CLASS_3_6EEFE48F0F19B50B_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC9FC8F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_CLASS_3_6EEFE48F0F19B50B_INVOKE_OFFSET UNITYSDK_OFFSET(0xC9FC820)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_CLASS_3_6EEFE48F0F19B50B__CTOR_OFFSET UNITYSDK_OFFSET(0xC9FC830)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceNodeListControl_Class_3_6EEFE48F0F19B50B_TypeDefinitionIndex = 80196;

	class ChallengeTierceNodeListControl_Class_3_6EEFE48F0F19B50B : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_CLASS_3_6EEFE48F0F19B50B__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Action* Invoke(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_CLASS_3_6EEFE48F0F19B50B_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* a1, ::System::Object* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_CLASS_3_6EEFE48F0F19B50B_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Action* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL_CLASS_3_6EEFE48F0F19B50B_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
