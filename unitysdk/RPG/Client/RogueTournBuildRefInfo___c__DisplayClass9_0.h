#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournBuildRefInfo; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A9530)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__DISPLAYCLASS9_0__PREPAREFAVORITEBUILDREF_B__0_OFFSET UNITYSDK_OFFSET(0xB0AB190)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__DISPLAYCLASS9_0__PREPAREFAVORITEBUILDREF_B__1_OFFSET UNITYSDK_OFFSET(0xB0AB250)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefInfo___c__DisplayClass9_0_TypeDefinitionIndex = 62232;

	class RogueTournBuildRefInfo___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournBuildRefInfo* __4__this; // 0x10
		::RPG::Client::Promises::Promise_1<::System::Boolean>* promise; // 0x18
		::System::Action_1<::System::Boolean>* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _PrepareFavoriteBuildRef_b__0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__DISPLAYCLASS9_0__PREPAREFAVORITEBUILDREF_B__0_OFFSET))(this, isOk);
		}

		::System::Void _PrepareFavoriteBuildRef_b__1(::System::Boolean ok)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__DISPLAYCLASS9_0__PREPAREFAVORITEBUILDREF_B__1_OFFSET))(this, ok);
		}
	};
}
