#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINSTORYREWARDDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179EBB70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryRewardDialogContext_TypeDefinitionIndex = 48608;

	class UIMainStoryRewardDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* VhsTemplateIDs; // 0x28
		::System::Boolean OnlyShowSelected; // 0x30
		::System::Int32 ArchiveType; // 0x34
		::System::Int32 SelectedVhsTemplateID; // 0x38
		::System::Int32 Diff; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYREWARDDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
