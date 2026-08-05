#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ExceptionInfo; }
namespace Foundation { class ParallelFileVerifier_FileResult; }
namespace System { class String; }

#define FOUNDATION_PARALLELFILEVERIFIER_FILEINFOCHECKRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1503A4C0)

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileVerifier_FileInfoCheckResult_TypeDefinitionIndex = 51583;

	class ParallelFileVerifier_FileInfoCheckResult : public ::System::Object
	{
	public:
		::System::String* errMsg; // 0x10
		::Foundation::ParallelFileVerifier_FileResult* PersistNew; // 0x18
		::Struct_2_DAA84C1CDD754F37 filePickInfo; // 0x20
		::Foundation::ParallelFileVerifier_FileResult* Persist; // 0x68
		::Foundation::ExceptionInfo* errorInfo; // 0x70
		::System::String* displayMsg; // 0x78
		::Foundation::ParallelFileVerifier_FileResult* Streaming; // 0x80
		::System::Boolean fileExistInBuildIn; // 0x88
		::System::Boolean verifyPass; // 0x89

		::System::Void _ctor(::Struct_2_DAA84C1CDD754F37 filePickInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEVERIFIER_FILEINFOCHECKRESULT__CTOR_OFFSET))(this, filePickInfo);
		}
	};
}
