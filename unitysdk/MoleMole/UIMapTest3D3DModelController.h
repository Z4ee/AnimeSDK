#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

#define MOLEMOLE_UIMAPTEST3D3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEF700)

namespace MoleMole
{
	inline static constexpr unsigned int UIMapTest3D3DModelController_TypeDefinitionIndex = 70831;

	class UIMapTest3D3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAPTEST3D3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
