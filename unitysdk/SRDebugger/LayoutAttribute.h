#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SRDEBUGGER_LAYOUTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACE6BB0)

namespace SRDebugger
{
	inline static constexpr unsigned int LayoutAttribute_TypeDefinitionIndex = 35629;

	class LayoutAttribute : public ::System::Attribute
	{
	public:
		::System::Single PreferredHeight; // 0x10
		::System::Single PreferredWidth; // 0x14

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_LAYOUTATTRIBUTE__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
