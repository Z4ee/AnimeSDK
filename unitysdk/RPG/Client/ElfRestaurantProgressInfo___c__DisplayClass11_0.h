#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCE88FA0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__DISPLAYCLASS11_0__ISCURRENTDAYLOCKNEXTDAYMISSIONFINISH_B__0_OFFSET UNITYSDK_OFFSET(0xCE8A3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantProgressInfo___c__DisplayClass11_0_TypeDefinitionIndex = 63789;

	class ElfRestaurantProgressInfo___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _IsCurrentDayLockNextDayMissionFinish_b__0(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__DISPLAYCLASS11_0__ISCURRENTDAYLOCKNEXTDAYMISSIONFINISH_B__0_OFFSET))(this, a1);
		}
	};
}
