#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_24C014472A8CBA5E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIMainStoryPageController___c__DisplayClass88_1; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1483F180)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_2__GOTOSUBITEM_B__0_OFFSET UNITYSDK_OFFSET(0x1483F190)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_2__GOTOSUBITEM_B__1_OFFSET UNITYSDK_OFFSET(0x1483F510)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass88_2_TypeDefinitionIndex = 56278;

	class UIMainStoryPageController___c__DisplayClass88_2 : public ::System::Object
	{
	public:
		::MoleMole::UIMainStoryPageController___c__DisplayClass88_1* CS___8__locals2; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* performIDs; // 0x18
		::System::Action_3<::System::Int32, ::System::Int32, ::Enum_3_24C014472A8CBA5E>* __9__1; // 0x20
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* archivePerforms; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_2__CTOR_OFFSET))(this);
		}

		::System::Void _GoToSubItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_2__GOTOSUBITEM_B__0_OFFSET))(this);
		}

		::System::Void _GoToSubItem_b__1(::System::Int32 index, ::System::Int32 _, ::Enum_3_24C014472A8CBA5E __)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_24C014472A8CBA5E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_2__GOTOSUBITEM_B__1_OFFSET))(this, index, _, __);
		}
	};
}
