#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_B947D336595B4072;
namespace RPG::Client { class IRIRenderer; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGInstancedItemBlock; }

#define RPG_CLIENT_IRIMANAGER_ADDVOLUME_OFFSET UNITYSDK_OFFSET(0x1982EFA0)
#define RPG_CLIENT_IRIMANAGER_REMOVEVOLUME_OFFSET UNITYSDK_OFFSET(0x1982F310)
#define RPG_CLIENT_IRIMANAGER_SETVOLUMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1982F410)
#define RPG_CLIENT_IRIMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1982F490)

namespace RPG::Client
{
	inline static constexpr unsigned int IRIManager_TypeDefinitionIndex = 68856;

	class IRIManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RPGInstancedItemBlock* GlobalVolume; // 0x18
		::UnityEngine::GameObject* EAEAALPPFAF; // 0x20
		::System::Collections::Generic::HashSet_1<::RPG::Client::IRIRenderer*>* IGOPPJKFNBD; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void AddVolume(::RPG::Client::IRIRenderer* a1, ::Class_1_B947D336595B4072* a2, ::UnityEngine::Bounds a3, ::System::UInt64& a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRIRenderer*, ::Class_1_B947D336595B4072*, ::UnityEngine::Bounds, ::System::UInt64&))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIMANAGER_ADDVOLUME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean RemoveVolume(::RPG::Client::IRIRenderer* a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRIRenderer*, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIMANAGER_REMOVEVOLUME_OFFSET))(this, a1, a2);
		}

		::System::Void SetVolumeVisible(::System::UInt64 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IRIMANAGER_SETVOLUMEVISIBLE_OFFSET))(this, a1, a2);
		}
	};
}
