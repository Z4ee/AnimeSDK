#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_SECTR_MONOGUID_GET_INSTANCEGUID_OFFSET UNITYSDK_OFFSET(0x1585CAB0)
#define MOLEMOLE_SECTR_MONOGUID__CTOR_OFFSET UNITYSDK_OFFSET(0x1585CAE0)

namespace MoleMole::SECTR
{
	inline static constexpr unsigned int MonoGuid_TypeDefinitionIndex = 82774;

	class MonoGuid : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_MONOGUID__CTOR_OFFSET))(this);
		}

		::System::Int32 get_instanceGuid()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_MONOGUID_GET_INSTANCEGUID_OFFSET))(this);
		}
	};
}
