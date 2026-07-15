#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HeliobusSkillData; }

#define RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179435E0)
#define RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS57_0__GETSKILLDATA_B__0_OFFSET UNITYSDK_OFFSET(0x17947960)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusModule___c__DisplayClass57_0_TypeDefinitionIndex = 62745;

	class HeliobusModule___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::System::UInt32 skillID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSkillData_b__0(::RPG::Client::HeliobusSkillData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::HeliobusSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS57_0__GETSKILLDATA_B__0_OFFSET))(this, a1);
		}
	};
}
