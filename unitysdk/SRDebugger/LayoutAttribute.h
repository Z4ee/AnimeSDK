#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SRDEBUGGER_LAYOUTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E701D0)

namespace SRDebugger
{
	inline static constexpr unsigned int LayoutAttribute_TypeDefinitionIndex = 35329;

	class LayoutAttribute : public ::System::Attribute
	{
	public:
		::System::Single PreferredWidth; // 0x10
		::System::Single PreferredHeight; // 0x14

		::System::Void _ctor(::System::Single width, ::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_LAYOUTATTRIBUTE__CTOR_OFFSET))(this, width, height);
		}
	};
}
