#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICINEMANEWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16784CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaNewContext_TypeDefinitionIndex = 68192;

	class UICinemaNewContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 cinemaNewTipID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMANEWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
