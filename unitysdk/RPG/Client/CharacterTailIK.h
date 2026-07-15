#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_456;
namespace RPG::Client { class FABRIK; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHARACTERTAILIK_CLEAR_OFFSET UNITYSDK_OFFSET(0x196230B0)
#define RPG_CLIENT_CHARACTERTAILIK_COMPARETO_OFFSET UNITYSDK_OFFSET(0x19623B50)
#define RPG_CLIENT_CHARACTERTAILIK_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x19623C80)
#define RPG_CLIENT_CHARACTERTAILIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x196231B0)
#define RPG_CLIENT_CHARACTERTAILIK_METHOD_5_6BF81B6CD305D3E3_OFFSET UNITYSDK_OFFSET(0x19623C90)
#define RPG_CLIENT_CHARACTERTAILIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19623150)
#define RPG_CLIENT_CHARACTERTAILIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x196230F0)
#define RPG_CLIENT_CHARACTERTAILIK_PROCESS_OFFSET UNITYSDK_OFFSET(0x19623200)
#define RPG_CLIENT_CHARACTERTAILIK__CTOR_OFFSET UNITYSDK_OFFSET(0x19623D10)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterTailIK_TypeDefinitionIndex = 65341;

	class CharacterTailIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::FABRIK* mainIK; // 0x18
		::UnityEngine::Transform* detectPoint; // 0x20
		::UnityEngine::LayerMask detectLayers; // 0x28
		::System::Single detectUpOffset; // 0x2C
		::System::Single detectProxyOffset; // 0x30
		::System::Single movePlaneRatio; // 0x34
		::System::Single maxMovePlaneDistance; // 0x38
		::UnityEngine::Vector3 Field_5_7; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_CLEAR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_LATEUPDATE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::Class_0_16E4307DCC419505_456* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_456*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void Process(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_PROCESS_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* Method_5_6BF81B6CD305D3E3()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_METHOD_5_6BF81B6CD305D3E3_OFFSET))(this);
		}
	};
}
