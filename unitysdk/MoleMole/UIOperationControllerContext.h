#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIOPERATIONCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16951230)

namespace MoleMole
{
	inline static constexpr unsigned int UIOperationControllerContext_TypeDefinitionIndex = 81574;

	class UIOperationControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* AvatarName; // 0x28
		::System::Int32 QuestID; // 0x30
		::System::Boolean ToShowAnimation; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
