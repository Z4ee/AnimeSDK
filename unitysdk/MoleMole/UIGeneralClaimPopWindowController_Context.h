#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_92BB5F3881865EA5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALCLAIMPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199B2120)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralClaimPopWindowController_Context_TypeDefinitionIndex = 62592;

	class UIGeneralClaimPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* ShowGotIndices; // 0x28
		::System::String* DescText; // 0x30
		::System::Action_1<::System::Int32>* OkBtnCb; // 0x38
		::System::String* TitleText; // 0x40
		::System::Boolean ShowOkBtn; // 0x48
		::Enum_3_92BB5F3881865EA5 ClaimType; // 0x4C
		::System::Int32 SourceItemID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCLAIMPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
