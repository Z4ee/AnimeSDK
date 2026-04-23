#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightAugmentConfig; }
namespace RPG::Client { class GridFightPortalData; }

#define RPG_CLIENT_GRIDFIGHTBONUSSRCINFO_GET_HASSRCNAME_OFFSET UNITYSDK_OFFSET(0xA461940)
#define RPG_CLIENT_GRIDFIGHTBONUSSRCINFO_GET_SRCNAME_OFFSET UNITYSDK_OFFSET(0xA4619A0)
#define RPG_CLIENT_GRIDFIGHTBONUSSRCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA461A60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusSrcInfo_TypeDefinitionIndex = 59243;

	class GridFightBonusSrcInfo : public ::System::Object
	{
	public:
		::RPG::Client::GridFightAugmentConfig* Augment; // 0x10
		::RPG::Client::GridFightPortalData* Portal; // 0x18
		::Enum_3_75A5C8C4100A8E33_1 SrcType; // 0x20

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
