#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HandbookModule; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS117_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD2F7A60)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS117_0__PREPAREOPENCONDTIONMISSION_B__0_OFFSET UNITYSDK_OFFSET(0xD2FB8F0)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS117_0__PREPAREOPENCONDTIONMISSION_B__1_OFFSET UNITYSDK_OFFSET(0xD2FB9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass117_0_TypeDefinitionIndex = 65633;

	class HandbookModule___c__DisplayClass117_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::HandbookModule* __4__this; // 0x18
		::RPG::Client::Promises::Promise* promise; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS117_0__CTOR_OFFSET))(this);
		}

		::System::Void _PrepareOpenCondtionMission_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS117_0__PREPAREOPENCONDTIONMISSION_B__0_OFFSET))(this);
		}

		::System::Void _PrepareOpenCondtionMission_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS117_0__PREPAREOPENCONDTIONMISSION_B__1_OFFSET))(this);
		}
	};
}
