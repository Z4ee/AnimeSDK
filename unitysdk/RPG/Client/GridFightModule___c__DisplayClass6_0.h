#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightArchiveData; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB3770)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS6_0__ISFAVOURARCHIVE_B__0_OFFSET UNITYSDK_OFFSET(0xBBB3780)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass6_0_TypeDefinitionIndex = 60661;

	class GridFightModule___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 archiveID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsFavourArchive_b__0(::RPG::Client::GridFightArchiveData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightArchiveData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS6_0__ISFAVOURARCHIVE_B__0_OFFSET))(this, a1);
		}
	};
}
