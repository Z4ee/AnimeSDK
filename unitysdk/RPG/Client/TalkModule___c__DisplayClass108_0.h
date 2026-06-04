#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TalkOptionData; }
namespace RPG::GameCore { class JsonEnum; }

#define RPG_CLIENT_TALKMODULE___C__DISPLAYCLASS108_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC9CFA60)
#define RPG_CLIENT_TALKMODULE___C__DISPLAYCLASS108_0__GETCURRENTSKIPDEFAULTOPTIONINDEX_B__0_OFFSET UNITYSDK_OFFSET(0xC9D3490)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkModule___c__DisplayClass108_0_TypeDefinitionIndex = 63656;

	class TalkModule___c__DisplayClass108_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* sortOptionIconType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___C__DISPLAYCLASS108_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetCurrentSkipDefaultOptionIndex_b__0(::RPG::Client::TalkOptionData* a1, ::RPG::Client::TalkOptionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TalkOptionData*, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKMODULE___C__DISPLAYCLASS108_0__GETCURRENTSKIPDEFAULTOPTIONINDEX_B__0_OFFSET))(this, a1, a2);
		}
	};
}
