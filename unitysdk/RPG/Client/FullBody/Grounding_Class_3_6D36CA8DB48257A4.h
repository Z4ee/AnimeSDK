#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_6D36CA8DB48257A4_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD0CF900)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_6D36CA8DB48257A4_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD0CFA40)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_6D36CA8DB48257A4_INVOKE_OFFSET UNITYSDK_OFFSET(0xD0CF840)
#define RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_6D36CA8DB48257A4__CTOR_OFFSET UNITYSDK_OFFSET(0xD0CF7D0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounding_Class_3_6D36CA8DB48257A4_TypeDefinitionIndex = 74144;

	class Grounding_Class_3_6D36CA8DB48257A4 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_6D36CA8DB48257A4__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_6D36CA8DB48257A4_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::QueryTriggerInteraction a8, ::System::AsyncCallback* a9, ::System::Object* a10)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_6D36CA8DB48257A4_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Boolean EndInvoke(::UnityEngine::RaycastHit& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_CLASS_3_6D36CA8DB48257A4_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
