#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_4865323EE33E9248;
class Class_1_D375C91CCE5D3999;
class Class_2_208CC9941471731A_753;

#define MOLEMOLE_UIACTIVITYGACHAPOPCONTEXT_INITPOPCONTEXT_OFFSET UNITYSDK_OFFSET(0x1893C990)
#define MOLEMOLE_UIACTIVITYGACHAPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1893CAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityGachaPopContext_TypeDefinitionIndex = 51159;

	class UIActivityGachaPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_D375C91CCE5D3999* relateActivity; // 0x28
		::Class_1_4865323EE33E9248* popData; // 0x30
		::Class_2_208CC9941471731A_753* template_; // 0x38
		::System::Int32 popID; // 0x40
		::System::Boolean isLoginMessage; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGACHAPOPCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void InitPopContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGACHAPOPCONTEXT_INITPOPCONTEXT_OFFSET))(this);
		}
	};
}
