#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_DIRDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x137BFF40)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirtualJoystickBaseController_DirData_TypeDefinitionIndex = 69174;

	class UIVirtualJoystickBaseController_DirData : public ::System::Object
	{
	public:
		::System::Boolean IsDirDown; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRTUALJOYSTICKBASECONTROLLER_DIRDATA__CTOR_OFFSET))(this);
		}
	};
}
