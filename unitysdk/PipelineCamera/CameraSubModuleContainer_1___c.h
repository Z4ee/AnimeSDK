#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSubModuleContainer_1_Item.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class CameraSubModuleContainer_1___c; }
namespace System { template <typename T> class Predicate_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraSubModuleContainer_1___c_TypeDefinitionIndex = 37536;

	template <typename T>
	class CameraSubModuleContainer_1___c : public ::System::Object
	{
	public:
		static ::PipelineCamera::CameraSubModuleContainer_1___c<T>** StaticGet___9()
		{
			return (::PipelineCamera::CameraSubModuleContainer_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(CameraSubModuleContainer_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Predicate_1<::PipelineCamera::CameraSubModuleContainer_1_Item<T>>** StaticGet___9__9_0()
		{
			return (::System::Predicate_1<::PipelineCamera::CameraSubModuleContainer_1_Item<T>>**)Il2CppClass::FromTypeDefinitionIndex(CameraSubModuleContainer_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
