#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_OPENSYNCTIPDIALOGMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1870C0E0)
#define MOLEMOLE_OPENSYNCTIPDIALOGMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1870C0A0)

namespace MoleMole
{
	inline static constexpr unsigned int OpenSyncTipDialogMessage_TypeDefinitionIndex = 82477;

	class OpenSyncTipDialogMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _tipDialogId; // 0x28

		::System::Void _ctor(::System::Int32 tipDialogId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENSYNCTIPDIALOGMESSAGE__CTOR_OFFSET))(this, tipDialogId);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENSYNCTIPDIALOGMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
