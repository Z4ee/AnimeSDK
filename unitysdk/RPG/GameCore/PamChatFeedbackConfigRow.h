#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PAMCHATFEEDBACKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BD03B0)
#define RPG_GAMECORE_PAMCHATFEEDBACKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD0530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamChatFeedbackConfigRow_TypeDefinitionIndex = 13568;

	class PamChatFeedbackConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATFEEDBACKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PamChatFeedbackConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamChatFeedbackConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATFEEDBACKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
