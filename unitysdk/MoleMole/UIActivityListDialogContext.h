#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYLISTDIALOGCONTEXT_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x13884B50)
#define MOLEMOLE_UIACTIVITYLISTDIALOGCONTEXT_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x13884B60)
#define MOLEMOLE_UIACTIVITYLISTDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13884B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityListDialogContext_TypeDefinitionIndex = 53956;

	class UIActivityListDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 _ActivityID_k__BackingField; // 0x28

		::System::Void _ctor(::System::Int32 activityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLISTDIALOGCONTEXT__CTOR_OFFSET))(this, activityID);
		}

		::System::Int32 get_ActivityID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLISTDIALOGCONTEXT_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void set_ActivityID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLISTDIALOGCONTEXT_SET_ACTIVITYID_OFFSET))(this, value);
		}
	};
}
