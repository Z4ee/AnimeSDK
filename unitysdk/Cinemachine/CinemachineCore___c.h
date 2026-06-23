#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace System { template <typename T> class Comparison_1; }

#define CINEMACHINE_CINEMACHINECORE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E679C20)
#define CINEMACHINE_CINEMACHINECORE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E679C60)
#define CINEMACHINE_CINEMACHINECORE___C__GETVIRTUALCAMERA_B__30_0_OFFSET UNITYSDK_OFFSET(0x1E679C70)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCore___c_TypeDefinitionIndex = 34109;

	class CinemachineCore___c : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineCore___c** StaticGet___9()
		{
			return (::Cinemachine::CinemachineCore___c**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore___c_TypeDefinitionIndex)->GetStaticField(0x27730);
		}
		static ::System::Comparison_1<::Cinemachine::CinemachineVirtualCameraBase*>** StaticGet___9__30_0()
		{
			return (::System::Comparison_1<::Cinemachine::CinemachineVirtualCameraBase*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore___c_TypeDefinitionIndex)->GetStaticField(0x27738);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetVirtualCamera_b__30_0(::Cinemachine::CinemachineVirtualCameraBase* x, ::Cinemachine::CinemachineVirtualCameraBase* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE___C__GETVIRTUALCAMERA_B__30_0_OFFSET))(this, x, y);
		}
	};
}
