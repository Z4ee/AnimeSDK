#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MultiVoiceSelectType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYMULTIVOICETALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18C0E500)
#define RPG_GAMECORE_PLAYMULTIVOICETALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C0E480)
#define RPG_GAMECORE_PLAYMULTIVOICETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0E4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMultiVoiceTalk_TypeDefinitionIndex = 20099;

	class PlayMultiVoiceTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x18
		::RPG::GameCore::MultiVoiceSelectType SelectType; // 0x1C
		::System::Boolean KeepDisplay; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMULTIVOICETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayMultiVoiceTalk*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMultiVoiceTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMULTIVOICETALK_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayMultiVoiceTalk* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayMultiVoiceTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMULTIVOICETALK_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
