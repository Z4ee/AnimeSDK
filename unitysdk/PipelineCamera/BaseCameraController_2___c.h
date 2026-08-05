#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T1, typename T2> class BaseCameraController_2___c; }
namespace System { template <typename T> class Comparison_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int BaseCameraController_2___c_TypeDefinitionIndex = 38159;

	template <typename TController, typename TPostPipeline>
	class BaseCameraController_2___c : public ::System::Object
	{
	public:
		static ::PipelineCamera::BaseCameraController_2___c<TController, TPostPipeline>** StaticGet___9()
		{
			return (::PipelineCamera::BaseCameraController_2___c<TController, TPostPipeline>**)Il2CppClass::FromTypeDefinitionIndex(BaseCameraController_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Comparison_1<::System::UInt32>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BaseCameraController_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
