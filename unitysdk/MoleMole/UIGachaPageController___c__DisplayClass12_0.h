#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_4666E61F66433B1E_2;
template <typename T> class Class_1_8CC15846339E7FB0;

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166D3080)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS12_0__REFRESHBANGBOOOPTIONALNAME_B__0_OFFSET UNITYSDK_OFFSET(0x166D3090)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass12_0_TypeDefinitionIndex = 64997;

	class UIGachaPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::Class_3_4666E61F66433B1E_2* gacha; // 0x10
		::Class_1_8CC15846339E7FB0<::System::UInt32>* optionalUpItemList; // 0x18
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
