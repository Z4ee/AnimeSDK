#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWWEAPONCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18858400)
#define MOLEMOLE_UIHOLLOWWEAPONCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS4_0__INITSORT_B__1_OFFSET UNITYSDK_OFFSET(0x18858410)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowWeaponCollectWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 83012;

	class UIHollowWeaponCollectWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* CollectedState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWEAPONCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::String*>* _InitSort_b__1()
		{
			return ((::System::Collections::Generic::IList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWWEAPONCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS4_0__INITSORT_B__1_OFFSET))(this);
		}
	};
}
