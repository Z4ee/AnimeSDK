#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceContextVariableAccessor_1_TypeDefinitionIndex = 37944;

	template <typename T>
	class CameraSequenceContextVariableAccessor_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceMemberPath, ::System::Int64>** StaticGet_AccessorTypes()
		{
			return (::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceMemberPath, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceContextVariableAccessor_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
