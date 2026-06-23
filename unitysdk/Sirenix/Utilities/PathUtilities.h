#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class DirectoryInfo; }

#define SIRENIX_UTILITIES_PATHUTILITIES_CANMAKERELATIVE_OFFSET UNITYSDK_OFFSET(0x1DE52C60)
#define SIRENIX_UTILITIES_PATHUTILITIES_COMBINE_OFFSET UNITYSDK_OFFSET(0x1DE533B0)
#define SIRENIX_UTILITIES_PATHUTILITIES_FINDPARENTDIRECTORYWITHNAME_OFFSET UNITYSDK_OFFSET(0x1DE52BF0)
#define SIRENIX_UTILITIES_PATHUTILITIES_GETDIRECTORYNAME_OFFSET UNITYSDK_OFFSET(0x1DE52960)
#define SIRENIX_UTILITIES_PATHUTILITIES_HASSUBDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1DE529D0)
#define SIRENIX_UTILITIES_PATHUTILITIES_MAKERELATIVE_OFFSET UNITYSDK_OFFSET(0x1DE52E30)
#define SIRENIX_UTILITIES_PATHUTILITIES_TRYMAKERELATIVE_OFFSET UNITYSDK_OFFSET(0x1DE53370)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int PathUtilities_TypeDefinitionIndex = 6472;

	class PathUtilities : public ::System::Object
	{
	public:
		static ::System::String* GetDirectoryName(::System::String* x)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_PATHUTILITIES_GETDIRECTORYNAME_OFFSET))(x);
		}

		static ::System::Boolean HasSubDirectory(::System::IO::DirectoryInfo* parentDir, ::System::IO::DirectoryInfo* subDir)
		{
			return ((::System::Boolean(*)(::System::IO::DirectoryInfo*, ::System::IO::DirectoryInfo*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_PATHUTILITIES_HASSUBDIRECTORY_OFFSET))(parentDir, subDir);
		}

		static ::System::IO::DirectoryInfo* FindParentDirectoryWithName(::System::IO::DirectoryInfo* dir, ::System::String* folderName)
		{
			return ((::System::IO::DirectoryInfo*(*)(::System::IO::DirectoryInfo*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_PATHUTILITIES_FINDPARENTDIRECTORYWITHNAME_OFFSET))(dir, folderName);
		}

		static ::System::Boolean CanMakeRelative(::System::String* absoluteParentPath, ::System::String* absolutePath)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_PATHUTILITIES_CANMAKERELATIVE_OFFSET))(absoluteParentPath, absolutePath);
		}

		static ::System::String* MakeRelative(::System::String* absoluteParentPath, ::System::String* absolutePath)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_PATHUTILITIES_MAKERELATIVE_OFFSET))(absoluteParentPath, absolutePath);
		}

		static ::System::Boolean TryMakeRelative(::System::String* absoluteParentPath, ::System::String* absolutePath, ::System::String*& relativePath)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_PATHUTILITIES_TRYMAKERELATIVE_OFFSET))(absoluteParentPath, absolutePath, relativePath);
		}

		static ::System::String* Combine(::System::String* a, ::System::String* b)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_PATHUTILITIES_COMBINE_OFFSET))(a, b);
		}
	};
}
