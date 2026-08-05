#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C044C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovResultPopWindowControllerContext_TypeDefinitionIndex = 76995;

	class UIBangkovResultPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 reasonID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
