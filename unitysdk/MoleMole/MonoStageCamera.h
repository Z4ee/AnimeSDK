#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class String; }

#define MOLEMOLE_MONOSTAGECAMERA_ACTIVECAM_OFFSET UNITYSDK_OFFSET(0x15B41AE0)
#define MOLEMOLE_MONOSTAGECAMERA_AWAKE_OFFSET UNITYSDK_OFFSET(0x15B416B0)
#define MOLEMOLE_MONOSTAGECAMERA_GET_TRANSFORMNAME_OFFSET UNITYSDK_OFFSET(0x15B416A0)
#define MOLEMOLE_MONOSTAGECAMERA_METHOD_5_75DE19B7C4B2C2D6_OFFSET UNITYSDK_OFFSET(0x15B41F80)
#define MOLEMOLE_MONOSTAGECAMERA_METHOD_5_78037B64B814568E_OFFSET UNITYSDK_OFFSET(0x15B41760)
#define MOLEMOLE_MONOSTAGECAMERA_METHOD_5_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0x15B41B40)
#define MOLEMOLE_MONOSTAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B41EF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStageCamera_TypeDefinitionIndex = 57498;

	class MonoStageCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* Field_5_0; // 0x18
		::System::String* followName; // 0x20
		::System::String* lookAtName; // 0x28
		::Cinemachine::CinemachineVirtualCamera* virtualCamera; // 0x30
		::System::Boolean Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA__CTOR_OFFSET))(this);
		}

		::System::String* get_TransformName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_GET_TRANSFORMNAME_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_AWAKE_OFFSET))(this);
		}

		::System::Void ActiveCam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_ACTIVECAM_OFFSET))(this, a1);
		}

		::System::Void Method_5_AE828D899505A3B4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_METHOD_5_AE828D899505A3B4_OFFSET))(this);
		}

		::System::Void Method_5_75DE19B7C4B2C2D6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_METHOD_5_75DE19B7C4B2C2D6_OFFSET))(this);
		}

		::System::Void Method_5_78037B64B814568E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGECAMERA_METHOD_5_78037B64B814568E_OFFSET))(this);
		}
	};
}
