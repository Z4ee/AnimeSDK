#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x188AD370)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftTastListRow01RoleContext_TypeDefinitionIndex = 63369;

	class UIUrbanMapLeftTastListRow01RoleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath Icon; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
