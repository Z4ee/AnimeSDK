#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }

#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_1_OFFSET UNITYSDK_OFFSET(0xE3D0B90)
#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_2_OFFSET UNITYSDK_OFFSET(0xE3D0C40)
#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_3_OFFSET UNITYSDK_OFFSET(0xE3D0CF0)
#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_4_OFFSET UNITYSDK_OFFSET(0xE3D0DD0)
#define RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_OFFSET UNITYSDK_OFFSET(0xE3D0AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int UnityEnventExtensions_TypeDefinitionIndex = 72705;

	class UnityEnventExtensions : public ::System::Object
	{
	public:
		static ::System::Void SafeAddListener(::UnityEngine::Events::UnityEvent* a1, ::UnityEngine::Events::UnityAction* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_OFFSET))(a1, a2);
		}

		static ::System::Void SafeAddListener_1(::UnityEngine::Events::UnityEvent_1<::System::Int32>* a1, ::UnityEngine::Events::UnityAction_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent_1<::System::Int32>*, ::UnityEngine::Events::UnityAction_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_1_OFFSET))(a1, a2);
		}

		static ::System::Void SafeAddListener_2(::UnityEngine::Events::UnityEvent_1<::System::Single>* a1, ::UnityEngine::Events::UnityAction_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent_1<::System::Single>*, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_2_OFFSET))(a1, a2);
		}

		static ::System::Void SafeAddListener_3(::UnityEngine::Events::UnityEvent_1<::System::String*>* a1, ::UnityEngine::Events::UnityAction_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent_1<::System::String*>*, ::UnityEngine::Events::UnityAction_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_3_OFFSET))(a1, a2);
		}

		static ::System::Void SafeAddListener_4(::UnityEngine::Events::UnityEvent_1<::System::Boolean>* a1, ::UnityEngine::Events::UnityAction_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Events::UnityEvent_1<::System::Boolean>*, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNITYENVENTEXTENSIONS_SAFEADDLISTENER_4_OFFSET))(a1, a2);
		}
	};
}
