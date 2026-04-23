#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOTRAVELSHIPSTATION_GET_COLLIDERCENTER_OFFSET UNITYSDK_OFFSET(0xAA07560)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ISLOOKAT_OFFSET UNITYSDK_OFFSET(0xAA070F0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_0AD139A96804E15E_OFFSET UNITYSDK_OFFSET(0xAA077F0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_10CF9247431CA0D8_OFFSET UNITYSDK_OFFSET(0xAA069F0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_292F9610D63D1947_OFFSET UNITYSDK_OFFSET(0xAA07950)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_2B0AE62D097BB2AF_OFFSET UNITYSDK_OFFSET(0xAA079D0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_9B23FC08130ED5FB_OFFSET UNITYSDK_OFFSET(0xAA06570)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0xAA06EF0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xAA06E70)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAA063D0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAA06270)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xAA067A0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0xAA06C20)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION__CTOR_OFFSET UNITYSDK_OFFSET(0xAA07B10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTravelShipStation_TypeDefinitionIndex = 63427;

	class MonoTravelShipStation : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoTravelShipStation_TypeDefinitionIndex)->GetStaticField(0xEBC0);
		}
		// static const ::System::UInt32 DockQuestID = 0x3DB7AB; // 0x0
		// static const ::System::Single LookForwardDot; // 0x0
		// static const ::System::Single EventRadiusRatio; // 0x0
		::UnityEngine::Transform* Origin; // 0x18
		::UnityEngine::SphereCollider* Collider; // 0x20
		::System::Single EventRadiusRatioForTrigger; // 0x28
		::System::String* EventName; // 0x30
		::System::Boolean Field_5_7; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerStay(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_ONTRIGGERSTAY_OFFSET))(this, a1);
		}

		::System::Void Method_5_F37CDBD6D46274D2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_F37CDBD6D46274D2_OFFSET))(this, a1);
		}

		::System::Void Method_5_10CF9247431CA0D8(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_10CF9247431CA0D8_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsLookAt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_ISLOOKAT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ColliderCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_GET_COLLIDERCENTER_OFFSET))(this);
		}

		::System::Void Method_5_0AD139A96804E15E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_0AD139A96804E15E_OFFSET))(this, a1);
		}

		::System::Void Method_5_9B23FC08130ED5FB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_9B23FC08130ED5FB_OFFSET))(this, a1);
		}

		::System::Void Method_5_2B0AE62D097BB2AF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_2B0AE62D097BB2AF_OFFSET))(this, a1);
		}

		::System::Void Method_5_CCD88C0D86A5A786()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_CCD88C0D86A5A786_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* Method_5_292F9610D63D1947()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_292F9610D63D1947_OFFSET))(this);
		}
	};
}
