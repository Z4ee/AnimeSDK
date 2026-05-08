#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14C3E720)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapListRowLevelInfoWidgetContext_TypeDefinitionIndex = 81447;

	class UIUrbanMapListRowLevelInfoWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 PlayerLevel; // 0x28
		::System::Int32 WorldLevel; // 0x2C
		::System::Int32 CurrentExp; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLISTROWLEVELINFOWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
