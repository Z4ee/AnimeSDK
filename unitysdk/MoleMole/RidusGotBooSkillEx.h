#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6689CFCCDBE24211.h"
#include "unitysdk/Enum_3_A54EADDA5F8725D8.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_15C4412F4F8ACB43;
namespace System { class String; }

#define MOLEMOLE_RIDUSGOTBOOSKILLEX_BUILD_OFFSET UNITYSDK_OFFSET(0x136E9C70)
#define MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INHISTORY_OFFSET UNITYSDK_OFFSET(0x136E9BB0)
#define MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INMYSKILL_OFFSET UNITYSDK_OFFSET(0x136E9BC0)
#define MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INNPCSKILL_OFFSET UNITYSDK_OFFSET(0x136E9BD0)
#define MOLEMOLE_RIDUSGOTBOOSKILLEX__CTOR_OFFSET UNITYSDK_OFFSET(0x136E9BE0)

namespace MoleMole
{
	inline static constexpr unsigned int RidusGotBooSkillEx_TypeDefinitionIndex = 45978;

	class RidusGotBooSkillEx : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* ColorPath; // 0x28
		::Class_1_15C4412F4F8ACB43* SimpleSkillConfig; // 0x30
		::Enum_3_6689CFCCDBE24211 QTEResult; // 0x38
		::System::Single AnimSampleTime; // 0x3C
		::Enum_3_A54EADDA5F8725D8 Type; // 0x40
		::System::Single QTEDoneTime; // 0x44
		::System::Boolean IsNext; // 0x48
		::System::Boolean PlayFadein; // 0x49
		::System::Boolean IsFeverKey; // 0x4A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RIDUSGOTBOOSKILLEX__CTOR_OFFSET))(this);
		}

		::System::Boolean get_InHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INHISTORY_OFFSET))(this);
		}

		::System::Boolean get_InMySkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INMYSKILL_OFFSET))(this);
		}

		::System::Boolean get_InNpcSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INNPCSKILL_OFFSET))(this);
		}

		::System::Void Build()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RIDUSGOTBOOSKILLEX_BUILD_OFFSET))(this);
		}
	};
}
