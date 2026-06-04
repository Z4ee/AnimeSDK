#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_6DB5D1FB482336FB;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOTVSCREENLOD_AWAKE_OFFSET UNITYSDK_OFFSET(0xC14AB60)
#define RPG_CLIENT_MONOTVSCREENLOD_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xC14AD20)
#define RPG_CLIENT_MONOTVSCREENLOD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC14AC90)
#define RPG_CLIENT_MONOTVSCREENLOD_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC14ABE0)
#define RPG_CLIENT_MONOTVSCREENLOD_UPDATE_OFFSET UNITYSDK_OFFSET(0xC14AC40)
#define RPG_CLIENT_MONOTVSCREENLOD__CTOR_OFFSET UNITYSDK_OFFSET(0xC14AD30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTVScreenLod_TypeDefinitionIndex = 66161;

	class MonoTVScreenLod : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* KeyPerProp; // 0x18
		::UnityEngine::GameObject* videoPlayerLod0; // 0x20
		::Il2CppArray<::UnityEngine::GameObject*>* framePlayerLod1; // 0x28
		::Class_2_6DB5D1FB482336FB* _Behavior; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENLOD__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENLOD_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENLOD_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENLOD_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENLOD_ONDESTROY_OFFSET))(this);
		}

		::Class_2_6DB5D1FB482336FB* get_Behavior()
		{
			return ((::Class_2_6DB5D1FB482336FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENLOD_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
