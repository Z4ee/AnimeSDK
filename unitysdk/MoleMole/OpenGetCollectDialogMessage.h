#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_OPENGETCOLLECTDIALOGMESSAGE_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x13867D10)
#define MOLEMOLE_OPENGETCOLLECTDIALOGMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x13867D00)
#define MOLEMOLE_OPENGETCOLLECTDIALOGMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13867D60)
#define MOLEMOLE_OPENGETCOLLECTDIALOGMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x13867D20)

namespace MoleMole
{
	inline static constexpr unsigned int OpenGetCollectDialogMessage_TypeDefinitionIndex = 60339;

	class OpenGetCollectDialogMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _collectId; // 0x28

		::System::Void _ctor(::System::Int32 collectId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENGETCOLLECTDIALOGMESSAGE__CTOR_OFFSET))(this, collectId);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENGETCOLLECTDIALOGMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENGETCOLLECTDIALOGMESSAGE_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENGETCOLLECTDIALOGMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
