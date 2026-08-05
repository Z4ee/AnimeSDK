#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_0E3D561C72111316;

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19372BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetContext_TypeDefinitionIndex = 75695;

	class UICinemaSinglePlayWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_0E3D561C72111316* singlePlayController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
