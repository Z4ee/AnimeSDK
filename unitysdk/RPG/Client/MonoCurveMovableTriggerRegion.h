#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOCURVEMOVABLETRIGGERREGION_CONSUMEHITANYCOLLIDER_OFFSET UNITYSDK_OFFSET(0x9C1F660)
#define RPG_CLIENT_MONOCURVEMOVABLETRIGGERREGION_GET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0x9C1F4A0)
#define RPG_CLIENT_MONOCURVEMOVABLETRIGGERREGION_METHOD_5_C117F1BAC122F4D0_OFFSET UNITYSDK_OFFSET(0x9C1F8A0)
#define RPG_CLIENT_MONOCURVEMOVABLETRIGGERREGION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x9C1F7C0)
#define RPG_CLIENT_MONOCURVEMOVABLETRIGGERREGION_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x9C1F9B0)
#define RPG_CLIENT_MONOCURVEMOVABLETRIGGERREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x9C1FA30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveMovableTriggerRegion_TypeDefinitionIndex = 55963;

	class MonoCurveMovableTriggerRegion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_5_0; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLETRIGGERREGION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsBlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLETRIGGERREGION_GET_ISBLOCKED_OFFSET))(this);
		}

		::System::Boolean ConsumeHitAnyCollider(::System::Boolean& a1, ::System::Boolean& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLETRIGGERREGION_CONSUMEHITANYCOLLIDER_OFFSET))(this, a1, a2);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLETRIGGERREGION_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLETRIGGERREGION_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_C117F1BAC122F4D0(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLETRIGGERREGION_METHOD_5_C117F1BAC122F4D0_OFFSET))(this, a1);
		}
	};
}
