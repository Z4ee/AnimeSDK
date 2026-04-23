#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueKeywordData; }

#define RPG_CLIENT_ROGUEKEYWORDINFO___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB049890)
#define RPG_CLIENT_ROGUEKEYWORDINFO___C__DISPLAYCLASS1_0__GETROGUEKEYWORDDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB04A8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueKeywordInfo___c__DisplayClass1_0_TypeDefinitionIndex = 61970;

	class RogueKeywordInfo___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRogueKeywordData_b__0(::RPG::Client::RogueKeywordData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueKeywordData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDINFO___C__DISPLAYCLASS1_0__GETROGUEKEYWORDDATA_B__0_OFFSET))(this, item);
		}
	};
}
