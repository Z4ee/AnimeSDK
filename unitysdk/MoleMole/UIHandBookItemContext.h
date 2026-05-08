#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_520;

#define MOLEMOLE_UIHANDBOOKITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16883720)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookItemContext_TypeDefinitionIndex = 48093;

	class UIHandBookItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_520* navigationTemplateMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
