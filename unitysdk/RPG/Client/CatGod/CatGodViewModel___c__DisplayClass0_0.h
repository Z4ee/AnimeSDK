#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7DC23325A7BADE20;
namespace RPG::Client::CatGod { class CatGodViewModel; }

#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C85DCC0)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1C85DD10)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL___C__DISPLAYCLASS0_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x1C85DE20)

namespace RPG::Client::CatGod
{
	inline static constexpr unsigned int CatGodViewModel___c__DisplayClass0_0_TypeDefinitionIndex = 80328;

	class CatGodViewModel___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::CatGod::CatGodViewModel* __4__this; // 0x10
		::Class_1_7DC23325A7BADE20* catGodService; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET))(this);
		}

		::System::Void __ctor_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODVIEWMODEL___C__DISPLAYCLASS0_0___CTOR_B__1_OFFSET))(this);
		}
	};
}
