#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_TAMONOBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB26D870)

namespace RPG::Client
{
	inline static constexpr unsigned int TAMonoBase_TypeDefinitionIndex = 65258;

	class TAMonoBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAMONOBASE__CTOR_OFFSET))(this);
		}
	};
}
