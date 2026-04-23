#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FloatingProxyParticle.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_WAVESIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB4C6C50)

namespace RPG::Client
{
	inline static constexpr unsigned int WaveSimConfig_TypeDefinitionIndex = 65333;

	class WaveSimConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::FloatingProxyParticle>* bufferData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WAVESIMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
