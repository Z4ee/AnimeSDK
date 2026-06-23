#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_SIMPLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A031320)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int SimpleItem_TypeDefinitionIndex = 52164;

	class SimpleItem : public ::System::Object
	{
	public:
		::System::String* item; // 0x10
		::System::Int32 count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_SIMPLEITEM__CTOR_OFFSET))(this);
		}
	};
}
