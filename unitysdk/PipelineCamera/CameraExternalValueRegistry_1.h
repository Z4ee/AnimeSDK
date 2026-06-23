#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/CameraExternalValueType.h"
#include "unitysdk/PipelineCamera/ExternalValueTupleSlot.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T1, typename T2> class TypedCameraExternalValue_2; }
namespace PipelineCamera { template <typename T> class CameraExternalValue_1; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraExternalValueRegistry_1_TypeDefinitionIndex = 37520;

	template <typename TController>
	class CameraExternalValueRegistry_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::PipelineCamera::CameraExternalValue_1<TController>*>** StaticGet_ExternalValues()
		{
			return (::Il2CppArray<::PipelineCamera::CameraExternalValue_1<TController>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraExternalValueRegistry_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
