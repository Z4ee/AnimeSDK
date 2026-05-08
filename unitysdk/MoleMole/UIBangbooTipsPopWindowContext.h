#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_37531022BA965541;

#define MOLEMOLE_UIBANGBOOTIPSPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16777630)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooTipsPopWindowContext_TypeDefinitionIndex = 63062;

	class UIBangbooTipsPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_37531022BA965541* skill; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTIPSPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
