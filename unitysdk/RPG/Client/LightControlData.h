#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define RPG_CLIENT_LIGHTCONTROLDATA_AWAKE_OFFSET UNITYSDK_OFFSET(0x19505CA0)
#define RPG_CLIENT_LIGHTCONTROLDATA_ISCHILDOFENVNODE_OFFSET UNITYSDK_OFFSET(0x19505BB0)
#define RPG_CLIENT_LIGHTCONTROLDATA_RESETTOINITIAL_OFFSET UNITYSDK_OFFSET(0x19505F30)
#define RPG_CLIENT_LIGHTCONTROLDATA_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x19505EB0)
#define RPG_CLIENT_LIGHTCONTROLDATA_SETINTENSITY_OFFSET UNITYSDK_OFFSET(0x19505E10)
#define RPG_CLIENT_LIGHTCONTROLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19506080)

namespace RPG::Client
{
	inline static constexpr unsigned int LightControlData_TypeDefinitionIndex = 70147;

	class LightControlData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* lightName; // 0x18
		::UnityEngine::LightType lightType; // 0x20
		::System::Boolean controllable; // 0x24
		::System::Int32 lightGroupId; // 0x28
		::System::Single initialIntensity; // 0x2C
		::UnityEngine::Color initialColor; // 0x30
		::UnityEngine::Vector2 intensityRange; // 0x40
		::System::Single currentIntensity; // 0x48
		::UnityEngine::Color currentColor; // 0x4C
		::System::String* assignedCalculator; // 0x60
		::UnityEngine::Light* lightComponent; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONTROLDATA__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsChildOfEnvNode(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONTROLDATA_ISCHILDOFENVNODE_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONTROLDATA_AWAKE_OFFSET))(this);
		}

		::System::Void SetIntensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONTROLDATA_SETINTENSITY_OFFSET))(this, a1);
		}

		::System::Void SetColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONTROLDATA_SETCOLOR_OFFSET))(this, a1);
		}

		::System::Void ResetToInitial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONTROLDATA_RESETTOINITIAL_OFFSET))(this);
		}
	};
}
