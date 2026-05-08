#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_9BB78F244CBCC9B8;
namespace System { class Action; }
namespace System { class Object; }

#define MOLEMOLE_UIMPLEVELRESULTPAGECONTEXT_MOLEMOLE_ILEVELRESULTCONTEXT_GET_DUNGEONDONERET_OFFSET UNITYSDK_OFFSET(0x15008530)
#define MOLEMOLE_UIMPLEVELRESULTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15008570)

namespace MoleMole
{
	inline static constexpr unsigned int UIMPLevelResultPageContext_TypeDefinitionIndex = 40010;

	class UIMPLevelResultPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_9BB78F244CBCC9B8* dungeonDoneRet; // 0x28
		::System::Action* OnContinueAction; // 0x30
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
