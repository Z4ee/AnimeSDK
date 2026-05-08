#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/GroupAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_SECTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D4E20)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int SectionAttribute_TypeDefinitionIndex = 25828;

	class SectionAttribute : public ::FluffyUnderware::DevTools::GroupAttribute
	{
	public:
		::System::Boolean Fixed; // 0x48

		::System::Void _ctor(::System::String* name, ::System::Boolean expanded, ::System::Boolean fix, ::System::Int32 sort)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_SECTIONATTRIBUTE__CTOR_OFFSET))(this, name, expanded, fix, sort);
		}
	};
}
