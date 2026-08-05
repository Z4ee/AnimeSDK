#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_TYPEFILTERATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1F772C70)
#define SIRENIX_ODININSPECTOR_TYPEFILTERATTRIBUTE_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1F772C80)
#define SIRENIX_ODININSPECTOR_TYPEFILTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F772C90)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int TypeFilterAttribute_TypeDefinitionIndex = 7380;

	class TypeFilterAttribute : public ::System::Attribute
	{
	public:
		::System::String* FilterGetter; // 0x10
		::System::String* DropdownTitle; // 0x18

		::System::Void _ctor(::System::String* filterGetter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TYPEFILTERATTRIBUTE__CTOR_OFFSET))(this, filterGetter);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TYPEFILTERATTRIBUTE_GET_MEMBERNAME_OFFSET))(this);
		}

		::System::Void set_MemberName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TYPEFILTERATTRIBUTE_SET_MEMBERNAME_OFFSET))(this, value);
		}
	};
}
