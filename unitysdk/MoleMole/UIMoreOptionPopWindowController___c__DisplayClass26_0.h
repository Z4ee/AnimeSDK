#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
class Class_1_BE6BF7909AD9D940;
namespace MoleMole { class UIMoreOptionPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152950D0)
#define MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__OPENPHOTOWALLPAGE_B__2_OFFSET UNITYSDK_OFFSET(0x152950E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMoreOptionPopWindowController___c__DisplayClass26_0_TypeDefinitionIndex = 67547;

	class UIMoreOptionPopWindowController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::Class_1_57F7F2BF8C55D6B6* info; // 0x10
		::MoleMole::UIMoreOptionPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenPhotowallPage_b__2(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__OPENPHOTOWALLPAGE_B__2_OFFSET))(this, list);
		}
	};
}
