#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4666E61F66433B1E_4;
template <typename T> class Class_1_27F786FF2A30778C;

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1805DC60)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHBANGBOOOPTIONALNAME_B__0_OFFSET UNITYSDK_OFFSET(0x1805DC70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass12_0_TypeDefinitionIndex = 84838;

	class UIGachaPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::Class_3_4666E61F66433B1E_4* gacha; // 0x10
		::Class_1_27F786FF2A30778C<::System::UInt32>* optionalUpItemList; // 0x18
		::System::UInt32 optionalUpItemID; // 0x20
		::System::Int32 itemID; // 0x24

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
