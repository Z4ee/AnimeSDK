#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMAINCITYMENUCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x174D3B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMenuContext_TypeDefinitionIndex = 44409;

	class UIMainCityMenuContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 PostGirlID; // 0x28
		::System::Boolean SelectOnly; // 0x2C
		::System::Boolean ShowPostGirlSelect; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
