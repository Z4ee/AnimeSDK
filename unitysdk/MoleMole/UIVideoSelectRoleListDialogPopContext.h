#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11586080)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoSelectRoleListDialogPopContext_TypeDefinitionIndex = 85027;

	class UIVideoSelectRoleListDialogPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnSelectConfirm; // 0x28
		::System::UInt32 DefaultCheckedAvatarID; // 0x30
		::System::Int32 SelectUpSuitID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSELECTROLELISTDIALOGPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
