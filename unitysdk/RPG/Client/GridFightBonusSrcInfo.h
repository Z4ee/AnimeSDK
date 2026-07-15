#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_75A1C8C41006A504.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightAugmentConfig; }
namespace RPG::Client { class GridFightPortalData; }

#define RPG_CLIENT_GRIDFIGHTBONUSSRCINFO_GET_HASSRCNAME_OFFSET UNITYSDK_OFFSET(0x1A62BCD0)
#define RPG_CLIENT_GRIDFIGHTBONUSSRCINFO_GET_SRCNAME_OFFSET UNITYSDK_OFFSET(0x1A62BD30)
#define RPG_CLIENT_GRIDFIGHTBONUSSRCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62BE40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusSrcInfo_TypeDefinitionIndex = 61464;

	class GridFightBonusSrcInfo : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPortalData* Portal; // 0x10
		::RPG::Client::GridFightAugmentConfig* Augment; // 0x18
		::Enum_3_75A1C8C41006A504 SrcType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSRCINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasSrcName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSRCINFO_GET_HASSRCNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_SrcName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSRCINFO_GET_SRCNAME_OFFSET))(this);
		}
	};
}
