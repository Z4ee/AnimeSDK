#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_DF2C726EEEEC912D;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINGAMEINVITECIRCLEROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1691A690)

namespace MoleMole
{
	inline static constexpr unsigned int UIInGameInviteCircleRowContext_TypeDefinitionIndex = 85086;

	class UIInGameInviteCircleRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_DF2C726EEEEC912D* CircleDataExt; // 0x28
		::System::Action_1<::Class_2_DF2C726EEEEC912D*>* OnClickCircle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEINVITECIRCLEROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
