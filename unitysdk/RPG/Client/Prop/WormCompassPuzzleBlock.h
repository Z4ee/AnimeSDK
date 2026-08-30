#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassPuzzleStaticItemBase.h"

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_METHOD_7_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17B33520)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17B33610)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0x17B32FE0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x17B33690)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleBlock_TypeDefinitionIndex = 78450;

	class WormCompassPuzzleBlock : public ::RPG::Client::Prop::WormCompassPuzzleStaticItemBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_REFRESHOBJECTSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_7_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBLOCK_METHOD_7_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
