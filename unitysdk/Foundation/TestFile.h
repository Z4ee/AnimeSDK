#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_TESTFILE_GET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x10AFA1E0)
#define FOUNDATION_TESTFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x10AFA1D0)

namespace Foundation
{
	inline static constexpr unsigned int TestFile_TypeDefinitionIndex = 61027;

	class TestFile : public ::System::Object
	{
	public:
		::System::String* _filePath; // 0x10

		::System::Void _ctor(::System::String* FilePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_TESTFILE__CTOR_OFFSET))(this, FilePath);
		}

		::System::String* get_FilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TESTFILE_GET_FILEPATH_OFFSET))(this);
		}
	};
}
