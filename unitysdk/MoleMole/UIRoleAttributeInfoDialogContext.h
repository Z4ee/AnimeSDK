#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IUIProperty;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_UIROLEATTRIBUTEINFODIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1376B460)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleAttributeInfoDialogContext_TypeDefinitionIndex = 42472;

	class UIRoleAttributeInfoDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::IList_1<::System::Int32>* HitTypes; // 0x28
		::System::Collections::Generic::IList_1<::System::Int32>* DmgElems; // 0x30
		::IUIProperty* AvatarInfo; // 0x38
		::System::Boolean isFriendPreviewMode; // 0x40
		::System::Int32 ProfessionID; // 0x44
		::System::Int32 InitSelectedIndex; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEATTRIBUTEINFODIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
