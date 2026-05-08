#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISTRATEGYGUIDEROLECARDROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x148053F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideRoleCardRowWidgetControllerContext_TypeDefinitionIndex = 45696;

	class UIStrategyGuideRoleCardRowWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* AvatarListId; // 0x28
		::System::Action_1<::System::UInt32>* OnStrategyBtnClick; // 0x30
		::System::Boolean IsPreviewMode; // 0x38
		::System::UInt32 PageAvatarId; // 0x3C
		::System::Nullable_1<::System::UInt32> AvatarId; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEROLECARDROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
