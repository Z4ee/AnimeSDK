#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournRelicCocoonData; }

#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7B5AA0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__DISPLAYCLASS17_0___GENERATECOCOONDATADICT_B__0_OFFSET UNITYSDK_OFFSET(0x1C7B5EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRelicCocoonCollection___c__DisplayClass17_0_TypeDefinitionIndex = 67767;

	class RogueTournRelicCocoonCollection___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GenerateCocoonDataDict_b__0(::RPG::Client::RogueTournRelicCocoonData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournRelicCocoonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION___C__DISPLAYCLASS17_0___GENERATECOCOONDATADICT_B__0_OFFSET))(this, a1);
		}
	};
}
