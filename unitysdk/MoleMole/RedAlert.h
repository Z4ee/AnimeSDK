#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessEntity.h"

#define MOLEMOLE_REDALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x173A1780)

namespace MoleMole
{
	inline static constexpr unsigned int RedAlert_TypeDefinitionIndex = 83918;

	class RedAlert : public ::MoleMole::ChessEntity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REDALERT__CTOR_OFFSET))(this);
		}
	};
}
