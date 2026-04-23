#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_PROP_GRAVITYBALLPUZZLEREGIONDETECT_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xAE1AF30)
#define RPG_CLIENT_PROP_GRAVITYBALLPUZZLEREGIONDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0xAE1AF90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallPuzzleRegionDetect_TypeDefinitionIndex = 72089;

	class GravityBallPuzzleRegionDetect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::UnityEngine::Collider*>* OnBallOutCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLPUZZLEREGIONDETECT__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLPUZZLEREGIONDETECT_ONTRIGGEREXIT_OFFSET))(this, a1);
		}
	};
}
