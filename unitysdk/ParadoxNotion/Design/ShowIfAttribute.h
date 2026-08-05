#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

namespace System { class String; }

#define PARADOXNOTION_DESIGN_SHOWIFATTRIBUTE_GET_ISDECORATOR_OFFSET UNITYSDK_OFFSET(0x1E544BD0)
#define PARADOXNOTION_DESIGN_SHOWIFATTRIBUTE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1E544BE0)
#define PARADOXNOTION_DESIGN_SHOWIFATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E544BF0)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int ShowIfAttribute_TypeDefinitionIndex = 29971;

	class ShowIfAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::String* fieldName; // 0x10
		::System::Int32 checkValue; // 0x18

		::System::Void _ctor(::System::String* fieldName, ::System::Int32 checkValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_SHOWIFATTRIBUTE__CTOR_OFFSET))(this, fieldName, checkValue);
		}

		::System::Boolean get_isDecorator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_SHOWIFATTRIBUTE_GET_ISDECORATOR_OFFSET))(this);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_SHOWIFATTRIBUTE_GET_PRIORITY_OFFSET))(this);
		}
	};
}
