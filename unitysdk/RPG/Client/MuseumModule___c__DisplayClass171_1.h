#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumModule___c__DisplayClass171_0; }
namespace RPG::Client { class MuseumStaffData; }

#define RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS171_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAB0C4A0)
#define RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS171_1___REFRESHSTAFFAVAILABLE_B__1_OFFSET UNITYSDK_OFFSET(0xAB0C4B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumModule___c__DisplayClass171_1_TypeDefinitionIndex = 61102;

	class MuseumModule___c__DisplayClass171_1 : public ::System::Object
	{
	public:
		::RPG::Client::MuseumStaffData* museumStaffData; // 0x10
		::RPG::Client::MuseumModule___c__DisplayClass171_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS171_1__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshStaffAvailable_b__1(::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS171_1___REFRESHSTAFFAVAILABLE_B__1_OFFSET))(this, isFinish);
		}
	};
}
