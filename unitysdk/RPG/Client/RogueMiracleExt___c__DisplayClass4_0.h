#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracleInGame; }

#define RPG_CLIENT_ROGUEMIRACLEEXT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB070B80)
#define RPG_CLIENT_ROGUEMIRACLEEXT___C__DISPLAYCLASS4_0__GETMIRACLESBYCATEGORY_B__0_OFFSET UNITYSDK_OFFSET(0xB070C80)
#define RPG_CLIENT_ROGUEMIRACLEEXT___C__DISPLAYCLASS4_0__GETMIRACLESBYCATEGORY_B__1_OFFSET UNITYSDK_OFFSET(0xB070CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleExt___c__DisplayClass4_0_TypeDefinitionIndex = 61980;

	class RogueMiracleExt___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Int32 unbrokenPriority; // 0x10
		::RPG::GameCore::RogueMiracleCategory category; // 0x14
		::System::Int32 brokenPriority; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMiraclesByCategory_b__0(::RPG::Client::IRogueMiracleInGame* miracle)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueMiracleInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT___C__DISPLAYCLASS4_0__GETMIRACLESBYCATEGORY_B__0_OFFSET))(this, miracle);
		}

		::System::Int32 _GetMiraclesByCategory_b__1(::RPG::Client::IRogueMiracleInGame* miracle)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueMiracleInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEEXT___C__DISPLAYCLASS4_0__GETMIRACLESBYCATEGORY_B__1_OFFSET))(this, miracle);
		}
	};
}
