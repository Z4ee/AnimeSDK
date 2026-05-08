#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/GroupAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_TABATTRIBUTE_SPLIT_OFFSET UNITYSDK_OFFSET(0x1B2D7180)
#define FLUFFYUNDERWARE_DEVTOOLS_TABATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D70F0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int TabAttribute_TypeDefinitionIndex = 25827;

	class TabAttribute : public ::FluffyUnderware::DevTools::GroupAttribute
	{
	public:
		::System::String* TabBarName; // 0x48
		::System::String* TabName; // 0x50

		::System::Void _ctor(::System::String* pathAndName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TABATTRIBUTE__CTOR_OFFSET))(this, pathAndName);
		}

		static ::System::Boolean split(::System::String* pathAndName, ::System::String*& path, ::System::String*& tabBar, ::System::String*& tabname)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_TABATTRIBUTE_SPLIT_OFFSET))(pathAndName, path, tabBar, tabname);
		}
	};
}
