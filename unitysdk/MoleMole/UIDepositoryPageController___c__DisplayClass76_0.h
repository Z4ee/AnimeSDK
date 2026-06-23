#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
template <typename T> class Class_0_16E4307DCC41950C_18;

#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__DISPLAYCLASS76_0__CREATEFILTERANDSORTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x17619D00)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17619CF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryPageController___c__DisplayClass76_0_TypeDefinitionIndex = 82556;

	class UIDepositoryPageController___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC41950C_18<::Class_1_1685EC66FBD28897*>* slotFilterGroup; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateFilterAndSortData_b__0(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__DISPLAYCLASS76_0__CREATEFILTERANDSORTDATA_B__0_OFFSET))(this, index);
		}
	};
}
