#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_F8EB4D9464ADCCA1;
namespace System { class Action; }

#define MOLEMOLE_UIHADALZONE_COMMON_HADALROOM_CARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BDE770)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_HadalRoom_CardContext_TypeDefinitionIndex = 43794;

	class UIHadalZone_Common_HadalRoom_CardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_F8EB4D9464ADCCA1* monsterConfig; // 0x28
		::System::Action* clickCallback; // 0x30
		::System::Int32 cardSelectIndex; // 0x38
		::System::Int32 monsterLevel; // 0x3C
		::System::Boolean unknownMonsterFlag; // 0x40
		::System::Boolean hideMonsterLevel; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_HADALROOM_CARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
