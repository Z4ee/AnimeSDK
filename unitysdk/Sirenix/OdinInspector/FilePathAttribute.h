#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_FILEPATHATTRIBUTE_GET_READONLY_OFFSET UNITYSDK_OFFSET(0x1E328C20)
#define SIRENIX_ODININSPECTOR_FILEPATHATTRIBUTE_SET_READONLY_OFFSET UNITYSDK_OFFSET(0x1E328C30)
#define SIRENIX_ODININSPECTOR_FILEPATHATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E328C40)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int FilePathAttribute_TypeDefinitionIndex = 7296;

	class FilePathAttribute : public ::System::Attribute
	{
	public:
		::System::String* ParentFolder; // 0x10
		::System::String* Extensions; // 0x18
		::System::Boolean RequireExistingPath; // 0x20
		::System::Boolean _ReadOnly_k__BackingField; // 0x21
		::System::Boolean RequireValidPath; // 0x22
		::System::Boolean AbsolutePath; // 0x23
		::System::Boolean UseBackslashes; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FILEPATHATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FILEPATHATTRIBUTE_GET_READONLY_OFFSET))(this);
		}

		::System::Void set_ReadOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_FILEPATHATTRIBUTE_SET_READONLY_OFFSET))(this, value);
		}
	};
}
