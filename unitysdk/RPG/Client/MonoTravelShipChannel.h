#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xAA037F0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0xAA03410)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_P0_OFFSET UNITYSDK_OFFSET(0xAA036A0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_P1_OFFSET UNITYSDK_OFFSET(0xAA03740)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0xAA03A00)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_470884EE511DA6F5_OFFSET UNITYSDK_OFFSET(0xAA04680)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_63E8F19CFED33AB3_OFFSET UNITYSDK_OFFSET(0xAA04700)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_8ECF5103684D94F7_OFFSET UNITYSDK_OFFSET(0xAA047D0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_A0EC6C9CB15FAEC9_OFFSET UNITYSDK_OFFSET(0xAA03F70)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0xAA04020)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_F492C0E050258EA1_OFFSET UNITYSDK_OFFSET(0xAA040E0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAA039A0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xAA03B20)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xAA043D0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0xAA041E0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAA04920)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTravelShipChannel_TypeDefinitionIndex = 63424;

	class MonoTravelShipChannel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::CapsuleCollider* Collider; // 0x18
		::System::Single Duration; // 0x20
		::System::String* DynamicDuration; // 0x28
		::System::Single BackDuration; // 0x30
		::System::String* BackDynamicDuration; // 0x38
		::System::String* EnterChannelEvent; // 0x40
		::System::String* BackEnterChannelEvent; // 0x48
		::System::String* SelfEnterChannelEvent; // 0x50
		::System::String* SelfBackEnterChannelEvent; // 0x58
		::System::Single Field_5_9; // 0x60
		::System::Single Field_5_10; // 0x64
		::UnityEngine::Vector3 Field_5_11; // 0x68
		::UnityEngine::Transform* Field_5_12; // 0x78
		::RPG::Client::EntityGameObjectConnection* Field_5_13; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Origin()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_ORIGIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_P0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_P0_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_P1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_P1_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Direction()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerStay(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGERSTAY_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::String*, ::System::String*> Method_5_A0EC6C9CB15FAEC9(::UnityEngine::Vector3 a1)
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_A0EC6C9CB15FAEC9_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_63E8F19CFED33AB3(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_63E8F19CFED33AB3_OFFSET))(this, a1);
		}

		::System::Void Method_5_0E142E3463F30350()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_0E142E3463F30350_OFFSET))(this);
		}

		::System::Single Method_5_470884EE511DA6F5(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_470884EE511DA6F5_OFFSET))(this, a1);
		}

		::System::Single Method_5_8ECF5103684D94F7(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_8ECF5103684D94F7_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_ABFE6A357B89C69A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_ABFE6A357B89C69A_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* Method_5_F492C0E050258EA1()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_F492C0E050258EA1_OFFSET))(this);
		}
	};
}
