#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162E43B0)
#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS16_0__INITSORT_B__1_OFFSET UNITYSDK_OFFSET(0x162E43C0)
#define MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS16_0__INITSORT_B__3_OFFSET UNITYSDK_OFFSET(0x162E43D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardCollectWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 45224;

	class UIHollowCardCollectWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* CollectedState; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* genreNameList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::String*>* _InitSort_b__1()
		{
			return ((::System::Collections::Generic::IList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS16_0__INITSORT_B__1_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::String*>* _InitSort_b__3()
		{
			return ((::System::Collections::Generic::IList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDCOLLECTWIDGETCONTROLLER___C__DISPLAYCLASS16_0__INITSORT_B__3_OFFSET))(this);
		}
	};
}
