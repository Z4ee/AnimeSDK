#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceContextVariableAccessor_1_Accessor_1_TypeDefinitionIndex = 38606;

	template <typename T, typename TResult>
	class CameraSequenceContextVariableAccessor_1_Accessor_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceMemberPath, ::System::Func_2<T, TResult>*>** StaticGet_AccessorInvokers()
		{
			return (::System::Collections::Generic::Dictionary_2<::PipelineCamera::CameraSequence::CameraSequenceMemberPath, ::System::Func_2<T, TResult>*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceContextVariableAccessor_1_Accessor_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
