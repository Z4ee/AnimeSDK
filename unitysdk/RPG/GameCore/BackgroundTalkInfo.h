#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SimpleTalkStyle; }

#define RPG_GAMECORE_BACKGROUNDTALKINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FC2200)
#define RPG_GAMECORE_BACKGROUNDTALKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC23E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BackgroundTalkInfo_TypeDefinitionIndex = 21605;

	class BackgroundTalkInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single AutoSkipTime; // 0x10
		::System::Boolean ProtectByVoice; // 0x14
		::System::Single ForceToNextTime; // 0x18
		::System::UInt32 TalkSentenceID; // 0x1C
		::RPG::GameCore::SimpleTalkStyle* Style; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDTALKINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BackgroundTalkInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BackgroundTalkInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDTALKINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
