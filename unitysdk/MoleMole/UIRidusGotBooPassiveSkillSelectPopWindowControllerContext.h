#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_714;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16759F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPassiveSkillSelectPopWindowControllerContext_TypeDefinitionIndex = 80308;

	class UIRidusGotBooPassiveSkillSelectPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_714*>* InitCfgs; // 0x28
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_714*>* AllCfgs; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
