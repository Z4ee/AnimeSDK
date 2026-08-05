#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19299F10)
#define MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS4_0__INITSORT_B__1_OFFSET UNITYSDK_OFFSET(0x19299F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBackendRelicCollectWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 86478;

	class UIBackendRelicCollectWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* CollectedState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::String*>* _InitSort_b__1()
		{
			return ((::System::Collections::Generic::IList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS4_0__INITSORT_B__1_OFFSET))(this);
		}
	};
}
