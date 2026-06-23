#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIVIDEOSHOPUPSETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14906BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopUpSetContext_TypeDefinitionIndex = 81430;

	class UIVideoshopUpSetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 CurUpSuitID; // 0x28
		::System::UInt32 GachaID; // 0x2C
		::System::UInt32 ForgeType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPUPSETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
