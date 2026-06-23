#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1; }
namespace PipelineCamera::SubModule { template <typename T> class CameraSequenceCollectionPlayer_1___c; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int CameraSequenceCollectionPlayer_1___c_TypeDefinitionIndex = 38030;

	template <typename T>
	class CameraSequenceCollectionPlayer_1___c : public ::System::Object
	{
	public:
		static ::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1___c<T>** StaticGet___9()
		{
			return (::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollectionPlayer_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<T>*, ::System::Action*>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::PipelineCamera::SubModule::CameraSequenceCollectionPlayer_1<T>*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollectionPlayer_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Action*>** StaticGet___9__37_0()
		{
			return (::System::Action_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollectionPlayer_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::PipelineCamera::ICameraDataBlender*>** StaticGet___9__45_4()
		{
			return (::System::Action_1<::PipelineCamera::ICameraDataBlender*>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCollectionPlayer_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
