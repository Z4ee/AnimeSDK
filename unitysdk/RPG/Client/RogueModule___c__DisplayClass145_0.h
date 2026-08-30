#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_933;
namespace RPG::Client { class RogueAreaData; }

#define RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS145_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9EF760)
#define RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS145_0___ONCMDSYNCROGUEAREAUNLOCKSCNOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0x1B9F2150)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueModule___c__DisplayClass145_0_TypeDefinitionIndex = 67450;

	class RogueModule___c__DisplayClass145_0 : public ::System::Object
	{
	public:
		::Class_1_D17272E82AE804C2_933* rsp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS145_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdSyncRogueAreaUnlockScNotify_b__0(::RPG::Client::RogueAreaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS145_0___ONCMDSYNCROGUEAREAUNLOCKSCNOTIFY_B__0_OFFSET))(this, a1);
		}
	};
}
