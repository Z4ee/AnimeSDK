#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA49C10)
#define FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL___C__DISPLAYCLASS12_0__ONAFTERDESERIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1EA4A220)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int ComponentPool___c__DisplayClass12_0_TypeDefinitionIndex = 28989;

	class ComponentPool___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::String* typeName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnAfterDeserialize_b__0(::System::Type* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL___C__DISPLAYCLASS12_0__ONAFTERDESERIALIZE_B__0_OFFSET))(this, t);
		}
	};
}
