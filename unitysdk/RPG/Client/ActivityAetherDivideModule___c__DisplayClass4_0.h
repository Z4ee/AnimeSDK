#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityAetherDivideData; }
namespace RPG::GameCore { class AetherDivideActivityQuestRow; }

#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x194A9940)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE___C__DISPLAYCLASS4_0___INITDATA_B__0_OFFSET UNITYSDK_OFFSET(0x194AA3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityAetherDivideModule___c__DisplayClass4_0_TypeDefinitionIndex = 58651;

	class ActivityAetherDivideModule___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::AetherDivideActivityQuestRow* row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __InitData_b__0(::RPG::Client::ActivityAetherDivideData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityAetherDivideData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE___C__DISPLAYCLASS4_0___INITDATA_B__0_OFFSET))(this, a1);
		}
	};
}
