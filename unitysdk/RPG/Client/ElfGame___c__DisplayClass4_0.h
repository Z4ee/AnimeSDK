#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfGame; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_ELFGAME___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC776E0)
#define RPG_CLIENT_ELFGAME___C__DISPLAYCLASS4_0__PREPAREEXITELFUI_B__0_OFFSET UNITYSDK_OFFSET(0x1AC7D940)
#define RPG_CLIENT_ELFGAME___C__DISPLAYCLASS4_0__PREPAREEXITELFUI_B__1_OFFSET UNITYSDK_OFFSET(0x1AC7D960)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfGame___c__DisplayClass4_0_TypeDefinitionIndex = 63758;

	class ElfGame___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::RPG::Client::ElfGame* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _PrepareExitElfUI_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME___C__DISPLAYCLASS4_0__PREPAREEXITELFUI_B__0_OFFSET))(this);
		}

		::System::Void _PrepareExitElfUI_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME___C__DISPLAYCLASS4_0__PREPAREEXITELFUI_B__1_OFFSET))(this);
		}
	};
}
