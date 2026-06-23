#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIVIDEOSHOPSHOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x139B9FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopShowContext_TypeDefinitionIndex = 58389;

	class UIVideoshopShowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* iconPath; // 0x28
		::System::String* descText; // 0x30
		::System::String* titleText; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSHOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
