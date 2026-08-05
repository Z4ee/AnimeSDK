#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_F0E4E2848B1D52CE;

#define MOLEMOLE_UIABINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x173C76D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInfoContext_TypeDefinitionIndex = 55938;

	class UIABInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_F0E4E2848B1D52CE* viewModel; // 0x28
		::System::Int32 tabIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
