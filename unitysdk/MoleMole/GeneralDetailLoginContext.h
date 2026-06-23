#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_GENERALDETAILLOGINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x182E3150)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralDetailLoginContext_TypeDefinitionIndex = 75328;

	class GeneralDetailLoginContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OkBtnCb; // 0x28
		::System::Action* CancelBtnCb; // 0x30
		::System::String* content; // 0x38
		::System::String* dialog_subTitle; // 0x40
		::System::String* content_title; // 0x48
		::System::String* dialog_title; // 0x50
		::System::Boolean DisableContentAutoAdjustText; // 0x58
		::System::Boolean CancelBtnCloseSelf; // 0x59
		::System::Boolean OkBtnCloseSelf; // 0x5A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALDETAILLOGINCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
