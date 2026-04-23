#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_25BFA3B13C8F2459_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA3ECF50)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_25BFA3B13C8F2459_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA3ED070)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_25BFA3B13C8F2459_INVOKE_OFFSET UNITYSDK_OFFSET(0xA3E9660)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_25BFA3B13C8F2459__CTOR_OFFSET UNITYSDK_OFFSET(0xA3EC2B0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounding_Class_3_25BFA3B13C8F2459_TypeDefinitionIndex = 68348;

	class Grounding_Class_3_25BFA3B13C8F2459 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_25BFA3B13C8F2459__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_25BFA3B13C8F2459_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4, ::System::Single a5, ::System::Int32 a6, ::UnityEngine::QueryTriggerInteraction a7, ::System::AsyncCallback* a8, ::System::Object* a9)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_25BFA3B13C8F2459_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Boolean EndInvoke(::UnityEngine::RaycastHit& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_25BFA3B13C8F2459_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
