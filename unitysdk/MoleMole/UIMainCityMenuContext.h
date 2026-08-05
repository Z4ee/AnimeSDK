#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMAINCITYMENUCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1744BBD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMenuContext_TypeDefinitionIndex = 73829;

	class UIMainCityMenuContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean SelectOnly; // 0x28
		::System::Boolean ShowPostGirlSelect; // 0x29
		::System::Int32 PostGirlID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
