#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1654F460)

namespace MoleMole
{
	inline static constexpr unsigned int UITheGunMainPageController_Context_TypeDefinitionIndex = 58512;

	class UITheGunMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean openLevelDetail; // 0x28
		::System::Int32 questID; // 0x2C
		::System::Int32 focusTab; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHEGUNMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
