#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MuseumModule; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DBBD70)
#define RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS25_0___REFRESHFORCEMISSIONDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9DC58A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumModule___c__DisplayClass25_0_TypeDefinitionIndex = 53960;

	class MuseumModule___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::RPG::Client::MuseumModule* __4__this; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshForceMissionData_b__0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS25_0___REFRESHFORCEMISSIONDATA_B__0_OFFSET))(this, dataList);
		}
	};
}
