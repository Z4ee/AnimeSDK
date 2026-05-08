#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E50E89F6E00CADC0.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_270AC9529BDD8E1A;
class Class_2_23EC6E39A5C61502;

#define MOLEMOLE_UICINEMAINVITEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12F7BFF0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaInvitePageContext_TypeDefinitionIndex = 80034;

	class UICinemaInvitePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_23EC6E39A5C61502* nowSelectLevelData; // 0x28
		::Class_1_270AC9529BDD8E1A* inviteHandler; // 0x30
		::Enum_3_E50E89F6E00CADC0 initState; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
