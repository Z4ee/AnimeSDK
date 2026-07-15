#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYMESSAGE_METHOD_3_6743730682F31DF3_OFFSET UNITYSDK_OFFSET(0x1BA038F0)
#define RPG_GAMECORE_PLAYMESSAGE_METHOD_3_7FA2D28FBBEBF220_OFFSET UNITYSDK_OFFSET(0x1BA03940)
#define RPG_GAMECORE_PLAYMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA03930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMessage_TypeDefinitionIndex = 20324;

	class PlayMessage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MessageSectionID; // 0x18
		::System::Boolean ShowNotice; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMESSAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6743730682F31DF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMessage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMessage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMESSAGE_METHOD_3_6743730682F31DF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FA2D28FBBEBF220(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayMessage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMESSAGE_METHOD_3_7FA2D28FBBEBF220_OFFSET))(a1, a2);
		}
	};
}
