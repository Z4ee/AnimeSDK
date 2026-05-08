#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITRIDICEORACLEMISSIONDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF6293F0)

namespace MoleMole
{
	inline static constexpr unsigned int UITriDiceOracleMissionDialogContext_TypeDefinitionIndex = 62922;

	class UITriDiceOracleMissionDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 questID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIDICEORACLEMISSIONDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
