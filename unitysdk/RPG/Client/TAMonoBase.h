#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_TAMONOBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3F54D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TAMonoBase_TypeDefinitionIndex = 70733;

	class TAMonoBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAMONOBASE__CTOR_OFFSET))(this);
		}
	};
}
