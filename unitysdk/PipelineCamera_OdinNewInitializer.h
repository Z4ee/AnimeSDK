#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIPELINECAMERA_ODINNEWINITIALIZER_INITODINNEW_OFFSET UNITYSDK_OFFSET(0x1DACB3B0)
#define PIPELINECAMERA_ODINNEWINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DACB550)

inline static constexpr unsigned int PipelineCamera_OdinNewInitializer_TypeDefinitionIndex = 37473;

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
