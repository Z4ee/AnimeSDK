#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

namespace System { class String; }

#define PARADOXNOTION_DESIGN_SHOWBUTTONATTRIBUTE_GET_ISDECORATOR_OFFSET UNITYSDK_OFFSET(0x1E236E30)
#define PARADOXNOTION_DESIGN_SHOWBUTTONATTRIBUTE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1E236E40)
#define PARADOXNOTION_DESIGN_SHOWBUTTONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E236E50)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int ShowButtonAttribute_TypeDefinitionIndex = 30191;

	class ShowButtonAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::System::String* methodName; // 0x10
		::System::String* buttonTitle; // 0x18

		::System::Void _ctor(::System::String* buttonTitle, ::System::String* methodnameCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_SHOWBUTTONATTRIBUTE__CTOR_OFFSET))(this, buttonTitle, methodnameCallback);
		}

		::System::Boolean get_isDecorator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_SHOWBUTTONATTRIBUTE_GET_ISDECORATOR_OFFSET))(this);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_SHOWBUTTONATTRIBUTE_GET_PRIORITY_OFFSET))(this);
		}
	};
}
