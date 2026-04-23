#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_464;
namespace RPG::Client { class HeliobusSkillData; }

#define RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA6138A0)
#define RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS93_0___ONCMDHELIOBUSUNLOCKSKILLSCNOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0xA613D30)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusModule___c__DisplayClass93_0_TypeDefinitionIndex = 60467;

	class HeliobusModule___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_464* ntf; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdHeliobusUnlockSkillScNotify_b__0(::RPG::Client::HeliobusSkillData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::HeliobusSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS93_0___ONCMDHELIOBUSUNLOCKSKILLSCNOTIFY_B__0_OFFSET))(this, x);
		}
	};
}
