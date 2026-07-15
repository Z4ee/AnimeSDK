#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7DC23325A7BADE20;
namespace RPG::Client::CatGod { class CatGodViewModel; }

#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC5EBC0)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1AC5EC10)
#define RPG_CLIENT_CATGOD_CATGODVIEWMODEL___C__DISPLAYCLASS0_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x1AC5ED20)

namespace RPG::Client::CatGod
{
	inline static constexpr unsigned int CatGodViewModel___c__DisplayClass0_0_TypeDefinitionIndex = 76691;

	class CatGodViewModel___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::Class_1_7DC23325A7BADE20* catGodService; // 0x10
		::RPG::Client::CatGod::CatGodViewModel* __4__this; // 0x18

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
