#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMECHBOOLISTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9D590)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooListWidgetControllerContext_TypeDefinitionIndex = 72776;

	class UIMechBooListWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ComponentID; // 0x28
		::System::Int32 ScriptID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOLISTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
