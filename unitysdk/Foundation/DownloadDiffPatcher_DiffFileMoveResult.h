#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ExceptionInfo; }
namespace System { class String; }

#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFFILEMOVERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x12719FA0)

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_DiffFileMoveResult_TypeDefinitionIndex = 52901;

	class DownloadDiffPatcher_DiffFileMoveResult : public ::System::Object
	{
	public:
		::System::String* realSavePath; // 0x10
		::Foundation::ExceptionInfo* exception; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFFILEMOVERESULT__CTOR_OFFSET))(this);
		}
	};
}
