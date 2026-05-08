#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_3_C3F0E3B5AB5977AE_34;

#define MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x130375D0)
#define MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__DISPLAYCLASS32_0__ONITEMMULTICLICK_B__0_OFFSET UNITYSDK_OFFSET(0x1303AF00)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleHiveBoxPageController___c__DisplayClass32_0_TypeDefinitionIndex = 82713;

	class UISuibianTempleHiveBoxPageController___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::Class_3_C3F0E3B5AB5977AE_34* buddyGood; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnItemMultiClick_b__0(::Class_1_0D6706375CDAAE8C* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__DISPLAYCLASS32_0__ONITEMMULTICLICK_B__0_OFFSET))(this, item);
		}
	};
}
