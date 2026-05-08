#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UNLOCKVIEWPOINTREWARDPOPSHOW_CLOSEACTION_OFFSET UNITYSDK_OFFSET(0x10D89C60)
#define MOLEMOLE_UNLOCKVIEWPOINTREWARDPOPSHOW_ONNEWBIEGONEXTHANDLE_OFFSET UNITYSDK_OFFSET(0x10D8A190)
#define MOLEMOLE_UNLOCKVIEWPOINTREWARDPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x10D89A50)
#define MOLEMOLE_UNLOCKVIEWPOINTREWARDPOPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x10D899F0)
#define MOLEMOLE_UNLOCKVIEWPOINTREWARDPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x10D89930)
#define MOLEMOLE_UNLOCKVIEWPOINTREWARDPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x10D8A720)

namespace MoleMole
{
	inline static constexpr unsigned int UnlockViewPointRewardPopShow_TypeDefinitionIndex = 41981;

	class UnlockViewPointRewardPopShow : public ::MoleMole::LogicMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKVIEWPOINTREWARDPOPSHOW__CTOR_OFFSET))(this, items);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKVIEWPOINTREWARDPOPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKVIEWPOINTREWARDPOPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void CloseAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKVIEWPOINTREWARDPOPSHOW_CLOSEACTION_OFFSET))(this);
		}

		::System::Void OnNewBieGoNextHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKVIEWPOINTREWARDPOPSHOW_ONNEWBIEGONEXTHANDLE_OFFSET))(this, obj);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKVIEWPOINTREWARDPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
