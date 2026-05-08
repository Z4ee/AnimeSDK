#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define NODECANVAS_FRAMEWORK_GRAPHINFOATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B423030)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphInfoAttribute_TypeDefinitionIndex = 28091;

	class GraphInfoAttribute : public ::System::Attribute
	{
	public:
		::System::String* packageName; // 0x10
		::System::String* forumsURL; // 0x18
		::System::String* resourcesURL; // 0x20
		::System::String* docsURL; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHINFOATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
