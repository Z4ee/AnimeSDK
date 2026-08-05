#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYDEMOTRIALBGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1387D8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDemoTrialBGContext_TypeDefinitionIndex = 70271;

	class UIActivityDemoTrialBGContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* previewCallback; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* previewRoleList; // 0x30
		::System::Boolean active; // 0x38
		::System::Int32 trialRoleID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDEMOTRIALBGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
