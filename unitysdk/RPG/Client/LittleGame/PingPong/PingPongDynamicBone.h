#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGDYNAMICBONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D7DB0)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongDynamicBone_TypeDefinitionIndex = 76199;

	class PingPongDynamicBone : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* Bones; // 0x18
		::System::Single ElementDistance; // 0x20
		::System::Single SmoothTime; // 0x24
		::System::Single RotateSpeed; // 0x28
		::System::Single AngleLimit; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGDYNAMICBONE__CTOR_OFFSET))(this);
		}
	};
}
