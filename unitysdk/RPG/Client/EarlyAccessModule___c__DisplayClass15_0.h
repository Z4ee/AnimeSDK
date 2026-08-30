#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EarlyAccessContent; }

#define RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCDBA400)
#define RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS15_0__ISMISSIONINCANUNLOCKCONTENT_B__0_OFFSET UNITYSDK_OFFSET(0xCDBCF40)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessModule___c__DisplayClass15_0_TypeDefinitionIndex = 63710;

	class EarlyAccessModule___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::UInt32 mainMissionId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsMissionInCanUnlockContent_b__0(::RPG::Client::EarlyAccessContent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EarlyAccessContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSMODULE___C__DISPLAYCLASS15_0__ISMISSIONINCANUNLOCKCONTENT_B__0_OFFSET))(this, a1);
		}
	};
}
