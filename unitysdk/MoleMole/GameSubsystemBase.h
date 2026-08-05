#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SubsystemBase.h"

#define MOLEMOLE_GAMESUBSYSTEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x144D9CB0)

namespace MoleMole
{
	inline static constexpr unsigned int GameSubsystemBase_TypeDefinitionIndex = 85459;

	class GameSubsystemBase : public ::MoleMole::SubsystemBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMESUBSYSTEMBASE__CTOR_OFFSET))(this);
		}
	};
}
