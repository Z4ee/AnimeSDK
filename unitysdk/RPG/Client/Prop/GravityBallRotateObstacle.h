#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/GravityBallObstacle.h"
#include "unitysdk/RPG/Client/Prop/GravityBallRotateObstacle_GravityBallRotateObstacleDirection.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x14815BE0)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x148161F0)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_HIDE_OFFSET UNITYSDK_OFFSET(0x14815F60)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_INIT_OFFSET UNITYSDK_OFFSET(0x14815FB0)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_METHOD_6_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x148162E0)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14816650)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_UPDATESHOWANIMATION_OFFSET UNITYSDK_OFFSET(0x148160D0)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x14816590)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x148166B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallRotateObstacle_TypeDefinitionIndex = 74638;

	class GravityBallRotateObstacle : public ::RPG::Client::Prop::GravityBallObstacle
	{
	public:
		::System::Single RotateSpeed; // 0x38
		::RPG::Client::Prop::GravityBallRotateObstacle_GravityBallRotateObstacleDirection Direction; // 0x3C
		::UnityEngine::Rigidbody* Field_6_2; // 0x40
		::UnityEngine::Quaternion Field_6_3; // 0x48
		::System::Single Field_6_4; // 0x58
		::System::Single Field_6_5; // 0x5C
		::UnityEngine::Vector3 Field_6_6; // 0x60
		::UnityEngine::Vector3 Field_6_7; // 0x6C
		::UnityEngine::Quaternion Field_6_8; // 0x78
		::UnityEngine::Vector3 Field_6_9; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_AWAKE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_INIT_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_HIDE_OFFSET))(this);
		}

		::System::Void UpdateShowAnimation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_UPDATESHOWANIMATION_OFFSET))(this, a1);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Method_6_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_METHOD_6_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_ONDESTROY_OFFSET))(this);
		}
	};
}
