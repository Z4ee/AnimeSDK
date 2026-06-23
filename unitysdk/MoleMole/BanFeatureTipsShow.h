#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF7F1C413CECBBD_1.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

namespace System { class String; }

#define MOLEMOLE_BANFEATURETIPSSHOW_CLEARBANTYPE_OFFSET UNITYSDK_OFFSET(0x13468580)
#define MOLEMOLE_BANFEATURETIPSSHOW_GET_ISBLOCKCENTER_OFFSET UNITYSDK_OFFSET(0x13468520)
#define MOLEMOLE_BANFEATURETIPSSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x134684C0)
#define MOLEMOLE_BANFEATURETIPSSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x13468510)
#define MOLEMOLE_BANFEATURETIPSSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x134685D0)
#define MOLEMOLE_BANFEATURETIPSSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x13468530)
#define MOLEMOLE_BANFEATURETIPSSHOW___BASE_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x134687F0)

namespace MoleMole
{
	inline static constexpr unsigned int BanFeatureTipsShow_TypeDefinitionIndex = 61274;

	class BanFeatureTipsShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::String* message; // 0x28
		::Enum_3_7CF7F1C413CECBBD_1 _banType; // 0x30

		::System::Void _ctor(::System::String* message, ::Enum_3_7CF7F1C413CECBBD_1 banType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_7CF7F1C413CECBBD_1))((::PBYTE)hIl2Cpp + MOLEMOLE_BANFEATURETIPSSHOW__CTOR_OFFSET))(this, message, banType);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANFEATURETIPSSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANFEATURETIPSSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsBlockCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANFEATURETIPSSHOW_GET_ISBLOCKCENTER_OFFSET))(this);
		}

		::System::Void ClearBanType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANFEATURETIPSSHOW_CLEARBANTYPE_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANFEATURETIPSSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Boolean __base_get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANFEATURETIPSSHOW___BASE_GET_ISTRIGGER_OFFSET))(this);
		}
	};
}
