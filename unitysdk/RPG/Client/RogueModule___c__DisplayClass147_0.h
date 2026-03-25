#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_726;
namespace RPG::Client { class RogueAreaData; }

#define RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS147_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA3450A0)
#define RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS147_0___ONCMDSYNCROGUEAREAUNLOCKSCNOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0xA349670)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueModule___c__DisplayClass147_0_TypeDefinitionIndex = 54966;

	class RogueModule___c__DisplayClass147_0 : public ::System::Object
	{
	public:
		::Class_1_FA4F4A67B1C04320_726* rsp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS147_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdSyncRogueAreaUnlockScNotify_b__0(::RPG::Client::RogueAreaData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE___C__DISPLAYCLASS147_0___ONCMDSYNCROGUEAREAUNLOCKSCNOTIFY_B__0_OFFSET))(this, x);
		}
	};
}
