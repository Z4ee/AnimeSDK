#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_MATCH3_MATCHTHREEIMAGEDIALOGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF9E070)

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int MatchThreeImageDialogInfo_TypeDefinitionIndex = 41403;

	class MatchThreeImageDialogInfo : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MATCH3_MATCHTHREEIMAGEDIALOGINFO__CTOR_OFFSET))(this);
		}
	};
}
