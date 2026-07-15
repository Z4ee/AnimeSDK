#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LoadingFuncConfigRow; }

#define RPG_CLIENT_LOADINGTIPSMODULE___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC9C00)
#define RPG_CLIENT_LOADINGTIPSMODULE___C__DISPLAYCLASS0_0__SETUPWORLDTELETIPS_B__0_OFFSET UNITYSDK_OFFSET(0x19ACA270)

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingTipsModule___c__DisplayClass0_0_TypeDefinitionIndex = 62842;

	class LoadingTipsModule___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::UInt32 worldID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetupWorldTeleTips_b__0(::RPG::GameCore::LoadingFuncConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoadingFuncConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE___C__DISPLAYCLASS0_0__SETUPWORLDTELETIPS_B__0_OFFSET))(this, a1);
		}
	};
}
