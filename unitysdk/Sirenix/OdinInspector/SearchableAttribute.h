#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SearchFilterOptions.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_SEARCHABLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F771610)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int SearchableAttribute_TypeDefinitionIndex = 7354;

	class SearchableAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean IgnoreCaseWhenExactMatch; // 0x10
		::System::Boolean Recursive; // 0x11
		::System::Boolean FuzzySearch; // 0x12
		::System::Boolean SmartFuzzySearch; // 0x13
		::Sirenix::OdinInspector::SearchFilterOptions FilterOptions; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_SEARCHABLEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
