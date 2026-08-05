#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class FileInfo; }

#define FOUNDATION_FILEHELPER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF7CD90)
#define FOUNDATION_FILEHELPER___C__DISPLAYCLASS37_0__DELETEFILESEXCEPT_B__0_OFFSET UNITYSDK_OFFSET(0x1EF7CDA0)

namespace Foundation
{
	inline static constexpr unsigned int FileHelper___c__DisplayClass37_0_TypeDefinitionIndex = 7860;

	class FileHelper___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::String* exceptFileSuffix; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _DeleteFilesExcept_b__0(::System::IO::FileInfo* fi)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileInfo*))((::PBYTE)hIl2Cpp + FOUNDATION_FILEHELPER___C__DISPLAYCLASS37_0__DELETEFILESEXCEPT_B__0_OFFSET))(this, fi);
		}
	};
}
