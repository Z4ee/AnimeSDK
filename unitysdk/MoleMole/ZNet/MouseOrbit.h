#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_ZNET_MOUSEORBIT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x112EAC60)
#define MOLEMOLE_ZNET_MOUSEORBIT_METHOD_5_B2E1F4B7BD95D0F7_OFFSET UNITYSDK_OFFSET(0x112EB210)
#define MOLEMOLE_ZNET_MOUSEORBIT_METHOD_5_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x112EB2E0)
#define MOLEMOLE_ZNET_MOUSEORBIT_START_OFFSET UNITYSDK_OFFSET(0x112EA950)
#define MOLEMOLE_ZNET_MOUSEORBIT__CTOR_OFFSET UNITYSDK_OFFSET(0x112EB710)

namespace MoleMole::ZNet
{
	inline static constexpr unsigned int MouseOrbit_TypeDefinitionIndex = 41448;

	class MouseOrbit : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* target; // 0x18
		::System::Single distance; // 0x20
		::System::Single xSpeed; // 0x24
		::System::Single ySpeed; // 0x28
		::System::Single yMinLimit; // 0x2C
		::System::Single yMaxLimit; // 0x30
		::System::Single Field_5_5; // 0x34
		::System::Single Field_5_4; // 0x38
		::UnityEngine::Vector3 Field_5_11; // 0x3C
		::UnityEngine::Quaternion Field_5_10; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_MOUSEORBIT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_MOUSEORBIT_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_MOUSEORBIT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_MOUSEORBIT_METHOD_5_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		static ::System::Single Method_5_B2E1F4B7BD95D0F7(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_MOUSEORBIT_METHOD_5_B2E1F4B7BD95D0F7_OFFSET))(a1, a2, a3);
		}
	};
}
