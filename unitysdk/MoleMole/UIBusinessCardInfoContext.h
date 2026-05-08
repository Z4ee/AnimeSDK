#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBUSINESSCARDINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16783FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBusinessCardInfoContext_TypeDefinitionIndex = 45771;

	class UIBusinessCardInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 cardID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUSINESSCARDINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
