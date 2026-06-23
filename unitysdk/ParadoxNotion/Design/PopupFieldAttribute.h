#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Design/DrawerAttribute.h"

namespace System { class Object; }

#define PARADOXNOTION_DESIGN_POPUPFIELDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4DC40)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int PopupFieldAttribute_TypeDefinitionIndex = 30777;

	class PopupFieldAttribute : public ::ParadoxNotion::Design::DrawerAttribute
	{
	public:
		::Il2CppArray<::System::Object*>* options; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Object*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_POPUPFIELDATTRIBUTE__CTOR_OFFSET))(this, options);
		}
	};
}
