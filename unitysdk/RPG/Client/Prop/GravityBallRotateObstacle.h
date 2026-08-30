#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/GravityBallObstacle.h"
#include "unitysdk/RPG/Client/Prop/GravityBallRotateObstacle_GravityBallRotateObstacleDirection.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_AWAKE_OFFSET UNITYSDK_OFFSET(0xDC6B1F0)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xDC6B800)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_HIDE_OFFSET UNITYSDK_OFFSET(0xDC6B570)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_INIT_OFFSET UNITYSDK_OFFSET(0xDC6B5C0)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_METHOD_6_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xDC6B8F0)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDC6BC60)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_UPDATESHOWANIMATION_OFFSET UNITYSDK_OFFSET(0xDC6B6E0)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC6BBA0)
#define RPG_CLIENT_PROP_GRAVITYBALLROTATEOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0xDC6BCC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallRotateObstacle_TypeDefinitionIndex = 78124;

	class GravityBallRotateObstacle : public ::RPG::Client::Prop::GravityBallObstacle
	{
	public:
		::System::Single RotateSpeed; // 0x38
		::RPG::Client::Prop::GravityBallRotateObstacle_GravityBallRotateObstacleDirection Direction; // 0x3C
		::UnityEngine::Rigidbody* PANDMEPOLJP; // 0x40
		::UnityEngine::Quaternion AFAKMDMGAKG; // 0x48
		::System::Single CHCPDIEIFOB; // 0x58
		::System::Single PPPDONEFGKI; // 0x5C
		::UnityEngine::Vector3 MPIFJAAIMBE; // 0x60
		::UnityEngine::Vector3 LKBCLLCFEAL; // 0x6C
		::UnityEngine::Quaternion MJCEJEEKEOF; // 0x78
		::UnityEngine::Vector3 CIFMFFJKIAE; // 0x88

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
