#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class DownloadDiffPatcher_DiffFileCollectResult; }
namespace Foundation { class DownloadDiffPatcher_DiffFileMoveResult; }
namespace Foundation { class DownloadDiffPatcher_DiffFilePatchResult; }
namespace Foundation { class ExceptionInfo; }

#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_GET_COLLECTRESULT_OFFSET UNITYSDK_OFFSET(0x142F8340)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_GET_EXCEPTIONINFO_OFFSET UNITYSDK_OFFSET(0x142F83A0)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_GET_MOVERESULT_OFFSET UNITYSDK_OFFSET(0x142F8360)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_GET_PATCHRESULT_OFFSET UNITYSDK_OFFSET(0x142F8380)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_SET_COLLECTRESULT_OFFSET UNITYSDK_OFFSET(0x142F8350)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_SET_MOVERESULT_OFFSET UNITYSDK_OFFSET(0x142F8370)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_SET_PATCHRESULT_OFFSET UNITYSDK_OFFSET(0x142F8390)
#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x142F8420)

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_DiffResult_TypeDefinitionIndex = 63147;

	class DownloadDiffPatcher_DiffResult : public ::System::Object
	{
	public:
		::Foundation::DownloadDiffPatcher_DiffFilePatchResult* _PatchResult_k__BackingField; // 0x10
		::Foundation::DownloadDiffPatcher_DiffFileMoveResult* _MoveResult_k__BackingField; // 0x18
		::Foundation::DownloadDiffPatcher_DiffFileCollectResult* _CollectResult_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT__CTOR_OFFSET))(this);
		}

		::Foundation::DownloadDiffPatcher_DiffFileCollectResult* get_CollectResult()
		{
			return ((::Foundation::DownloadDiffPatcher_DiffFileCollectResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_GET_COLLECTRESULT_OFFSET))(this);
		}

		::System::Void set_CollectResult(::Foundation::DownloadDiffPatcher_DiffFileCollectResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::DownloadDiffPatcher_DiffFileCollectResult*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_SET_COLLECTRESULT_OFFSET))(this, value);
		}

		::Foundation::DownloadDiffPatcher_DiffFileMoveResult* get_MoveResult()
		{
			return ((::Foundation::DownloadDiffPatcher_DiffFileMoveResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_GET_MOVERESULT_OFFSET))(this);
		}

		::System::Void set_MoveResult(::Foundation::DownloadDiffPatcher_DiffFileMoveResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::DownloadDiffPatcher_DiffFileMoveResult*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_SET_MOVERESULT_OFFSET))(this, value);
		}

		::Foundation::DownloadDiffPatcher_DiffFilePatchResult* get_PatchResult()
		{
			return ((::Foundation::DownloadDiffPatcher_DiffFilePatchResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_GET_PATCHRESULT_OFFSET))(this);
		}

		::System::Void set_PatchResult(::Foundation::DownloadDiffPatcher_DiffFilePatchResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::DownloadDiffPatcher_DiffFilePatchResult*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_SET_PATCHRESULT_OFFSET))(this, value);
		}

		::Foundation::ExceptionInfo* get_ExceptionInfo()
		{
			return ((::Foundation::ExceptionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFRESULT_GET_EXCEPTIONINFO_OFFSET))(this);
		}
	};
}
