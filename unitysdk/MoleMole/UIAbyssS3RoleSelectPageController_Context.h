#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIABYSSS3ROLESELECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12387720)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS3RoleSelectPageController_Context_TypeDefinitionIndex = 43012;

	class UIAbyssS3RoleSelectPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 CurrentMissionID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ROLESELECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
