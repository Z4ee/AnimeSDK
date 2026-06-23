#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F3BA20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPoolBtnWidgetContext_TypeDefinitionIndex = 51188;

	class UIRoleSelectPoolBtnWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Single ProgressAnimDelay; // 0x28
		::System::Int32 GachaID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPOOLBTNWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
