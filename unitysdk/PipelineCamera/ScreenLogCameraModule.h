#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int ScreenLogCameraModule_TypeDefinitionIndex = 37637;

	class ScreenLogCameraModule : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_DebugInPlaceBlender()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScreenLogCameraModule_TypeDefinitionIndex)->GetStaticField(0x13010);
		}
	};
}
