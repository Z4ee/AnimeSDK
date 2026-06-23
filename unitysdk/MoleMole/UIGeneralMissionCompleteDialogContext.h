#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALMISSIONCOMPLETEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A74120)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralMissionCompleteDialogContext_TypeDefinitionIndex = 54570;

	class UIGeneralMissionCompleteDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* okBtnCb; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* idList; // 0x30
		::System::String* desc; // 0x38
		::System::String* replaceClickBtnText; // 0x40
		::System::String* title; // 0x48
		::System::Action* OnClose; // 0x50
		::System::Action* cancelBtnCb; // 0x58
		::System::Boolean forceDisableJump; // 0x60
		::System::Boolean DontPauseGame; // 0x61

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALMISSIONCOMPLETEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
