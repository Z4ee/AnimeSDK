#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ExceptionInfo; }

#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFFILEPATCHRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1288B150)

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_DiffFilePatchResult_TypeDefinitionIndex = 63148;

	class DownloadDiffPatcher_DiffFilePatchResult : public ::System::Object
	{
	public:
		::Foundation::ExceptionInfo* exception; // 0x10
		::System::Int32 code; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFFILEPATCHRESULT__CTOR_OFFSET))(this);
		}
	};
}
