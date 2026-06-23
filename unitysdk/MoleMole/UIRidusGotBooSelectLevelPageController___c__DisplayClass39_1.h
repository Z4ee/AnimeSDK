#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_125;

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS39_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1579B5A0)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS39_1__GETDEFAULTLEVELID_B__1_OFFSET UNITYSDK_OFFSET(0x1579B5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c__DisplayClass39_1_TypeDefinitionIndex = 39594;

	class UIRidusGotBooSelectLevelPageController___c__DisplayClass39_1 : public ::System::Object
	{
	public:
		::System::Int32 levelType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS39_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDefaultLevelID_b__1(::Class_2_208CC9941471731A_125* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_125*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS39_1__GETDEFAULTLEVELID_B__1_OFFSET))(this, x);
		}
	};
}
