#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_BATTLE_PBDCULLPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x12EE15A0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int PBDCullProxy_TypeDefinitionIndex = 58840;

	class PBDCullProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single cullDistance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_PBDCULLPROXY__CTOR_OFFSET))(this);
		}
	};
}
