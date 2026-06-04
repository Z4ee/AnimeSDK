#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_A043D803AC652E6E;

#define RPG_CLIENT_MOTIONS_MONOMONTIONINSPECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC19E540)

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MonoMontionInspector_TypeDefinitionIndex = 68588;

	class MonoMontionInspector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_A043D803AC652E6E* Motion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOTIONS_MONOMONTIONINSPECTOR__CTOR_OFFSET))(this);
		}
	};
}
