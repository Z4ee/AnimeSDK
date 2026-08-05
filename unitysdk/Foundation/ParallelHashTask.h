#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ParallelFileVerifier_FileResult; }
namespace System { class String; }

#define FOUNDATION_PARALLELHASHTASK_GET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x14D74450)
#define FOUNDATION_PARALLELHASHTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x14D74440)

namespace Foundation
{
	inline static constexpr unsigned int ParallelHashTask_TypeDefinitionIndex = 71071;

	class ParallelHashTask : public ::System::Object
	{
	public:
		::Foundation::ParallelFileVerifier_FileResult* _file; // 0x10

		::System::Void _ctor(::Foundation::ParallelFileVerifier_FileResult* file)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ParallelFileVerifier_FileResult*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELHASHTASK__CTOR_OFFSET))(this, file);
		}

		::System::String* get_FilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELHASHTASK_GET_FILEPATH_OFFSET))(this);
		}
	};
}
