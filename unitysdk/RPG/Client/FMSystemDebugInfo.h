#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FMSYSTEMDEBUGINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x196D9250)
#define RPG_CLIENT_FMSYSTEMDEBUGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x196D9320)

namespace RPG::Client
{
	inline static constexpr unsigned int FMSystemDebugInfo_TypeDefinitionIndex = 65307;

	class FMSystemDebugInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* AllChannelSources; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* AllActiveChannelSources; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* AllChannelClients; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEMDEBUGINFO__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEMDEBUGINFO_CLEAR_OFFSET))(this);
		}
	};
}
