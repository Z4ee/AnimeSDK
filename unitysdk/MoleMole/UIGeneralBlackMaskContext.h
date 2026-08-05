#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALBLACKMASKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E79F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralBlackMaskContext_TypeDefinitionIndex = 58824;

	class UIGeneralBlackMaskContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* action; // 0x28
		::System::Boolean playFadeIn; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBLACKMASKCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
