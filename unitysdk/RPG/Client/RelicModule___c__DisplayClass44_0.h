#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_RELICMODULE___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDE2D000)
#define RPG_CLIENT_RELICMODULE___C__DISPLAYCLASS44_0__OPENRELICSMARTSUITDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xDE2D410)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicModule___c__DisplayClass44_0_TypeDefinitionIndex = 66879;

	class RelicModule___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* avatar; // 0x10
		::System::UInt32 defaultPlanID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenRelicSmartSuitDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE___C__DISPLAYCLASS44_0__OPENRELICSMARTSUITDIALOG_B__0_OFFSET))(this);
		}
	};
}
