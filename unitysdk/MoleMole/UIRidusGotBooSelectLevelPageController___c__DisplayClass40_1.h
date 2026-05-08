#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_877;

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS40_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12E6AED0)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS40_1__GETDEFAULTTABINDEXANDLEVELINDEX_B__0_OFFSET UNITYSDK_OFFSET(0x12E6AEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c__DisplayClass40_1_TypeDefinitionIndex = 68324;

	class UIRidusGotBooSelectLevelPageController___c__DisplayClass40_1 : public ::System::Object
	{
	public:
		::System::Int32 levelType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS40_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDefaultTabIndexAndLevelIndex_b__0(::Class_2_208CC9941471731A_877* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_877*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS40_1__GETDEFAULTTABINDEXANDLEVELINDEX_B__0_OFFSET))(this, x);
		}
	};
}
