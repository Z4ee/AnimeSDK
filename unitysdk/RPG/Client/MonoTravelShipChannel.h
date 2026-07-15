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

#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1A357CE0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x1A357900)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_P0_OFFSET UNITYSDK_OFFSET(0x1A357B90)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_P1_OFFSET UNITYSDK_OFFSET(0x1A357C30)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x1A357EF0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_63E8F19CFED33AB3_OFFSET UNITYSDK_OFFSET(0x1A358A70)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_689065A6623E391A_OFFSET UNITYSDK_OFFSET(0x1A3589F0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_A0EC6C9CB15FAEC9_OFFSET UNITYSDK_OFFSET(0x1A3583C0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x1A358470)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_E4F49C7FF76445EE_OFFSET UNITYSDK_OFFSET(0x1A358B40)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_F492C0E050258EA1_OFFSET UNITYSDK_OFFSET(0x1A358530)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A357E90)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1A358010)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1A3587B0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x1A358630)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A358D10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTravelShipChannel_TypeDefinitionIndex = 65712;

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

		::System::Single Method_5_689065A6623E391A(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_689065A6623E391A_OFFSET))(this, a1);
		}

		::System::Single Method_5_E4F49C7FF76445EE(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_METHOD_5_E4F49C7FF76445EE_OFFSET))(this, a1);
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
