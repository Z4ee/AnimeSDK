#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5E46A14259E19455;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167579F0)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_0__UPDATEFEVERSCORE_B__0_OFFSET UNITYSDK_OFFSET(0x16757A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController___c__DisplayClass50_0_TypeDefinitionIndex = 91536;

	class UIRidusGotBooPageController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_5E46A14259E19455*>* toRemoveList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateFeverScore_b__0(::Class_1_5E46A14259E19455* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5E46A14259E19455*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_0__UPDATEFEVERSCORE_B__0_OFFSET))(this, x);
		}
	};
}
