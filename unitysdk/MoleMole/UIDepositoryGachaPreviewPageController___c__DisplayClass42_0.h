#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
template <typename T> class Class_0_16E4307DCC41950C_17;

#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__DISPLAYCLASS42_0__CREATEFILTERANDSORTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x19F934A0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19F93490)

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryGachaPreviewPageController___c__DisplayClass42_0_TypeDefinitionIndex = 86880;

	class UIDepositoryGachaPreviewPageController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC41950C_17<::Class_1_1685EC66FBD28897*>* slotFilterGroup; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateFilterAndSortData_b__0(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__DISPLAYCLASS42_0__CREATEFILTERANDSORTDATA_B__0_OFFSET))(this, index);
		}
	};
}
