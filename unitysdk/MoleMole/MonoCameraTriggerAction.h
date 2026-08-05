#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_MONOCAMERATRIGGERACTION_METHOD_5_9C3C348F898B3778_OFFSET UNITYSDK_OFFSET(0x13AA7E50)
#define MOLEMOLE_MONOCAMERATRIGGERACTION_TRIGGERVCAMPOINTCLEAR_OFFSET UNITYSDK_OFFSET(0x13AA8400)
#define MOLEMOLE_MONOCAMERATRIGGERACTION_TRIGGERVCAMPOINTENTER_OFFSET UNITYSDK_OFFSET(0x13AA7840)
#define MOLEMOLE_MONOCAMERATRIGGERACTION_TRIGGERVCAMPOINTEXIT_OFFSET UNITYSDK_OFFSET(0x13AA8490)
#define MOLEMOLE_MONOCAMERATRIGGERACTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AA8570)
#define MOLEMOLE_MONOCAMERATRIGGERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA8510)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCameraTriggerAction_TypeDefinitionIndex = 40653;

	class MonoCameraTriggerAction : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCameraTriggerAction_TypeDefinitionIndex)->GetStaticField(0x106F0);
		}
		// static const ::System::String* Field_5_2; // 0x0
		::System::Single tolerateAngle; // 0x18
		::System::Boolean isElevationRatioRecover; // 0x1C
		::Cinemachine::CinemachineBlendDefinition BlendDefinitionEnter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAMERATRIGGERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAMERATRIGGERACTION__CCTOR_OFFSET))();
		}

		::System::Void TriggerVCamPointEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAMERATRIGGERACTION_TRIGGERVCAMPOINTENTER_OFFSET))(this);
		}

		static ::System::Void TriggerVCamPointClear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAMERATRIGGERACTION_TRIGGERVCAMPOINTCLEAR_OFFSET))();
		}

		::System::Void TriggerVCamPointExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAMERATRIGGERACTION_TRIGGERVCAMPOINTEXIT_OFFSET))(this);
		}

		::System::Single Method_5_9C3C348F898B3778()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCAMERATRIGGERACTION_METHOD_5_9C3C348F898B3778_OFFSET))(this);
		}
	};
}
