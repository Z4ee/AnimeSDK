#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class UIBangkovReplenishDialogPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BANGKOVREWARDPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x14DFBE90)
#define MOLEMOLE_BANGKOVREWARDPOPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x14DFBE30)
#define MOLEMOLE_BANGKOVREWARDPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x14DFBD70)
#define MOLEMOLE_BANGKOVREWARDPOPSHOW__ONPROCESS_B__4_1_OFFSET UNITYSDK_OFFSET(0x14DFC270)
#define MOLEMOLE_BANGKOVREWARDPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x14DFC2A0)

namespace MoleMole
{
	inline static constexpr unsigned int BangKovRewardPopShow_TypeDefinitionIndex = 80263;

	class BangKovRewardPopShow : public ::MoleMole::LogicMessageBase
	{
	public:
		::MoleMole::UIBangkovReplenishDialogPopWindowController* replenishDialog; // 0x20
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items; // 0x28

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREWARDPOPSHOW__CTOR_OFFSET))(this, items);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREWARDPOPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREWARDPOPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void _OnProcess_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREWARDPOPSHOW__ONPROCESS_B__4_1_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVREWARDPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
