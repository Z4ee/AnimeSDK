#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONONPCPEDESTRIANV2TEST__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E37F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoNPCPedestrianV2Test_TypeDefinitionIndex = 63838;

	class MonoNPCPedestrianV2Test : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONONPCPEDESTRIANV2TEST__CTOR_OFFSET))(this);
		}
	};
}
