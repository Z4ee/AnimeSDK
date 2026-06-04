#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELECTRICCHAINV2_RANDOMUPDATER_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0xB8A18C0)
#define RPG_CLIENT_ELECTRICCHAINV2_RANDOMUPDATER_METHOD_1_FCAE20CD32D19671_OFFSET UNITYSDK_OFFSET(0xB89EBE0)
#define RPG_CLIENT_ELECTRICCHAINV2_RANDOMUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0xB8A2780)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int RandomUpdater_TypeDefinitionIndex = 68682;

	class RandomUpdater : public ::System::Object
	{
	public:
		::System::Single interval; // 0x10
		::System::Single _accumulatedTime; // 0x14
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _randomGroup; // 0x18
		::System::Int32 _index; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_RANDOMUPDATER__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_FCAE20CD32D19671(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_RANDOMUPDATER_METHOD_1_FCAE20CD32D19671_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_RANDOMUPDATER_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
		}
	};
}
