#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueBuffData; }

#define RPG_CLIENT_ROGUEBUFFINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC79600)
#define RPG_CLIENT_ROGUEBUFFINFO___C__DISPLAYCLASS11_0__GETACHIVEDBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x1BC798F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffInfo___c__DisplayClass11_0_TypeDefinitionIndex = 67196;

	class RogueBuffInfo___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::UInt32 buffID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAchivedBuff_b__0(::RPG::Client::RogueBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO___C__DISPLAYCLASS11_0__GETACHIVEDBUFF_B__0_OFFSET))(this, a1);
		}
	};
}
