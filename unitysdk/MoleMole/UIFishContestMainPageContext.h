#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BBDB40)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestMainPageContext_TypeDefinitionIndex = 66639;

	class UIFishContestMainPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Boolean>* OnClose; // 0x28
		::System::Threading::CancellationTokenSource* CancellationTokenSource; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
