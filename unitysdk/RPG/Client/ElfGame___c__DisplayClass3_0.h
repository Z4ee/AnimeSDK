#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfGame; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_ELFGAME___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC77040)
#define RPG_CLIENT_ELFGAME___C__DISPLAYCLASS3_0__PREPARESHOWELFUIAFTERFINISHMISSION_B__0_OFFSET UNITYSDK_OFFSET(0x1AC7D8D0)
#define RPG_CLIENT_ELFGAME___C__DISPLAYCLASS3_0__PREPARESHOWELFUIAFTERFINISHMISSION_B__1_OFFSET UNITYSDK_OFFSET(0x1AC7D900)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfGame___c__DisplayClass3_0_TypeDefinitionIndex = 63756;

	class ElfGame___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::ElfGame* __4__this; // 0x10
		::System::UInt32 requireFinishSubMission; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareShowElfUIAfterFinishMission_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME___C__DISPLAYCLASS3_0__PREPARESHOWELFUIAFTERFINISHMISSION_B__0_OFFSET))(this);
		}

		::System::Void _PrepareShowElfUIAfterFinishMission_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME___C__DISPLAYCLASS3_0__PREPARESHOWELFUIAFTERFINISHMISSION_B__1_OFFSET))(this);
		}
	};
}
