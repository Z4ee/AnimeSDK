#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOCURVEMOVABLEPLAYERTRIGGERREGION_GET_ISPLAYERENTERED_OFFSET UNITYSDK_OFFSET(0xD73C730)
#define RPG_CLIENT_MONOCURVEMOVABLEPLAYERTRIGGERREGION_METHOD_5_C117F1BAC122F4D0_OFFSET UNITYSDK_OFFSET(0xD73CA00)
#define RPG_CLIENT_MONOCURVEMOVABLEPLAYERTRIGGERREGION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xD73C910)
#define RPG_CLIENT_MONOCURVEMOVABLEPLAYERTRIGGERREGION_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xD73CAF0)
#define RPG_CLIENT_MONOCURVEMOVABLEPLAYERTRIGGERREGION__CTOR_OFFSET UNITYSDK_OFFSET(0xD73CB60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveMovablePlayerTriggerRegion_TypeDefinitionIndex = 68508;

	class MonoCurveMovablePlayerTriggerRegion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* LNMMHOMBNBM; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLEPLAYERTRIGGERREGION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerEntered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLEPLAYERTRIGGERREGION_GET_ISPLAYERENTERED_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLEPLAYERTRIGGERREGION_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLEPLAYERTRIGGERREGION_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_C117F1BAC122F4D0(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVABLEPLAYERTRIGGERREGION_METHOD_5_C117F1BAC122F4D0_OFFSET))(this, a1);
		}
	};
}
