#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UITOWERDEFENSEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12E43EA0)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefensePageContext_TypeDefinitionIndex = 69811;

	class UITowerDefensePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean DirectOpenLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
