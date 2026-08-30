#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ENVELOPEDEFINITION_CHANGESTOPTIME_OFFSET UNITYSDK_OFFSET(0x3AEC170)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ENVELOPEDEFINITION_CLEAR_OFFSET UNITYSDK_OFFSET(0x3AEC1B0)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ENVELOPEDEFINITION_DEFAULT_OFFSET UNITYSDK_OFFSET(0x18C63620)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ENVELOPEDEFINITION_GETVALUEAT_OFFSET UNITYSDK_OFFSET(0x3AEC160)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ENVELOPEDEFINITION_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x3AEC140)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ENVELOPEDEFINITION_VALIDATE_OFFSET UNITYSDK_OFFSET(0x3AEC1C0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseManager_EnvelopeDefinition_TypeDefinitionIndex = 38576;

	struct alignas(8) CinemachineImpulseManager_EnvelopeDefinition
	{
		::UnityEngine::AnimationCurve* m_AttackShape; // 0x10
		::UnityEngine::AnimationCurve* m_DecayShape; // 0x18
		::System::Single m_AttackTime; // 0x20
		::System::Single m_SustainTime; // 0x24
		::System::Single m_DecayTime; // 0x28
		::System::Boolean m_ScaleWithImpact; // 0x2C
		::System::Boolean m_HoldForever; // 0x2D

		static ::Cinemachine::CinemachineImpulseManager_EnvelopeDefinition Default()
		{
			return ((::Cinemachine::CinemachineImpulseManager_EnvelopeDefinition(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ENVELOPEDEFINITION_DEFAULT_OFFSET))();
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ENVELOPEDEFINITION_GET_DURATION_OFFSET))(this);
		}

		::System::Single GetValueAt(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ENVELOPEDEFINITION_GETVALUEAT_OFFSET))(this, a1);
		}

		::System::Void ChangeStopTime(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ENVELOPEDEFINITION_CHANGESTOPTIME_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ENVELOPEDEFINITION_CLEAR_OFFSET))(this);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ENVELOPEDEFINITION_VALIDATE_OFFSET))(this);
		}
	};
}
