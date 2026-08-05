#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineBrain; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x112E78E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x112E7920)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT___C___CCTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x112E7930)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int TriggerCameraCut___c_TypeDefinitionIndex = 77753;

	class TriggerCameraCut___c : public ::System::Object
	{
	public:
		static ::MoleMole::Utils::CameraSequence::TriggerCameraCut___c** StaticGet___9()
		{
			return (::MoleMole::Utils::CameraSequence::TriggerCameraCut___c**)Il2CppClass::FromTypeDefinitionIndex(TriggerCameraCut___c_TypeDefinitionIndex)->GetStaticField(0x42F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__3_0(::Cinemachine::CinemachineBrain* _)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_TRIGGERCAMERACUT___C___CCTOR_B__3_0_OFFSET))(this, _);
		}
	};
}
