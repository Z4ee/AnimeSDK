#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumModule; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS171_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9DC3540)
#define RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS171_0___REFRESHSTAFFAVAILABLE_B__0_OFFSET UNITYSDK_OFFSET(0x9DC5600)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumModule___c__DisplayClass171_0_TypeDefinitionIndex = 53956;

	class MuseumModule___c__DisplayClass171_0 : public ::System::Object
	{
	public:
		::RPG::Client::MuseumModule* __4__this; // 0x10
		::RPG::Client::Promises::Promise* finishPromise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS171_0__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshStaffAvailable_b__0(::System::Collections::Generic::IEnumerable_1<::System::Boolean>* v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS171_0___REFRESHSTAFFAVAILABLE_B__0_OFFSET))(this, v);
		}
	};
}
