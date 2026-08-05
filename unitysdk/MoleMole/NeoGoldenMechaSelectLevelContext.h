#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_NEOGOLDENMECHASELECTLEVELCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x144FA470)

namespace MoleMole
{
	inline static constexpr unsigned int NeoGoldenMechaSelectLevelContext_TypeDefinitionIndex = 51061;

	class NeoGoldenMechaSelectLevelContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 generalLevelGroupID; // 0x28
		::System::Int32 focusGeneralLevelId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEOGOLDENMECHASELECTLEVELCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
