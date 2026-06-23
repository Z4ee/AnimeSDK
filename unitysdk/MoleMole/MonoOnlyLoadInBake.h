#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOONLYLOADINBAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x13F14F50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoOnlyLoadInBake_TypeDefinitionIndex = 60361;

	class MonoOnlyLoadInBake : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONLYLOADINBAKE__CTOR_OFFSET))(this);
		}
	};
}
