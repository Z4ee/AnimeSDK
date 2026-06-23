#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UILINEUPSELECTTESTROLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8CA00)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectTestRoleContext_TypeDefinitionIndex = 47208;

	class UILineupSelectTestRoleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 avatarCount; // 0x28
		::System::Boolean isIndex; // 0x2C
		::System::Boolean random; // 0x2D
		::System::Int32 avatarIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTTESTROLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
