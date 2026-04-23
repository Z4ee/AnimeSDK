#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_100ED75C115B764C;
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_GRAVITYBALLOBSTACLE_SETANIMWIDTH_OFFSET UNITYSDK_OFFSET(0xAE1AE60)
#define RPG_CLIENT_PROP_GRAVITYBALLOBSTACLE_SETEFFVISIBLE_OFFSET UNITYSDK_OFFSET(0xAE1AEC0)
#define RPG_CLIENT_PROP_GRAVITYBALLOBSTACLE_SETMOVING_OFFSET UNITYSDK_OFFSET(0xAE1AE10)
#define RPG_CLIENT_PROP_GRAVITYBALLOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0xAE1AE00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallObstacle_TypeDefinitionIndex = 72090;

	class GravityBallObstacle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Wall; // 0x18
		::UnityEngine::GameObject* Base; // 0x20
		::Class_1_100ED75C115B764C* Field_5_2; // 0x28
		::System::Boolean Field_5_3; // 0x30
		::System::Single Field_5_4; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLOBSTACLE__CTOR_OFFSET))(this);
		}

		::System::Void SetMoving(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLOBSTACLE_SETMOVING_OFFSET))(this, a1);
		}

		::System::Void SetAnimWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLOBSTACLE_SETANIMWIDTH_OFFSET))(this, a1);
		}

		::System::Void SetEffVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLOBSTACLE_SETEFFVISIBLE_OFFSET))(this, a1);
		}
	};
}
