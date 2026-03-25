#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_METHOD_5_77E4508564C6D7D6_OFFSET UNITYSDK_OFFSET(0x9D56070)
#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_METHOD_5_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x9D561E0)
#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D55FF0)
#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x9D55F50)
#define RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D56230)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyDreamWorldController_TypeDefinitionIndex = 59707;

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

		::System::Void Method_5_A984848EA3E436DA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDREAMWORLDCONTROLLER_METHOD_5_A984848EA3E436DA_OFFSET))(this);
		}
	};
}
