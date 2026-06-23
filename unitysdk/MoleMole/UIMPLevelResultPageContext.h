#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_D1F99ED02563ADFC;
namespace System { class Action; }
namespace System { class Object; }

#define MOLEMOLE_UIMPLEVELRESULTPAGECONTEXT_MOLEMOLE_ILEVELRESULTCONTEXT_GET_DUNGEONDONERET_OFFSET UNITYSDK_OFFSET(0x1783EE60)
#define MOLEMOLE_UIMPLEVELRESULTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1783EEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMPLevelResultPageContext_TypeDefinitionIndex = 80163;

	class UIMPLevelResultPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnContinueAction; // 0x28
		::Class_3_D1F99ED02563ADFC* dungeonDoneRet; // 0x30
		::System::Boolean isWin; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMPLEVELRESULTPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Object* MoleMole_ILevelResultContext_get_dungeonDoneRet()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMPLEVELRESULTPAGECONTEXT_MOLEMOLE_ILEVELRESULTCONTEXT_GET_DUNGEONDONERET_OFFSET))(this);
		}
	};
}
