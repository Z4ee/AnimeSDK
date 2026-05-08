#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UILINEUPSELECTTESTROLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x150EB0A0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectTestRoleContext_TypeDefinitionIndex = 42531;

	class UILineupSelectTestRoleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 avatarCount; // 0x28
		::System::Int32 avatarIndex; // 0x2C
		::System::Boolean isIndex; // 0x30
		::System::Boolean random; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
