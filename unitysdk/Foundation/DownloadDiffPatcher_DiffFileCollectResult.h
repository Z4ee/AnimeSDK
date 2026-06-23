#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_DAA84C1CDD754F37.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ExceptionInfo; }
namespace System { class String; }

#define FOUNDATION_DOWNLOADDIFFPATCHER_DIFFFILECOLLECTRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x12E6A6F0)

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_DiffFileCollectResult_TypeDefinitionIndex = 63143;

	class DownloadDiffPatcher_DiffFileCollectResult : public ::System::Object
	{
	public:
		::Struct_2_DAA84C1CDD754F37 verifyFilePickInfo; // 0x10
		::System::String* diffFilePath; // 0x58
		::System::String* oldFilePath; // 0x60
		::Foundation::ExceptionInfo* exception; // 0x68
		::System::String* outFilePath; // 0x70
		::System::Boolean isInPersist; // 0x78

		::System::Void _ctor(::Struct_2_DAA84C1CDD754F37 filePickInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_DAA84C1CDD754F37))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADDIFFPATCHER_DIFFFILECOLLECTRESULT__CTOR_OFFSET))(this, filePickInfo);
		}
	};
}
