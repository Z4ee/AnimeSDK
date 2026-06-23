#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIINLEVELSKILLBUTTONINTERACTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x177CD250)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonInteractContext_TypeDefinitionIndex = 73820;

	class UIInLevelSkillButtonInteractContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean IsKeepShowOnHUD; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONINTERACTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
