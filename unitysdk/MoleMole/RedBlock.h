#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessEntity.h"

#define MOLEMOLE_REDBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x19174840)

namespace MoleMole
{
	inline static constexpr unsigned int RedBlock_TypeDefinitionIndex = 82439;

	class RedBlock : public ::MoleMole::ChessEntity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REDBLOCK__CTOR_OFFSET))(this);
		}
	};
}
