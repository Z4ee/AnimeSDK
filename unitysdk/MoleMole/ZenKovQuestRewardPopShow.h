#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class UIZenkovReplenishDialogPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x11A2B120)
#define MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x11A2B0C0)
#define MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x11A2B000)
#define MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW__ONPROCESS_B__4_1_OFFSET UNITYSDK_OFFSET(0x11A2B510)
#define MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x11A2B540)

namespace MoleMole
{
	inline static constexpr unsigned int ZenKovQuestRewardPopShow_TypeDefinitionIndex = 89597;

	class ZenKovQuestRewardPopShow : public ::MoleMole::LogicMessageBase
	{
	public:
		::MoleMole::UIZenkovReplenishDialogPopWindowController* _dialog; // 0x20
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items; // 0x28

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW__CTOR_OFFSET))(this, items);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void _OnProcess_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW__ONPROCESS_B__4_1_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTREWARDPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
