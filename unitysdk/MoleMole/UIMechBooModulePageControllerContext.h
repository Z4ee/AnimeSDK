#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIMECHBOOMODULEPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14B94EB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooModulePageControllerContext_TypeDefinitionIndex = 39549;

	class UIMechBooModulePageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* UIOpenAction; // 0x28
		::System::Int32 ScriptID; // 0x30
		::System::Boolean DoPerform; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOMODULEPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
