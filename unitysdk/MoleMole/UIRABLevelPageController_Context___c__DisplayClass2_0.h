#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_746;

#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT___C__DISPLAYCLASS2_0__APPLYJUMPPARAS_B__0_OFFSET UNITYSDK_OFFSET(0x1789D170)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT___C__DISPLAYCLASS2_0__APPLYJUMPPARAS_B__1_OFFSET UNITYSDK_OFFSET(0x1789D1B0)
#define MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1789D160)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelPageController_Context___c__DisplayClass2_0_TypeDefinitionIndex = 78507;

	class UIRABLevelPageController_Context___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Int32 selectTowerFloor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ApplyJumpParas_b__0(::Class_2_208CC9941471731A_746* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_746*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT___C__DISPLAYCLASS2_0__APPLYJUMPPARAS_B__0_OFFSET))(this, x);
		}

		::System::Boolean _ApplyJumpParas_b__1(::Class_2_208CC9941471731A_746* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_746*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELPAGECONTROLLER_CONTEXT___C__DISPLAYCLASS2_0__APPLYJUMPPARAS_B__1_OFFSET))(this, x);
		}
	};
}
