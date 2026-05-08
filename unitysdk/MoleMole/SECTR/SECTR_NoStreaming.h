#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_SECTR_SECTR_NOSTREAMING__CTOR_OFFSET UNITYSDK_OFFSET(0x1585CB30)

namespace MoleMole::SECTR
{
	inline static constexpr unsigned int SECTR_NoStreaming_TypeDefinitionIndex = 61812;

	class SECTR_NoStreaming : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_SECTR_NOSTREAMING__CTOR_OFFSET))(this);
		}
	};
}
