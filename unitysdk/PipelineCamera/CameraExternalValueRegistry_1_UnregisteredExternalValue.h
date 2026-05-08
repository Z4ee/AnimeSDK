#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/CameraExternalValueType.h"
#include "unitysdk/PipelineCamera/TypedCameraExternalValue_2.h"

namespace PipelineCamera { template <typename T> class CameraExternalValueRegistry_1_UnregisteredExternalValue; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraExternalValueRegistry_1_UnregisteredExternalValue_TypeDefinitionIndex = 35913;

	template <typename TController>
	class CameraExternalValueRegistry_1_UnregisteredExternalValue : public ::PipelineCamera::TypedCameraExternalValue_2<TController, ::System::Byte>
	{
	public:
		static ::PipelineCamera::CameraExternalValueRegistry_1_UnregisteredExternalValue<TController>** StaticGet_Instance()
		{
			return (::PipelineCamera::CameraExternalValueRegistry_1_UnregisteredExternalValue<TController>**)Il2CppClass::FromTypeDefinitionIndex(CameraExternalValueRegistry_1_UnregisteredExternalValue_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
