#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_1824EF69C8E376A3;

#define MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x181CF200)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenPageControllerContext_TypeDefinitionIndex = 66452;

	class UIAvatarSpecialAwakenPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_1824EF69C8E376A3* AvatarData; // 0x28
		::System::Boolean CanOperateAwake; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
