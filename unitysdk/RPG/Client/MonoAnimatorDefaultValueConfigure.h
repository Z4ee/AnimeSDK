#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoAnimatorDefaultValueConfigure_DefaultValueConfigure.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOANIMATORDEFAULTVALUECONFIGURE_AWAKE_OFFSET UNITYSDK_OFFSET(0x9C12070)
#define RPG_CLIENT_MONOANIMATORDEFAULTVALUECONFIGURE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C12280)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorDefaultValueConfigure_TypeDefinitionIndex = 55942;

	class MonoAnimatorDefaultValueConfigure : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Animator; // 0x18
		::Il2CppArray<::RPG::Client::MonoAnimatorDefaultValueConfigure_DefaultValueConfigure>* DefaultValues; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORDEFAULTVALUECONFIGURE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORDEFAULTVALUECONFIGURE_AWAKE_OFFSET))(this);
		}
	};
}
