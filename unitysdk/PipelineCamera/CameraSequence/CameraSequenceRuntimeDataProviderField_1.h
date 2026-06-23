#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceRuntimeDataProvider; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class FieldInfo; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceRuntimeDataProviderField_1_TypeDefinitionIndex = 37857;

	template <typename T>
	class CameraSequenceRuntimeDataProviderField_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>** StaticGet_Fields()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceRuntimeDataProviderField_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
