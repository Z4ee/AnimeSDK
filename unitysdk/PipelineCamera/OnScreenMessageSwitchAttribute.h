#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PIPELINECAMERA_ONSCREENMESSAGESWITCHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EED3BB0)

namespace PipelineCamera
{
	inline static constexpr unsigned int OnScreenMessageSwitchAttribute_TypeDefinitionIndex = 38295;

	class OnScreenMessageSwitchAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_ONSCREENMESSAGESWITCHATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
