#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/ControlPointOption.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestMetaCGOptions; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGUTILITY_CALCULATEUV2_1_OFFSET UNITYSDK_OFFSET(0x1BC199A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGUTILITY_CALCULATEUV2_OFFSET UNITYSDK_OFFSET(0x1BC19940)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGUTILITY_GETCONTROLPOINTSWITHOPTIONS_OFFSET UNITYSDK_OFFSET(0x1BC19AD0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGUtility_TypeDefinitionIndex = 37344;

	class CGUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector2>* CalculateUV2(::Il2CppArray<::UnityEngine::Vector2>* uv)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGUTILITY_CALCULATEUV2_OFFSET))(uv);
		}

		static ::System::Void CalculateUV2_1(::Il2CppArray<::UnityEngine::Vector2>* uv, ::Il2CppArray<::UnityEngine::Vector2>* uv2, ::System::Int32 elementsNumber)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGUTILITY_CALCULATEUV2_1_OFFSET))(uv, uv2, elementsNumber);
		}

		static ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::ControlPointOption>* GetControlPointsWithOptions(::FluffyUnderware::Curvy::Generator::CGDataRequestMetaCGOptions* options, ::FluffyUnderware::Curvy::CurvySpline* shape, ::System::Single startDist, ::System::Single endDist, ::System::Boolean optimize, ::System::Int32& initialMaterialID, ::System::Single& initialMaxStep)
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::ControlPointOption>*(*)(::FluffyUnderware::Curvy::Generator::CGDataRequestMetaCGOptions*, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGUTILITY_GETCONTROLPOINTSWITHOPTIONS_OFFSET))(options, shape, startDist, endDist, optimize, initialMaterialID, initialMaxStep);
		}
	};
}
