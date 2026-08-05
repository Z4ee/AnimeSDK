#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/DocumentationSortingAttribute_Level.h"
#include "unitysdk/System/Attribute.h"

#define CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1F6D2EC0)
#define CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1F6D2ED0)
#define CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6D2EE0)

namespace Cinemachine
{
	inline static constexpr unsigned int DocumentationSortingAttribute_TypeDefinitionIndex = 34762;

	class DocumentationSortingAttribute : public ::System::Attribute
	{
	public:
		::Cinemachine::DocumentationSortingAttribute_Level _Category_k__BackingField; // 0x10

		::System::Void _ctor(::Cinemachine::DocumentationSortingAttribute_Level category)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::DocumentationSortingAttribute_Level))((::PBYTE)hIl2Cpp + CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE__CTOR_OFFSET))(this, category);
		}

		::Cinemachine::DocumentationSortingAttribute_Level get_Category()
		{
			return ((::Cinemachine::DocumentationSortingAttribute_Level(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::Cinemachine::DocumentationSortingAttribute_Level value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::DocumentationSortingAttribute_Level))((::PBYTE)hIl2Cpp + CINEMACHINE_DOCUMENTATIONSORTINGATTRIBUTE_SET_CATEGORY_OFFSET))(this, value);
		}
	};
}
