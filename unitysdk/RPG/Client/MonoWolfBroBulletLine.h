#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOWOLFBROBULLETLINE_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0xD87F9B0)
#define RPG_CLIENT_MONOWOLFBROBULLETLINE_SETDISTANCE_OFFSET UNITYSDK_OFFSET(0xD87F9E0)
#define RPG_CLIENT_MONOWOLFBROBULLETLINE_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0xD87F9D0)
#define RPG_CLIENT_MONOWOLFBROBULLETLINE__CTOR_OFFSET UNITYSDK_OFFSET(0xD87FBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoWolfBroBulletLine_TypeDefinitionIndex = 68685;

	class MonoWolfBroBulletLine : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single virtualLineDist; // 0x18
		::System::Single solidLineDist; // 0x1C
		::UnityEngine::Transform* rotationRoot; // 0x20
		::UnityEngine::Transform* scaleRoot; // 0x28
		::System::Single upHeight; // 0x30
		::UnityEngine::Vector3 _Forward_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROBULLETLINE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROBULLETLINE_GET_FORWARD_OFFSET))(this);
		}

		::System::Void set_Forward(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROBULLETLINE_SET_FORWARD_OFFSET))(this, a1);
		}

		::System::Void SetDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROBULLETLINE_SETDISTANCE_OFFSET))(this, a1);
		}
	};
}
