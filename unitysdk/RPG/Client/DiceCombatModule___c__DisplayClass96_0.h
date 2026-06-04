#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DiceCombatModule; }
namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS96_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB7EDD30)
#define RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS96_0__UPDATEV1FRIENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB7EDD40)
#define RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS96_0__UPDATEV1FRIENDDATA_B__1_OFFSET UNITYSDK_OFFSET(0xB7EDD80)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatModule___c__DisplayClass96_0_TypeDefinitionIndex = 59486;

	class DiceCombatModule___c__DisplayClass96_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::RPG::Client::DiceCombatModule* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS96_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateV1FriendData_b__0(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS96_0__UPDATEV1FRIENDDATA_B__0_OFFSET))(this, a1);
		}

		::System::Void _UpdateV1FriendData_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__DISPLAYCLASS96_0__UPDATEV1FRIENDDATA_B__1_OFFSET))(this, a1);
		}
	};
}
