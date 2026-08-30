#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournModule; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__APPLYROGUETOURNBUILDREF_B__0_OFFSET UNITYSDK_OFFSET(0x1C34EEB0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__APPLYROGUETOURNBUILDREF_B__1_OFFSET UNITYSDK_OFFSET(0x1C34EF50)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__APPLYROGUETOURNBUILDREF_B__2_OFFSET UNITYSDK_OFFSET(0x1C34EA70)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__APPLYROGUETOURNBUILDREF_B__3_OFFSET UNITYSDK_OFFSET(0x1C34EE90)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C341870)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass61_0_TypeDefinitionIndex = 67801;

	class RogueTournModule___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournModule* __4__this; // 0x10
		::RPG::Client::Promises::Promise* teamOpPromise; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* teamAvatarRealIDs; // 0x20
		::System::Action* __9__3; // 0x28
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
