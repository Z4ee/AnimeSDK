#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIPELINECAMERA_METHOD___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DACA890)
#define PIPELINECAMERA_METHOD___C__DISPLAYCLASS38_0__SAMPLECIRCLE_B__0_OFFSET UNITYSDK_OFFSET(0x1DACA8A0)

namespace PipelineCamera
{
	inline static constexpr unsigned int Method___c__DisplayClass38_0_TypeDefinitionIndex = 37493;

	class Method___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Int32 segmentHint; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SampleCircle_b__0(::System::Int32 item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_METHOD___C__DISPLAYCLASS38_0__SAMPLECIRCLE_B__0_OFFSET))(this, item);
		}
	};
}
