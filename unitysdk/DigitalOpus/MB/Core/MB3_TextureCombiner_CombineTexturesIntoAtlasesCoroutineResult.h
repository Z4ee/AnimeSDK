#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_COMBINETEXTURESINTOATLASESCOROUTINERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B66ACB0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult_TypeDefinitionIndex = 85121;

	class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult : public ::System::Object
	{
	public:
		::System::Boolean success; // 0x10
		::System::Boolean isFinished; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINER_COMBINETEXTURESINTOATLASESCOROUTINERESULT__CTOR_OFFSET))(this);
		}
	};
}
