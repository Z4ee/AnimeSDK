#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA571C0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS10_0___TRYREFETCHBUILDREFSTATICDATAWITHBLOCK_B__0_OFFSET UNITYSDK_OFFSET(0x1AA571D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass10_0_TypeDefinitionIndex = 64790;

	class RogueTournModule___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::UInt32 blockID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryRefetchBuildRefStaticDataWithBlock_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS10_0___TRYREFETCHBUILDREFSTATICDATAWITHBLOCK_B__0_OFFSET))(this);
		}
	};
}
