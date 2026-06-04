#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class RogueTournBuildRefHttpDataItem; }
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }

#define RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ASHTTP_OFFSET UNITYSDK_OFFSET(0xC7F5B00)
#define RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ASSHARECODE_OFFSET UNITYSDK_OFFSET(0xC7F5BA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISCONTAINAVATAR_OFFSET UNITYSDK_OFFSET(0xC7F5C40)
#define RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISCONTAINESSENTIALFORMULA_OFFSET UNITYSDK_OFFSET(0xC7F6460)
#define RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISHTTP_OFFSET UNITYSDK_OFFSET(0xC7F59C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISSHARECODE_OFFSET UNITYSDK_OFFSET(0xC7F5A60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefDataItemExt_TypeDefinitionIndex = 63159;

	class RogueTournBuildRefDataItemExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsHttp(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISHTTP_OFFSET))(a1);
		}

		static ::System::Boolean IsShareCode(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISSHARECODE_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournBuildRefHttpDataItem* AsHttp(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefHttpDataItem*(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ASHTTP_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournBuildRefShareCodeDataItem* AsShareCode(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefShareCodeDataItem*(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ASSHARECODE_OFFSET))(a1);
		}

		static ::System::Boolean IsContainAvatar(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISCONTAINAVATAR_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsContainEssentialFormula(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFDATAITEMEXT_ISCONTAINESSENTIALFORMULA_OFFSET))(a1, a2);
		}
	};
}
