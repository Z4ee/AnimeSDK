#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define PARADOXNOTION_DESIGN_NODENAMEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B466AA0)
#define PARADOXNOTION_DESIGN_NODENAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B466A90)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int NodeNameAttribute_TypeDefinitionIndex = 26864;

	class NodeNameAttribute : public ::System::Attribute
	{
	public:
		::System::String* name; // 0x10
		::System::String* oldName; // 0x18

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_NODENAMEATTRIBUTE__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::String* name, ::System::String* oldName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_NODENAMEATTRIBUTE__CTOR_1_OFFSET))(this, name, oldName);
		}
	};
}
