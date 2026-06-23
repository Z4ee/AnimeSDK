#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6689CFCCDBE24211.h"
#include "unitysdk/Enum_3_A54EADDA5F8725D8.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_15C4412F4F8ACB43;
namespace System { class String; }

#define MOLEMOLE_RIDUSGOTBOOSKILLEX_BUILD_OFFSET UNITYSDK_OFFSET(0x13F1F080)
#define MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INHISTORY_OFFSET UNITYSDK_OFFSET(0x13F1EFC0)
#define MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INMYSKILL_OFFSET UNITYSDK_OFFSET(0x13F1EFD0)
#define MOLEMOLE_RIDUSGOTBOOSKILLEX_GET_INNPCSKILL_OFFSET UNITYSDK_OFFSET(0x13F1EFE0)
#define MOLEMOLE_RIDUSGOTBOOSKILLEX__CTOR_OFFSET UNITYSDK_OFFSET(0x13F1EFF0)

namespace MoleMole
{
	inline static constexpr unsigned int RidusGotBooSkillEx_TypeDefinitionIndex = 57056;

	class RidusGotBooSkillEx : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_15C4412F4F8ACB43* SimpleSkillConfig; // 0x28
		::System::String* ColorPath; // 0x30
		::System::Boolean IsFeverKey; // 0x38
		::System::Boolean IsNext; // 0x39
		::System::Boolean PlayFadein; // 0x3A
		::System::Single AnimSampleTime; // 0x3C
		::Enum_3_6689CFCCDBE24211 QTEResult; // 0x40
		::Enum_3_A54EADDA5F8725D8 Type; // 0x44
		::System::Single QTEDoneTime; // 0x48

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
