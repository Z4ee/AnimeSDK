#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define CINEMACHINE_CINEMACHINEBLENDDEFINITION_CREATESTANDARDCURVES_OFFSET UNITYSDK_OFFSET(0x3950790)
#define CINEMACHINE_CINEMACHINEBLENDDEFINITION_GET_BLENDCURVE_OFFSET UNITYSDK_OFFSET(0x39507A0)
#define CINEMACHINE_CINEMACHINEBLENDDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x3950770)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlendDefinition_TypeDefinitionIndex = 37647;

	struct alignas(8) CinemachineBlendDefinition
	{
		static ::Il2CppArray<::UnityEngine::AnimationCurve*>** StaticGet_sStandardCurves()
		{
			return (::Il2CppArray<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(CinemachineBlendDefinition_TypeDefinitionIndex)->GetStaticField(0x1EE0);
		}
		::Cinemachine::CinemachineBlendDefinition_Style m_Style; // 0x10
		::System::Single m_Time; // 0x14
		::UnityEngine::AnimationCurve* m_CustomCurve; // 0x18

		::System::Void _ctor(::Cinemachine::CinemachineBlendDefinition_Style a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlendDefinition_Style, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDDEFINITION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CreateStandardCurves()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDDEFINITION_CREATESTANDARDCURVES_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_BlendCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDDEFINITION_GET_BLENDCURVE_OFFSET))(this);
		}
	};
}
