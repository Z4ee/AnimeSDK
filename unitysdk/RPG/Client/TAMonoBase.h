#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_TAMONOBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC9BAD80)

namespace RPG::Client
{
	inline static constexpr unsigned int TAMonoBase_TypeDefinitionIndex = 66185;

	class TAMonoBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAMONOBASE__CTOR_OFFSET))(this);
		}
	};
}
