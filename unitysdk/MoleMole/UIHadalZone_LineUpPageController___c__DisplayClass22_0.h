#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_399;

#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x178001C0)
#define MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__DISPLAYCLASS22_0___REFRESHLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x178001D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LineUpPageController___c__DisplayClass22_0_TypeDefinitionIndex = 56375;

	class UIHadalZone_LineUpPageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Int32 layerIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshLayer_b__0(::Class_1_5DA2E7556103D5A3_399* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_399*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPPAGECONTROLLER___C__DISPLAYCLASS22_0___REFRESHLAYER_B__0_OFFSET))(this, t);
		}
	};
}
