#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOONLYLOADINBAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x136DEF90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoOnlyLoadInBake_TypeDefinitionIndex = 56505;

	class MonoOnlyLoadInBake : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOONLYLOADINBAKE__CTOR_OFFSET))(this);
		}
	};
}
