#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_1824EF69C8E376A3;

#define MOLEMOLE_UISTRATEGYGUIDESKILLUPDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12E25990)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideSkillUpDialogContext_TypeDefinitionIndex = 43052;

	class UIStrategyGuideSkillUpDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_1824EF69C8E376A3* AvatarData; // 0x28
		::System::UInt32 AvatarID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLUPDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
