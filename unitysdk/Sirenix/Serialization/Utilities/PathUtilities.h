#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class DirectoryInfo; }

#define SIRENIX_SERIALIZATION_UTILITIES_PATHUTILITIES_HASSUBDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1FC572E0)

namespace Sirenix::Serialization::Utilities
{
	inline static constexpr unsigned int PathUtilities_TypeDefinitionIndex = 7625;

	class PathUtilities : public ::System::Object
	{
	public:
		static ::System::Boolean HasSubDirectory(::System::IO::DirectoryInfo* parentDir, ::System::IO::DirectoryInfo* subDir)
		{
			return ((::System::Boolean(*)(::System::IO::DirectoryInfo*, ::System::IO::DirectoryInfo*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_UTILITIES_PATHUTILITIES_HASSUBDIRECTORY_OFFSET))(parentDir, subDir);
		}
	};
}
