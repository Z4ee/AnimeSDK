#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ParallelFileVerifier_FileInfoCheckResult; }
namespace System { class String; }

#define FOUNDATION_PARALLELFILEVERIFIER_FILERESULT_ISVERIFYPASS_OFFSET UNITYSDK_OFFSET(0xF23BA80)
#define FOUNDATION_PARALLELFILEVERIFIER_FILERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xF23BA70)

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileVerifier_FileResult_TypeDefinitionIndex = 51584;

	class ParallelFileVerifier_FileResult : public ::System::Object
	{
	public:
		::System::String* FilePath; // 0x10
		::Foundation::ParallelFileVerifier_FileInfoCheckResult* FileInfoCheckResult; // 0x18
		::System::Boolean IsExist; // 0x20
		::System::Boolean IsFileHashSame; // 0x21
		::System::Boolean HashChecked; // 0x22
		::System::Boolean IsFileSizeSame; // 0x23
		::System::Boolean NeedHashChecked; // 0x24
		::System::Int64 FileSize; // 0x28
		::System::UInt64 FileHash; // 0x30

		::System::Void _ctor(::Foundation::ParallelFileVerifier_FileInfoCheckResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ParallelFileVerifier_FileInfoCheckResult*))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_FILERESULT__CTOR_OFFSET))(this, result);
		}

		::System::Boolean IsVerifyPass(::System::String*& errMsg)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_FILERESULT_ISVERIFYPASS_OFFSET))(this, errMsg);
		}
	};
}
