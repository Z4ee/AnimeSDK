#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_FOLDERPATHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F940)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int FolderPathAttribute_TypeDefinitionIndex = 7166;

	class FolderPathAttribute : public ::System::Attribute
	{
	public:
		::System::String* ParentFolder; // 0x10
		::System::Boolean AbsolutePath; // 0x18
		::System::Boolean RequireValidPath; // 0x19
		::System::Boolean UseBackslashes; // 0x1A
		::System::Boolean RequireExistingPath; // 0x1B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FOLDERPATHATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
