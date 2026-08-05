#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_TOGGLEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F772660)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ToggleAttribute_TypeDefinitionIndex = 7375;

	class ToggleAttribute : public ::System::Attribute
	{
	public:
		::System::String* ToggleMemberName; // 0x10
		::System::Boolean CollapseOthersOnExpand; // 0x18

		::System::Void _ctor(::System::String* toggleMemberName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_TOGGLEATTRIBUTE__CTOR_OFFSET))(this, toggleMemberName);
		}
	};
}
