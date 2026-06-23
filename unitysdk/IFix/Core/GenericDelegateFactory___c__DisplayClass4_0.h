#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define IFIX_CORE_GENERICDELEGATEFACTORY___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9F820)

namespace IFix::Core
{
	inline static constexpr unsigned int GenericDelegateFactory___c__DisplayClass4_0_TypeDefinitionIndex = 6930;

	class GenericDelegateFactory___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Type* delegateType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}
	};
}
