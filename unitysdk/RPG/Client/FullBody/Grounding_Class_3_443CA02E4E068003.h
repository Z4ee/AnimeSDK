#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_443CA02E4E068003_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA3ECE20)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_443CA02E4E068003_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA3ECF20)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_443CA02E4E068003_INVOKE_OFFSET UNITYSDK_OFFSET(0xA3E8F10)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_443CA02E4E068003__CTOR_OFFSET UNITYSDK_OFFSET(0xA3EC270)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounding_Class_3_443CA02E4E068003_TypeDefinitionIndex = 68346;

	class Grounding_Class_3_443CA02E4E068003 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_443CA02E4E068003__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_443CA02E4E068003_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4, ::System::Int32 a5, ::UnityEngine::QueryTriggerInteraction a6, ::System::AsyncCallback* a7, ::System::Object* a8)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_443CA02E4E068003_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Boolean EndInvoke(::UnityEngine::RaycastHit& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_443CA02E4E068003_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
