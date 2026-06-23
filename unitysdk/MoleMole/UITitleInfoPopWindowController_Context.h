#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_75D3976A6C462D53.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11BD7880)

namespace MoleMole
{
	inline static constexpr unsigned int UITitleInfoPopWindowController_Context_TypeDefinitionIndex = 56759;

	class UITitleInfoPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_75D3976A6C462D53 titleInfo; // 0x28
		::System::Boolean isFromFriend; // 0x48
		::System::Nullable_1<::System::UInt32> friendAvatarID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLEINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
