#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_863445FF70B314F5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_RABBATTLE3DCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D81DA0)

namespace MoleMole
{
	inline static constexpr unsigned int RABBattle3DContext_TypeDefinitionIndex = 67281;

	class RABBattle3DContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_863445FF70B314F5 PageType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RABBATTLE3DCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
