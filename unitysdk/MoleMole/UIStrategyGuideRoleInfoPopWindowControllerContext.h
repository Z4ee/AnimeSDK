#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1273FF40)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideRoleInfoPopWindowControllerContext_TypeDefinitionIndex = 68582;

	class UIStrategyGuideRoleInfoPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::UInt32>* OnStrategyBtnClick; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* AvatarListId; // 0x30
		::System::Boolean IsPreviewMode; // 0x38
		::System::UInt32 AvatarId; // 0x3C
		::System::UInt32 PageAvatarId; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
