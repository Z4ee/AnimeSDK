#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_3.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIShoppingMallV2PageController___c__DisplayClass38_0; }

#define MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS38_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12E24530)
#define MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS38_2__DOBUY_B__1_OFFSET UNITYSDK_OFFSET(0x12E24540)
#define MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS38_2__DOBUY_B__2_OFFSET UNITYSDK_OFFSET(0x12E245E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallV2PageController___c__DisplayClass38_2_TypeDefinitionIndex = 57210;

	class UIShoppingMallV2PageController___c__DisplayClass38_2 : public ::System::Object
	{
	public:
		::MoleMole::UIShoppingMallV2PageController___c__DisplayClass38_0* CS___8__locals2; // 0x10
		::System::UInt32 tabDataId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS38_2__CTOR_OFFSET))(this);
		}

		::System::Void _DoBuy_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS38_2__DOBUY_B__1_OFFSET))(this);
		}

		::System::Void _DoBuy_b__2(::Struct_2_5B421F8FFABD4CA3_3 e)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_5B421F8FFABD4CA3_3))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLV2PAGECONTROLLER___C__DISPLAYCLASS38_2__DOBUY_B__2_OFFSET))(this, e);
		}
	};
}
