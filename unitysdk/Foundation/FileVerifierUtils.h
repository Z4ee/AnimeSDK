#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReportErrorCode.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ExceptionInfo; }
namespace Foundation { class ParallelFileHash_Config; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_FILEVERIFIERUTILS_CREATEERRORINFO_OFFSET UNITYSDK_OFFSET(0x1407C410)
#define FOUNDATION_FILEVERIFIERUTILS_GETDEFAULTCONFIG_OFFSET UNITYSDK_OFFSET(0x132EF7C0)
#define FOUNDATION_FILEVERIFIERUTILS_GET_PARALLELFILEHASHCONFIG_OFFSET UNITYSDK_OFFSET(0x132EF780)
#define FOUNDATION_FILEVERIFIERUTILS_ISHUAWEIDEVICE_OFFSET UNITYSDK_OFFSET(0x132EF8E0)
#define FOUNDATION_FILEVERIFIERUTILS_WRITEBADFILELIST_1_OFFSET UNITYSDK_OFFSET(0x1407BF90)
#define FOUNDATION_FILEVERIFIERUTILS_WRITEBADFILELIST_OFFSET UNITYSDK_OFFSET(0x1407BCF0)

namespace Foundation
{
	inline static constexpr unsigned int FileVerifierUtils_TypeDefinitionIndex = 40306;

	class FileVerifierUtils : public ::System::Object
	{
	public:
		static ::Foundation::ParallelFileHash_Config** StaticGet__parallelFileHashConfig()
		{
			return (::Foundation::ParallelFileHash_Config**)Il2CppClass::FromTypeDefinitionIndex(FileVerifierUtils_TypeDefinitionIndex)->GetStaticField(0x3B9E0);
		}

		static ::Foundation::ParallelFileHash_Config* get_ParallelFileHashConfig()
		{
			return ((::Foundation::ParallelFileHash_Config*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEVERIFIERUTILS_GET_PARALLELFILEHASHCONFIG_OFFSET))();
		}

		static ::System::Boolean IsHuaweiDevice()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEVERIFIERUTILS_ISHUAWEIDEVICE_OFFSET))();
		}

		static ::Foundation::ParallelFileHash_Config* GetDefaultConfig()
		{
			return ((::Foundation::ParallelFileHash_Config*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FILEVERIFIERUTILS_GETDEFAULTCONFIG_OFFSET))();
		}

		static ::System::Void WriteBadFileList(::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>* badFiles)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Struct_2_DAA84C1CDD754F37>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEVERIFIERUTILS_WRITEBADFILELIST_OFFSET))(badFiles);
		}

		static ::System::Void WriteBadFileList_1(::System::Collections::Generic::IEnumerable_1<::System::String*>* badFiles)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEVERIFIERUTILS_WRITEBADFILELIST_1_OFFSET))(badFiles);
		}

		static ::Foundation::ExceptionInfo* CreateErrorInfo(::Foundation::ReportErrorCode code, ::System::String* errMsgToUpload, ::System::String* errMsgToDisplay, ::System::String* defaultDisplayErrMsg)
		{
			return ((::Foundation::ExceptionInfo*(*)(::Foundation::ReportErrorCode, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEVERIFIERUTILS_CREATEERRORINFO_OFFSET))(code, errMsgToUpload, errMsgToDisplay, defaultDisplayErrMsg);
		}
	};
}
