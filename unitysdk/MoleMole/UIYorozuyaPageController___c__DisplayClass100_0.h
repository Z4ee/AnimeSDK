#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0A55B5A82A61DAFA_2;
class Class_2_208CC9941471731A_979;

#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD07EBF0)
#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS100_0__NEEDMONSTERINFOBTN_B__0_OFFSET UNITYSDK_OFFSET(0xD07EC00)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaPageController___c__DisplayClass100_0_TypeDefinitionIndex = 79308;

	class UIYorozuyaPageController___c__DisplayClass100_0 : public ::System::Object
	{
	public:
		::Class_2_0A55B5A82A61DAFA_2* cfg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS100_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _NeedMonsterInfoBtn_b__0(::Class_2_208CC9941471731A_979* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_979*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS100_0__NEEDMONSTERINFOBTN_B__0_OFFSET))(this, x);
		}
	};
}
