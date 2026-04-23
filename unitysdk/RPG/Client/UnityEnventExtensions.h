#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }

#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_1_OFFSET UNITYSDK_OFFSET(0xB445530)
#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_2_OFFSET UNITYSDK_OFFSET(0xB4455E0)
#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_3_OFFSET UNITYSDK_OFFSET(0xB445690)
#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_4_OFFSET UNITYSDK_OFFSET(0xB445790)
#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_OFFSET UNITYSDK_OFFSET(0xB445480)

namespace RPG::Client
{
	inline static constexpr unsigned int UnityEnventExtensions_TypeDefinitionIndex = 67048;

	class UnityEnventExtensions : public ::System::Object
	{
	public:
		static ::System::Void SafeAddListener(::UnityEngine::Events::UnityEvent* unityEvent, ::UnityEngine::Events::UnityAction* call)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_OFFSET))(unityEvent, call);
		}

		static ::System::Void SafeAddListener_1(::UnityEngine::Events::UnityEvent_1<::System::Int32>* unityEvent, ::UnityEngine::Events::UnityAction_1<::System::Int32>* call)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent_1<::System::Int32>*, ::UnityEngine::Events::UnityAction_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_1_OFFSET))(unityEvent, call);
		}

		static ::System::Void SafeAddListener_2(::UnityEngine::Events::UnityEvent_1<::System::Single>* unityEvent, ::UnityEngine::Events::UnityAction_1<::System::Single>* call)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent_1<::System::Single>*, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_2_OFFSET))(unityEvent, call);
		}

		static ::System::Void SafeAddListener_3(::UnityEngine::Events::UnityEvent_1<::System::String*>* unityEvent, ::UnityEngine::Events::UnityAction_1<::System::String*>* call)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent_1<::System::String*>*, ::UnityEngine::Events::UnityAction_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_3_OFFSET))(unityEvent, call);
		}

		static ::System::Void SafeAddListener_4(::UnityEngine::Events::UnityEvent_1<::System::Boolean>* unityEvent, ::UnityEngine::Events::UnityAction_1<::System::Boolean>* call)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent_1<::System::Boolean>*, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_4_OFFSET))(unityEvent, call);
		}
	};
}
