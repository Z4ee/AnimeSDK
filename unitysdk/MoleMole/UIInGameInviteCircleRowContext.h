#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_E23E4CB2769CC93F;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINGAMEINVITECIRCLEROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1899CD30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInGameInviteCircleRowContext_TypeDefinitionIndex = 50228;

	class UIInGameInviteCircleRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::Class_2_E23E4CB2769CC93F*>* OnClickCircle; // 0x28
		::Class_2_E23E4CB2769CC93F* CircleDataExt; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEINVITECIRCLEROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
