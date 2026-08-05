#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOIGNOREGROUNDCHECK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10811240)
#define MOLEMOLE_MONOIGNOREGROUNDCHECK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10811140)
#define MOLEMOLE_MONOIGNOREGROUNDCHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x10811340)

namespace MoleMole
{
	inline static constexpr unsigned int MonoIgnoreGroundCheck_TypeDefinitionIndex = 45279;

	class MonoIgnoreGroundCheck : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOIGNOREGROUNDCHECK__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOIGNOREGROUNDCHECK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOIGNOREGROUNDCHECK_ONDISABLE_OFFSET))(this);
		}
	};
}
