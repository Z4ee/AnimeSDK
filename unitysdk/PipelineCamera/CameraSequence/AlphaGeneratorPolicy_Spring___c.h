#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Equation/OrdinaryDifferential/SecondOrderHomogeneous.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9B6420)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B6460)
#define PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING___C__GETDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B9B6470)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AlphaGeneratorPolicy_Spring___c_TypeDefinitionIndex = 36280;

	class AlphaGeneratorPolicy_Spring___c : public ::System::Object
	{
	public:
		static ::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::Foundation::Equation::OrdinaryDifferential::SecondOrderHomogeneous>** StaticGet___9__7_0()
		{
			return (::System::Func_4<::System::Single, ::System::Single, ::System::Single, ::Foundation::Equation::OrdinaryDifferential::SecondOrderHomogeneous>**)Il2CppClass::FromTypeDefinitionIndex(AlphaGeneratorPolicy_Spring___c_TypeDefinitionIndex)->GetStaticField(0x270D0);
		}
		static ::PipelineCamera::CameraSequence::AlphaGeneratorPolicy_Spring___c** StaticGet___9()
		{
			return (::PipelineCamera::CameraSequence::AlphaGeneratorPolicy_Spring___c**)Il2CppClass::FromTypeDefinitionIndex(AlphaGeneratorPolicy_Spring___c_TypeDefinitionIndex)->GetStaticField(0x270D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING___C__CTOR_OFFSET))(this);
		}

		::Foundation::Equation::OrdinaryDifferential::SecondOrderHomogeneous _GetData_b__7_0(::System::Single d, ::System::Single s, ::System::Single x1)
		{
			return ((::Foundation::Equation::OrdinaryDifferential::SecondOrderHomogeneous(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ALPHAGENERATORPOLICY_SPRING___C__GETDATA_B__7_0_OFFSET))(this, d, s, x1);
		}
	};
}
