#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147C0A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPracticePageControllerContext_TypeDefinitionIndex = 66946;

	class UIMechBooPracticePageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TimelineKey; // 0x28
		::System::Int32 ScriptID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICEPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
