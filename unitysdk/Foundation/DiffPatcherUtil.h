#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_DIFFPATCHERUTIL_CLEANALLDIFF_OFFSET UNITYSDK_OFFSET(0x1595CF60)
#define FOUNDATION_DIFFPATCHERUTIL_GETCLNUMBERFROMBASEURL_OFFSET UNITYSDK_OFFSET(0x1595CC90)
#define FOUNDATION_DIFFPATCHERUTIL_GETDOWNLOADPATCHVERSIONFILES_OFFSET UNITYSDK_OFFSET(0x1595CDB0)

namespace Foundation
{
	inline static constexpr unsigned int DiffPatcherUtil_TypeDefinitionIndex = 59424;

	class DiffPatcherUtil : public ::System::Object
	{
	public:
		// static const ::System::String* CL_Prefix; // 0x0

		static ::System::String* GetClNumberFromBaseUrl(::System::String* base_url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DIFFPATCHERUTIL_GETCLNUMBERFROMBASEURL_OFFSET))(base_url);
		}

		static ::MoleMole::DownloadFileInfo* GetDownloadPatchVersionFiles(::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>* version_Diffs, ::Foundation::ResourceFileType fileType, ::System::String* pre_clNum, ::System::String* clNum)
		{
			return ((::MoleMole::DownloadFileInfo*(*)(::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>*, ::Foundation::ResourceFileType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DIFFPATCHERUTIL_GETDOWNLOADPATCHVERSIONFILES_OFFSET))(version_Diffs, fileType, pre_clNum, clNum);
		}

		static ::System::Void CleanAllDiff()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_DIFFPATCHERUTIL_CLEANALLDIFF_OFFSET))();
		}
	};
}
