#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_METHOD_5_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x1A36F510)
#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_METHOD_5_77E4508564C6D7D6_OFFSET UNITYSDK_OFFSET(0x1A36F390)
#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A36F310)
#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1A36F250)
#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A36F560)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyDreamWorldController_TypeDefinitionIndex = 69532;

	class MonopolyDreamWorldController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* AnimRef; // 0x18
		::RPG::Client::RPGAnimationEvent* EventRef; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_77E4508564C6D7D6(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_METHOD_5_77E4508564C6D7D6_OFFSET))(this, a1);
		}

		::System::Void Method_5_7646FFE662147970()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_METHOD_5_7646FFE662147970_OFFSET))(this);
		}
	};
}
