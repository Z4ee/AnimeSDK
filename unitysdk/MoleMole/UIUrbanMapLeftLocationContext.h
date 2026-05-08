#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIUrbanMapLeftLocationRowContext; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_UIURBANMAPLEFTLOCATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x126A7760)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftLocationContext_TypeDefinitionIndex = 45692;

	class UIUrbanMapLeftLocationContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapLeftLocationRowContext*>* RowList; // 0x28
		::System::Action_3<::System::Boolean, ::System::Boolean, ::System::Action_2<::System::Boolean, ::System::Boolean>*>* OnSetExpand; // 0x30
		::System::String* Title; // 0x38
		::System::Action_1<::MoleMole::UIUrbanMapLeftLocationRowContext*>* OnConsoleSelect; // 0x40
		::System::Single OtherHeight; // 0x48
		::System::Int32 InitIndex; // 0x4C
		::System::Boolean DefaultExpand; // 0x50
		::System::Boolean Mode2d; // 0x51
		::System::Boolean EnableExpand; // 0x52

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
