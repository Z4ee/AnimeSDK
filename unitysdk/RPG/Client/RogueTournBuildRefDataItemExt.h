#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class RogueTournBuildRefHttpDataItem; }
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }

#define RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ASHTTP_OFFSET UNITYSDK_OFFSET(0xA36D670)
#define RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ASSHARECODE_OFFSET UNITYSDK_OFFSET(0xA36D710)
#define RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISCONTAINAVATAR_OFFSET UNITYSDK_OFFSET(0xA36D7B0)
#define RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISCONTAINESSENTIALFORMULA_OFFSET UNITYSDK_OFFSET(0xA36DFA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISHTTP_OFFSET UNITYSDK_OFFSET(0xA36D530)
#define RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISSHARECODE_OFFSET UNITYSDK_OFFSET(0xA36D5D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefDataItemExt_TypeDefinitionIndex = 55038;

	class RogueTournBuildRefDataItemExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsHttp(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISHTTP_OFFSET))(data);
		}

		static ::System::Boolean IsShareCode(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISSHARECODE_OFFSET))(data);
		}

		static ::RPG::Client::RogueTournBuildRefHttpDataItem* AsHttp(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::RPG::Client::RogueTournBuildRefHttpDataItem*(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ASHTTP_OFFSET))(data);
		}

		static ::RPG::Client::RogueTournBuildRefShareCodeDataItem* AsShareCode(::RPG::Client::IRogueTournBuildRefDataItem* data)
		{
			return ((::RPG::Client::RogueTournBuildRefShareCodeDataItem*(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ASSHARECODE_OFFSET))(data);
		}

		static ::System::Boolean IsContainAvatar(::RPG::Client::IRogueTournBuildRefDataItem* data, ::System::UInt32 realID)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISCONTAINAVATAR_OFFSET))(data, realID);
		}

		static ::System::Boolean IsContainEssentialFormula(::RPG::Client::IRogueTournBuildRefDataItem* data, ::System::UInt32 formulaID)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISCONTAINESSENTIALFORMULA_OFFSET))(data, formulaID);
		}
	};
}
