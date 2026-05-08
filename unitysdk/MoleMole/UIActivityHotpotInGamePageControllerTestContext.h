#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLERTESTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9A5E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageControllerTestContext_TypeDefinitionIndex = 67637;

	class UIActivityHotpotInGamePageControllerTestContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* TestFoodIds; // 0x28
		::System::Int32 TestRoundID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLERTESTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
