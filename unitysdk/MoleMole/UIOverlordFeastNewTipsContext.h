#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIOVERLORDFEASTNEWTIPSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x178C7980)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastNewTipsContext_TypeDefinitionIndex = 64500;

	class UIOverlordFeastNewTipsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* UnlockedHiddenGuests; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* Devs; // 0x30
		::System::Action* OnCloseWithoutJump; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* TodoQuests; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTNEWTIPSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
