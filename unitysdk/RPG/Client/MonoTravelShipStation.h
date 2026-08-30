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

#define RPG_CLIENT_MONOTRAVELSHIPSTATION_GET_COLLIDERCENTER_OFFSET UNITYSDK_OFFSET(0xD873180)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ISLOOKAT_OFFSET UNITYSDK_OFFSET(0xD872CC0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_0C65243341F1EFB1_OFFSET UNITYSDK_OFFSET(0xD873410)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_292F9610D63D1947_OFFSET UNITYSDK_OFFSET(0xD8734C0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_5543817C5A5F79C6_OFFSET UNITYSDK_OFFSET(0xD873540)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_7933D8FAF1D97D04_OFFSET UNITYSDK_OFFSET(0xD872410)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_86A88E9E65926C16_OFFSET UNITYSDK_OFFSET(0xD872730)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0xD872AC0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xD872A40)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD872220)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD872070)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xD8725E0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0xD8728F0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION__CTOR_OFFSET UNITYSDK_OFFSET(0xD873640)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTravelShipStation_TypeDefinitionIndex = 68752;

	class MonoTravelShipStation : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_EGPEAPDBPPJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoTravelShipStation_TypeDefinitionIndex)->GetStaticField(0x8D60);
		}
		// static const ::System::UInt32 DockQuestID = 0x3DB7AB; // 0x0
		// static const ::System::Single LookForwardDot; // 0x0
		// static const ::System::Single EventRadiusRatio; // 0x0
		::UnityEngine::Transform* Origin; // 0x18
		::UnityEngine::SphereCollider* Collider; // 0x20
		::System::Single EventRadiusRatioForTrigger; // 0x28
		::System::String* EventName; // 0x30
		::System::Boolean PJKNAOEINHH; // 0x38

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

		::System::Void Method_5_86A88E9E65926C16(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_86A88E9E65926C16_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsLookAt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_ISLOOKAT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ColliderCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_GET_COLLIDERCENTER_OFFSET))(this);
		}

		::System::Void Method_5_0C65243341F1EFB1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_0C65243341F1EFB1_OFFSET))(this, a1);
		}

		::System::Void Method_5_7933D8FAF1D97D04(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_7933D8FAF1D97D04_OFFSET))(this, a1);
		}

		::System::Void Method_5_5543817C5A5F79C6(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_5543817C5A5F79C6_OFFSET))(this, a1);
		}

		::System::Void Method_5_913947B6596EB50A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_913947B6596EB50A_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* Method_5_292F9610D63D1947()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_METHOD_5_292F9610D63D1947_OFFSET))(this);
		}
	};
}
