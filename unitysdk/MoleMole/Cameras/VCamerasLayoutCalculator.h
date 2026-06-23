#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Cameras { class VCamerasBaseLayout; }

#define MOLEMOLE_CAMERAS_VCAMERASLAYOUTCALCULATOR_SETTLELAYOUT_1_OFFSET UNITYSDK_OFFSET(0x11082060)
#define MOLEMOLE_CAMERAS_VCAMERASLAYOUTCALCULATOR_SETTLELAYOUT_OFFSET UNITYSDK_OFFSET(0x11081FC0)
#define MOLEMOLE_CAMERAS_VCAMERASLAYOUTCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11082150)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VCamerasLayoutCalculator_TypeDefinitionIndex = 79060;

	class VCamerasLayoutCalculator : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* vCameras; // 0x58
		::MoleMole::Cameras::VCamerasBaseLayout* vCamerasBaseLayout; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASLAYOUTCALCULATOR__CTOR_OFFSET))(this);
		}

		::System::Void SettleLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASLAYOUTCALCULATOR_SETTLELAYOUT_OFFSET))(this);
		}

		::System::Void SettleLayout_1(::UnityEngine::Vector3 followPos, ::UnityEngine::Vector3 lookatPos, ::System::Single dis2RootLookYOffset, ::System::UInt32 fromEntityId)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASLAYOUTCALCULATOR_SETTLELAYOUT_1_OFFSET))(this, followPos, lookatPos, dis2RootLookYOffset, fromEntityId);
		}
	};
}
