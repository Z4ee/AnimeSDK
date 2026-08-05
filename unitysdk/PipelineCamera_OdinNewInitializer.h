#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIPELINECAMERA_ODINNEWINITIALIZER_INITODINNEW_OFFSET UNITYSDK_OFFSET(0x1EED42C0)
#define PIPELINECAMERA_ODINNEWINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EED4460)

inline static constexpr unsigned int PipelineCamera_OdinNewInitializer_TypeDefinitionIndex = 38134;

class PipelineCamera_OdinNewInitializer : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_ODINNEWINITIALIZER__CTOR_OFFSET))(this);
	}

	static ::System::Void InitOdinNew()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_ODINNEWINITIALIZER_INITODINNEW_OFFSET))();
	}
};
