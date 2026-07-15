#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUEHANDBOOKAEONSDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A45F070)
#define RPG_CLIENT_ROGUEHANDBOOKAEONSDATA___C__DISPLAYCLASS1_0__UPDATEBYSERVER_B__0_OFFSET UNITYSDK_OFFSET(0x1A45FC40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookAeonsData___c__DisplayClass1_0_TypeDefinitionIndex = 64371;

	class RogueHandbookAeonsData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 currentDoc; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONSDATA___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateByServer_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONSDATA___C__DISPLAYCLASS1_0__UPDATEBYSERVER_B__0_OFFSET))(this, a1);
		}
	};
}
