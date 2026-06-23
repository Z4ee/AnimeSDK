#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FLOWCANVAS_MACROS_CUSTOMMACROENUMWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C61F730)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int CustomMacroEnumWrap_TypeDefinitionIndex = 30689;

	class CustomMacroEnumWrap : public ::System::Object
	{
	public:
		::System::String* enumStr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_CUSTOMMACROENUMWRAP__CTOR_OFFSET))(this);
		}
	};
}
