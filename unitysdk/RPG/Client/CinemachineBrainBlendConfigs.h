#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class BlendConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CINEMACHINEBRAINBLENDCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBFBD10)

namespace RPG::Client
{
	inline static constexpr unsigned int CinemachineBrainBlendConfigs_TypeDefinitionIndex = 69664;

	class CinemachineBrainBlendConfigs : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::BlendConfig*>* Blends; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CINEMACHINEBRAINBLENDCONFIGS__CTOR_OFFSET))(this);
		}
	};
}
