#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_BB20710A4A2719C3;
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONORANDOMOFFSETSCALE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA9ED680)
#define RPG_CLIENT_MONORANDOMOFFSETSCALE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA9ED810)
#define RPG_CLIENT_MONORANDOMOFFSETSCALE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA9ED6F0)
#define RPG_CLIENT_MONORANDOMOFFSETSCALE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA9ED7C0)
#define RPG_CLIENT_MONORANDOMOFFSETSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9ED8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRandomOffsetScale_TypeDefinitionIndex = 63280;

	class MonoRandomOffsetScale : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* referenceRoot; // 0x18
		::UnityEngine::Vector2 offsetScaleRange; // 0x20
		::Il2CppArray<::UnityEngine::GameObject*>* offsetRoot; // 0x28
		::Il2CppArray<::System::Single>* Offset; // 0x30
		::Class_2_BB20710A4A2719C3* _Behavior; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANDOMOFFSETSCALE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANDOMOFFSETSCALE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANDOMOFFSETSCALE_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANDOMOFFSETSCALE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORANDOMOFFSETSCALE_ONDESTROY_OFFSET))(this);
		}
	};
}
