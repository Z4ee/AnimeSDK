#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AE02BC8285203464_17;
template <typename T> class Class_1_DD0DD411D84DAED3;

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157F16D0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHBANGBOOOPTIONALNAME_B__0_OFFSET UNITYSDK_OFFSET(0x157F16E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass12_0_TypeDefinitionIndex = 45787;

	class UIGachaPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::Class_1_DD0DD411D84DAED3<::System::UInt32>* optionalUpItemList; // 0x10
		::Class_3_AE02BC8285203464_17* gacha; // 0x18
		::System::Int32 itemID; // 0x20
		::System::UInt32 optionalUpItemID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBangbooOptionalName_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHBANGBOOOPTIONALNAME_B__0_OFFSET))(this);
		}
	};
}
