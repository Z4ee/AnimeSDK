#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSHOWTALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBDCFBD0)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingShowTalkData_TypeDefinitionIndex = 72352;

	class ChenLingShowTalkData : public ::System::Object
	{
	public:
		::System::UInt32 Target; // 0x10
		::RPG::Client::TextID Text; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSHOWTALKDATA__CTOR_OFFSET))(this);
		}
	};
}
