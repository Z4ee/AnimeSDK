#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/GravityBallObstacle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A926D90)
#define RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1A9277A0)
#define RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_HIDE_OFFSET UNITYSDK_OFFSET(0x1A927630)
#define RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_INIT_OFFSET UNITYSDK_OFFSET(0x1A927470)
#define RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_METHOD_6_0C247A24E7FC3289_OFFSET UNITYSDK_OFFSET(0x1A927D60)
#define RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A927ED0)
#define RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_UPDATESHOWANIMATION_OFFSET UNITYSDK_OFFSET(0x1A927680)
#define RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A927E10)
#define RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A927F30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallLinearMoveObstacle_TypeDefinitionIndex = 78119;

	class GravityBallLinearMoveObstacle : public ::RPG::Client::Prop::GravityBallObstacle
	{
	public:
		::System::Single MoveSpeed; // 0x38
		::UnityEngine::Rigidbody* HPAGDLDHKFC; // 0x40
		::UnityEngine::Transform* MovePoint1; // 0x48
		::UnityEngine::Transform* MovePoint2; // 0x50
		::UnityEngine::Transform* MovePoint3; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GDOGAHABEEM; // 0x60
		::System::Int32 AJOIBMBGAMN; // 0x68
		::System::Boolean JAJPGBCPEND; // 0x6C
		::UnityEngine::Vector3 MLKCOKLABAM; // 0x70
		::UnityEngine::Quaternion MJCEJEEKEOF; // 0x7C
		::UnityEngine::Vector3 CIFMFFJKIAE; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_AWAKE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_INIT_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_HIDE_OFFSET))(this);
		}

		::System::Void UpdateShowAnimation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_UPDATESHOWANIMATION_OFFSET))(this, a1);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Method_6_0C247A24E7FC3289()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_METHOD_6_0C247A24E7FC3289_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLLINEARMOVEOBSTACLE_ONDESTROY_OFFSET))(this);
		}
	};
}
