#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RICHTAPTOOLMANAGER_FILEMODEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE1F300)
#define RICHTAPTOOLMANAGER_FILEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1EEE0)

inline static constexpr unsigned int RichTapToolManager_FileModel_TypeDefinitionIndex = 38078;

class RichTapToolManager_FileModel : public ::System::Object
{
public:
	::System::String* FileName; // 0x10
	::System::String* FileContent; // 0x18
	::System::DateTime LastModified; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_FILEMODEL__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAPTOOLMANAGER_FILEMODEL_TOSTRING_OFFSET))(this);
	}
};
