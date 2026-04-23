#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournModule; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__APPLYROGUETOURNBUILDREF_B__0_OFFSET UNITYSDK_OFFSET(0xB0E83B0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__APPLYROGUETOURNBUILDREF_B__1_OFFSET UNITYSDK_OFFSET(0xB0E8450)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__APPLYROGUETOURNBUILDREF_B__2_OFFSET UNITYSDK_OFFSET(0xB0E7FE0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__APPLYROGUETOURNBUILDREF_B__3_OFFSET UNITYSDK_OFFSET(0xB0E8390)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0DCAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass61_0_TypeDefinitionIndex = 62496;

	class RogueTournModule___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* teamAvatarRealIDs; // 0x10
		::System::Action* __9__3; // 0x18
		::RPG::Client::RogueTournModule* __4__this; // 0x20
		::RPG::Client::Promises::Promise* teamOpPromise; // 0x28
		::System::UInt32 protoBlockID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyRogueTournBuildRef_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__APPLYROGUETOURNBUILDREF_B__2_OFFSET))(this);
		}

		::System::Void _ApplyRogueTournBuildRef_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__APPLYROGUETOURNBUILDREF_B__3_OFFSET))(this);
		}

		::System::Void _ApplyRogueTournBuildRef_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__APPLYROGUETOURNBUILDREF_B__0_OFFSET))(this);
		}

		::System::Void _ApplyRogueTournBuildRef_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__APPLYROGUETOURNBUILDREF_B__1_OFFSET))(this);
		}
	};
}
