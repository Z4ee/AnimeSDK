#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_A3F7BC7FD0AC1E07.h"

#define MOLEMOLE_UIURBANONLINEPLAYERWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x140D9B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanOnLinePlayerWidgetContext_TypeDefinitionIndex = 81951;

	class UIUrbanOnLinePlayerWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_A3F7BC7FD0AC1E07 ConvertData; // 0x28
		::System::Boolean isLocalPlayer; // 0x60
		::System::Int32 EntityId; // 0x64
		::System::Int32 BuddyIndex; // 0x68
		::System::Int32 TeamIdx; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANONLINEPLAYERWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
