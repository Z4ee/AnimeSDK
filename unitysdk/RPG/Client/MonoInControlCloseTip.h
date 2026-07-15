#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOINCONTROLCLOSETIP_AWAKE_OFFSET UNITYSDK_OFFSET(0x18C4C570)
#define RPG_CLIENT_MONOINCONTROLCLOSETIP_METHOD_5_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x18C4C760)
#define RPG_CLIENT_MONOINCONTROLCLOSETIP_METHOD_5_F5ADBA366C2EA507_OFFSET UNITYSDK_OFFSET(0x18C4C8B0)
#define RPG_CLIENT_MONOINCONTROLCLOSETIP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18C4C810)
#define RPG_CLIENT_MONOINCONTROLCLOSETIP__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4C900)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoInControlCloseTip_TypeDefinitionIndex = 58605;

	class MonoInControlCloseTip : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Field_5_0; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCLOSETIP__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCLOSETIP_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCLOSETIP_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_F5ADBA366C2EA507(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCLOSETIP_METHOD_5_F5ADBA366C2EA507_OFFSET))(this, a1);
		}

		::System::Void Method_5_6D93101E4CE10A96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLCLOSETIP_METHOD_5_6D93101E4CE10A96_OFFSET))(this);
		}
	};
}
