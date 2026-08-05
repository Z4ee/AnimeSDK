#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMoreOptionPopWindowController___c__DisplayClass28_0; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15169030)
#define MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_1__OPENCOLLECTIONCABINETPAGE_B__3_OFFSET UNITYSDK_OFFSET(0x15169040)

namespace MoleMole
{
	inline static constexpr unsigned int UIMoreOptionPopWindowController___c__DisplayClass28_1_TypeDefinitionIndex = 76305;

	class UIMoreOptionPopWindowController___c__DisplayClass28_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* allFriends; // 0x10
		::MoleMole::UIMoreOptionPopWindowController___c__DisplayClass28_0* CS___8__locals1; // 0x18
		::System::Int32 index; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
		}

		::System::Void _OpenCollectionCabinetPage_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_1__OPENCOLLECTIONCABINETPAGE_B__3_OFFSET))(this);
		}
	};
}
