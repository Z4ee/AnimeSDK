#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_GETFISHTANKTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12F99E10)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_GETFISHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x12F99AB0)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12F99F80)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_2C1FE282BA2BA531_OFFSET UNITYSDK_OFFSET(0x12F9A8D0)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_4434761CB9BE21F7_OFFSET UNITYSDK_OFFSET(0x12F9A920)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_7DBE4BF81A0D0238_OFFSET UNITYSDK_OFFSET(0x12F99FE0)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x12F990C0)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_AA08720895458700_OFFSET UNITYSDK_OFFSET(0x12F9A800)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x12F986C0)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_BE696DA51BEC84E8_OFFSET UNITYSDK_OFFSET(0x12F9A880)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12F99600)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12F98150)
#define MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12F9A7A0)

namespace MoleMole::Module::FishingV2
{
	inline static constexpr unsigned int SummerFishAquariumController_TypeDefinitionIndex = 41160;

	class SummerFishAquariumController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_7; // 0x0
		// static const ::System::String* Field_5_8; // 0x0
		// static const ::System::String* Field_5_9; // 0x0
		// static const ::System::String* Field_5_10; // 0x0
		// static const ::System::String* Field_5_11; // 0x0
		::Cinemachine::CinemachineVirtualCamera* Field_5_0; // 0x18
		::System::Int32 Field_5_1; // 0x20
		::UnityEngine::Transform* Field_5_2; // 0x28
		::UnityEngine::Transform* Field_5_3; // 0x30
		::UnityEngine::Vector3 Field_5_4; // 0x38
		::UnityEngine::Vector3 Field_5_5; // 0x44
		::System::Boolean Field_5_6; // 0x50
		::System::Single Field_5_12; // 0x54
		::UnityEngine::Vector3 Field_5_13; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetFishTransform(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_GETFISHTRANSFORM_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetFishTankTransform(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_GETFISHTANKTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_AA08720895458700(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_AA08720895458700_OFFSET))(this, a1);
		}

		::System::Void Method_5_9E38127F40B34F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_9E38127F40B34F1F_OFFSET))(this);
		}

		::System::Void Method_5_B43C848B078B3C34()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_B43C848B078B3C34_OFFSET))(this);
		}

		::System::Void Method_5_BE696DA51BEC84E8(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_BE696DA51BEC84E8_OFFSET))(this, a1);
		}

		::System::Void Method_5_2C1FE282BA2BA531(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_2C1FE282BA2BA531_OFFSET))(this, a1);
		}

		::System::Void Method_5_4434761CB9BE21F7(::System::EventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_4434761CB9BE21F7_OFFSET))(this, a1);
		}

		::System::Void Method_5_7DBE4BF81A0D0238(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MODULE_FISHINGV2_SUMMERFISHAQUARIUMCONTROLLER_METHOD_5_7DBE4BF81A0D0238_OFFSET))(this, a1);
		}
	};
}
